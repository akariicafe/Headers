@class NSSQLiteConnection;

@interface NSSQLUbiquitizedStoreConnectionManager : NSSQLConnectionManager {
    NSSQLiteConnection *_connection;
}

- (void)disconnectAllConnections;
- (void)setExclusiveLockingMode:(BOOL)a0;
- (BOOL)handleStoreRequest:(id)a0;
- (void)scheduleConnectionsBarrier:(id /* block */)a0;
- (void)dealloc;
- (id)initWithSQLCore:(id)a0 priority:(unsigned long long)a1 seedConnection:(id)a2;
- (void)scheduleBarrierBlock:(id /* block */)a0;

@end
