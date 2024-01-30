@class NSMapTable, _EDPersistenceDatabaseConnectionWrapper, NSMutableSet, NSLock, EFResourcePool;
@protocol EDPersistenceDatabaseConnectionPoolDelegate;

@interface EDPersistenceDatabaseConnectionPool : NSObject {
    NSLock *_cacheLock;
    NSMutableSet *_cache;
    unsigned long long _cacheSize;
    unsigned long long _cacheGeneration;
    NSLock *_checkoutLock;
    NSMapTable *_checkoutMap;
    NSLock *_writerLock;
    _EDPersistenceDatabaseConnectionWrapper *_writerConnection;
    int _writersWaiting;
    int _backgroundReadersWaiting;
    EFResourcePool *_backgroundReaderResources;
}

@property (weak, nonatomic) id<EDPersistenceDatabaseConnectionPoolDelegate> delegate;
@property (nonatomic) unsigned long long cacheSize;
@property (readonly, nonatomic) unsigned long long maxConcurrentBackgroundReaders;
@property (readonly, nonatomic) unsigned long long backgroundReadersWaiting;
@property (readonly, nonatomic) unsigned long long writersWaiting;

- (BOOL)_lockForConnectionType:(unsigned long long)a0 resource:(id *)a1;
- (unsigned long long)maxConcurrentReaders;
- (void)flush;
- (void)_unlockForConnectionType:(unsigned long long)a0 resource:(id)a1;
- (void)dealloc;
- (id)_connectionWithType:(unsigned long long)a0;
- (void)checkInConnection:(id)a0;
- (id)initWithDelegate:(id)a0 maxConcurrentBackgroundReaders:(unsigned long long)a1;
- (id)writerConnection;
- (id)readerConnection;
- (id)init;
- (id)backgroundReaderConnection;
- (void).cxx_destruct;

@end
