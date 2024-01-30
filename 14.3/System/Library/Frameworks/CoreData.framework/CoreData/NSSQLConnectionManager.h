@class NSSQLCore;

@interface NSSQLConnectionManager : NSObject {
    NSSQLCore *_sqlCore;
}

@property (copy, nonatomic) id /* block */ filter;

- (id)sqlCore;
- (void)scheduleConnectionsBarrier:(id /* block */)a0;
- (void)setExclusiveLockingMode:(BOOL)a0;
- (void)dealloc;
- (void)disconnectAllConnections;
- (void)scheduleBarrierBlock:(id /* block */)a0;
- (BOOL)willHandleStoreRequest:(id)a0;
- (id)initializationConnection;
- (id)initWithSQLCore:(id)a0 priority:(unsigned long long)a1 seedConnection:(id)a2;
- (id)initWithSQLCore:(id)a0 seedConnection:(id)a1;
- (BOOL)handleStoreRequest:(id)a0;

@end
