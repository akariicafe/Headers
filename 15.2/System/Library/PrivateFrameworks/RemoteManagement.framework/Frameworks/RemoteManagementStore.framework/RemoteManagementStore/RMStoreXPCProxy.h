@interface RMStoreXPCProxy : NSObject

+ (id)newInterface;
+ (id)newConnection;
+ (id)newDaemonConnection;
+ (id)newAgentConnection;
+ (id)newConnectionWithListenerEndpoint:(id)a0;

@end
