@protocol REMXPCDaemonControllerCloudKitNetworkActivityDelegate;

@interface REMXPCDaemonControllerExportedObject : NSObject <REMXPCClient>

@property (weak, nonatomic) id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate> cloudKitNetworkActivityDelegate;

- (void).cxx_destruct;
- (void)cloudKitNetworkActivityDidUpdate:(id)a0;

@end
