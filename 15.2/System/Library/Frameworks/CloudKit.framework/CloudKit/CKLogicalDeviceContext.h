@class CKLogicalDeviceScopedStateManager, CKThrottleManager, CKTestDevice, CKTestDeviceReference, CKLogicalDeviceScopedDaemonProxy;

@interface CKLogicalDeviceContext : NSObject

@property (retain, nonatomic) CKLogicalDeviceScopedDaemonProxy *deviceScopedDaemonProxy;
@property (retain, nonatomic) CKLogicalDeviceScopedStateManager *deviceScopedStateManager;
@property (retain, nonatomic) CKThrottleManager *throttleManager;
@property (retain, nonatomic) CKTestDevice *testDevice;
@property (readonly, nonatomic) CKTestDeviceReference *testDeviceReference;
@property (readonly, nonatomic) BOOL wantsFlowControl;

+ (id)deviceContextForTestDeviceReference:(id)a0;
+ (id)defaultContext;

- (void).cxx_destruct;
- (id)_initWithTestDeviceReference:(id)a0;

@end
