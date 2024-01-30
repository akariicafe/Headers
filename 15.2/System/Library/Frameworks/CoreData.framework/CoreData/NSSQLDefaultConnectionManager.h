@class NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NSSQLDefaultConnectionManager : NSSQLConnectionManager {
    NSMutableArray *_availableConnections;
    NSArray *_allConnections;
    NSObject<OS_dispatch_semaphore> *_poolCounter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

- (void)disconnectAllConnections;
- (void)scheduleConnectionsBarrier:(id /* block */)a0;
- (id)initWithSQLCore:(id)a0 priority:(unsigned long long)a1 seedConnection:(id)a2;
- (BOOL)handleStoreRequest:(id)a0;
- (void)setExclusiveLockingMode:(BOOL)a0;
- (void)scheduleBarrierBlock:(id /* block */)a0;
- (void)dealloc;
- (void)enumerateAvailableConnectionsWithBlock:(id /* block */)a0;

@end
