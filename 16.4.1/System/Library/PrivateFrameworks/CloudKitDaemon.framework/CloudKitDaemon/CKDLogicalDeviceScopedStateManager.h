@class CKDLogicalDeviceContext;

@interface CKDLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedDaemon>

@property (retain, nonatomic) CKDLogicalDeviceContext *deviceContext;

- (id)initWithDeviceContext:(id)a0;
- (void)clearAllClouddThrottles;
- (void)addClouddThrottle:(id)a0;
- (void)allClouddThrottlesWithCompletionHandler:(id /* block */)a0;
- (void)postClouddWalrusUpdateNotification;
- (void).cxx_destruct;

@end
