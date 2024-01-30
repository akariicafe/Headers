@class NSString, NSXPCConnection;

@interface _COClusterRoleMonitorConnectionProvider : NSObject <COClusterRoleMonitorConnectionProvider>

@property (readonly, nonatomic) NSXPCConnection *clusterRoleMonitorServiceConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
