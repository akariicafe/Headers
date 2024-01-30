@protocol GCConfigXPCServiceClientInterface;

@interface GCConfigXPCServiceConnection : GCIPCRemoteOutgoingConnection

@property (retain, nonatomic) id<GCConfigXPCServiceClientInterface> client;

- (id)connectToService:(id)a0 withClient:(id)a1;
- (id)init;

@end
