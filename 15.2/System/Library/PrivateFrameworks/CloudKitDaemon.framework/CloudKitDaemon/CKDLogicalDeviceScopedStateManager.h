@class CKDLogicalDeviceContext;

@interface CKDLogicalDeviceScopedStateManager : NSObject <CKXPCLogicalDeviceScopedDaemon>

@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext;

- (void)clearAllClouddThrottles;
- (id)initWithDeviceContext:(id)a0;
- (void).cxx_destruct;
- (void)addClouddThrottle:(id)a0;
- (void)allClouddThrottlesWithCompletionHandler:(id /* block */)a0;

@end
