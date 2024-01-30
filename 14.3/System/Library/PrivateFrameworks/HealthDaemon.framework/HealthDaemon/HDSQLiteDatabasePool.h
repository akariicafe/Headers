@class NSString, NSMapTable, NSMutableSet, NSCondition, NSObject;
@protocol OS_dispatch_group, OS_dispatch_semaphore, HDSQLiteDatabasePoolDelegate;

@interface HDSQLiteDatabasePool : NSObject <HDDiagnosticObject> {
    NSCondition *_cacheCondition;
    NSMutableSet *_cache;
    NSObject<OS_dispatch_group> *_flushGroup;
    unsigned long long _cacheGeneration;
    long long _cacheSize;
    long long _concurrentReaderLimit;
    _Atomic int _count;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _checkoutLock;
    NSMapTable *_checkoutMap;
    NSObject<OS_dispatch_semaphore> *_readerSemaphore;
    NSObject<OS_dispatch_semaphore> *_writerSemaphore;
}

@property (weak) id<HDSQLiteDatabasePoolDelegate> delegate;
@property (readonly) long long count;
@property (readonly) long long cacheSize;
@property (readonly) long long concurrentReaderLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConcurrentReaderLimit:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_semaphoreForCheckOutOptions:(unsigned long long)a0;
- (void)_addDatabaseWrapperToCheckoutMap:(id)a0;
- (id)diagnosticDescription;
- (id)flush;
- (void)_didFlushDatabases:(id)a0;
- (id)_removeDatabaseFromCheckoutMap:(id)a0;
- (id)checkOutDatabaseWithOptions:(unsigned long long)a0 error:(id *)a1;
- (void)checkInDatabase:(id)a0 flushImmediately:(BOOL)a1;

@end
