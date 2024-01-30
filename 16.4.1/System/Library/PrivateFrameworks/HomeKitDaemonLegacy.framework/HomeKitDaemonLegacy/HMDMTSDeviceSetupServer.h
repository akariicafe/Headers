@class NSString, HMDAccessorySetupManager;

@interface HMDMTSDeviceSetupServer : HMFObject <HMFLogging, MTSXPCDeviceSetupClientProxyDelegate>

@property (readonly) HMDAccessorySetupManager *accessorySetupManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)clientProxy:(id)a0 performDeviceSetupUsingRequest:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAccessorySetupManager:(id)a0;

@end
