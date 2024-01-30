@class NSMutableArray;

@interface ICClientManager : NSObject {
    BOOL _clientAdded;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientsLock;
}

@property (retain, nonatomic) NSMutableArray *clients;
@property (nonatomic) id delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)findClientWithPID:(id)a0;
- (unsigned long long)removeClientWithPID:(id)a0;
- (unsigned long long)currentClientCount;
- (id)copyClientsArray;
- (void)sendMessage:(id)a0 withConnection:(id)a1;
- (void)addClientWithConnection:(id)a0;
- (void)sendMessage:(id)a0 forClientWithPID:(id)a1;
- (void)addNotifications:(id)a0 toClientWithPID:(id)a1;
- (void)remNotifications:(id)a0 toClientWithPID:(id)a1;
- (int)clientUsingDevice;
- (void)setClientWithPID:(id)a0 usingDevice:(BOOL)a1;
- (void)setClientWithPID:(id)a0 usingObjectHandle:(id)a1;
- (id)clientConnectionsMonitoringNotification:(id)a0;
- (id)clientConnectionsMonitoringObjectID:(id)a0;
- (id)allClientConnections;

@end
