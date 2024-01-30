@class NSSQLiteConnection;

@interface NSSQLUbiquitizedStoreConnectionManager : NSSQLConnectionManager {
    NSSQLiteConnection *_connection;
}

- (void)disconnectAllConnections;
- (void)scheduleConnectionsBarrier:(id /* block */)a0;
- (id)initWithSQLCore:(id)a0 priority:(unsigned long long)a1 seedConnection:(id)a2;
- (BOOL)handleStoreRequest:(id)a0;
- (void)setExclusiveLockingMode:(BOOL)a0;
- (void)scheduleBarrierBlock:(id /* block */)a0;
- (void)dealloc;

@end
