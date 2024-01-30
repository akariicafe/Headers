@class NSObject, NSString, AMSSQLiteConnection;
@protocol OS_dispatch_queue;

@interface AMSMetricsDatabase : NSObject <AMSSQLiteConnectionDelegate>

@property (retain, nonatomic) AMSSQLiteConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic) long long keepAliveCount;
@property (retain, nonatomic) NSString *containerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDatabaseWithContainerId:(id)a0;

- (void)setIdentifier:(id)a0 forKey:(id)a1 account:(id)a2 duration:(double)a3 error:(id *)a4;
- (void)unlockEvents:(id)a0 error:(id *)a1;
- (void)dropAllEventsWithLockKey:(id)a0 error:(id *)a1;
- (id)_lockedById;
- (void)close;
- (void).cxx_destruct;
- (void)dealloc;
- (id)identifierForKey:(id)a0 account:(id)a1 error:(id *)a2;
- (void)_performTransaction:(id /* block */)a0;
- (void)insertEvents:(id)a0 error:(id *)a1;
- (void)removeIdentifiersForAccount:(id)a0 error:(id *)a1;
- (void)unlockAllEventsWithKey:(id)a0 error:(id *)a1;
- (long long)countAllEventsWithLockKey:(id)a0 error:(id *)a1;
- (id)lockAllEventsWithError:(id *)a0;
- (id)initWithContainerId:(id)a0;
- (void)cleanupInvalidIdentifiersWithError:(id *)a0;
- (void)enumerateEventsWithTopic:(id)a0 lockKey:(id)a1 objectBlock:(id /* block */)a2;
- (void)dropEvents:(id)a0 error:(id *)a1;
- (BOOL)connectionNeedsResetForCorruption:(id)a0;

@end
