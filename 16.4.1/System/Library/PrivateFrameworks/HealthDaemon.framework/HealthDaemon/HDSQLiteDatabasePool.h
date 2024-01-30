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
@property (readonly) long long checkedOutDatabaseCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diagnosticDescription;
- (id)checkOutDatabaseWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)flush;
- (id)currentFlushGroup;
- (void)dealloc;
- (void)checkInDatabase:(id)a0 flushImmediately:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithConcurrentReaderLimit:(long long)a0;

@end
