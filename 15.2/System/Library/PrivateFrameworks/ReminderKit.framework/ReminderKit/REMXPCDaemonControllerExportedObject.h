@protocol REMXPCDaemonControllerCloudKitNetworkActivityDelegate;

@interface REMXPCDaemonControllerExportedObject : NSObject <REMXPCClient>

@property (weak, nonatomic) id<REMXPCDaemonControllerCloudKitNetworkActivityDelegate> cloudKitNetworkActivityDelegate;

- (void)cloudKitNetworkActivityDidUpdate:(id)a0;
- (void).cxx_destruct;

@end
