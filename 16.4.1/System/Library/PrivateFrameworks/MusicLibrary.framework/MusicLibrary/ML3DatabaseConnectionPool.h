@class NSString, NSMutableDictionary, _ML3DatabaseConnectionSubPool, NSUUID, NSObject;
@protocol ML3DatabaseConnectionPoolDelegate, OS_dispatch_queue;

@interface ML3DatabaseConnectionPool : NSObject {
    _ML3DatabaseConnectionSubPool *_readersSubPool;
    _ML3DatabaseConnectionSubPool *_writersSubPool;
    NSMutableDictionary *_identifiersConnectionsMap;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSUUID *_poolStorageKey;
    BOOL _useDistantWriterConnections;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _poolLockCondition;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _poolLockMutex;
}

@property (nonatomic, getter=isClosed) BOOL closed;
@property (readonly, nonatomic) NSString *databasePath;
@property (weak, nonatomic) id<ML3DatabaseConnectionPoolDelegate> delegate;
@property (readonly, nonatomic) unsigned long long maxReaders;
@property (readonly, nonatomic) unsigned long long maxWriters;
@property (nonatomic) unsigned long long connectionsJournalingMode;
@property (nonatomic) BOOL useDistantWriterConnections;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (readonly, nonatomic) BOOL isCurrentThreadConnectionInTransaction;

- (void)_setLocalConnection:(id)a0 forThread:(id)a1;
- (id)_generateDiagnostic;
- (void)lock;
- (void)unlock;
- (void)_setConnection:(id)a0 forIdentifier:(id)a1;
- (void)_closeAllConnectionsAndWaitForBusyConnections:(BOOL)a0;
- (id)debugDescription;
- (void)dealloc;
- (void)lockAndCloseAllConnectionsForTermination;
- (id)_connectionForIdentifier:(id)a0;
- (void)checkInConnection:(id)a0;
- (id)_connectionForWriting:(BOOL)a0 useThreadConnection:(BOOL)a1 storeThreadLocalConnection:(BOOL)a2;
- (void)closeAllConnections;
- (id)writerConnection;
- (id)readerConnection;
- (id)init;
- (id)initWithDatabasePath:(id)a0 maxReaders:(unsigned long long)a1 maxWriters:(unsigned long long)a2;
- (id)initWithDatabasePath:(id)a0 maxReaders:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)_localConnectionForThread:(id)a0;

@end
