@class CKLogicalDeviceScopedDaemonProxy, CKThrottleManager, CKLogicalDeviceScopedStateManager;
@protocol CKTestDeviceReferenceProtocol, CKTestDeviceProtocol;

@interface CKLogicalDeviceContext : NSObject

@property (readonly, nonatomic) id<CKTestDeviceReferenceProtocol> testDeviceReferenceProtocol;
@property (readonly, nonatomic) id<CKTestDeviceProtocol> testDeviceProtocol;
@property (readonly, nonatomic) CKLogicalDeviceScopedDaemonProxy *deviceScopedDaemonProxy;
@property (readonly, nonatomic) CKLogicalDeviceScopedStateManager *deviceScopedStateManager;
@property (readonly, nonatomic) CKThrottleManager *throttleManager;
@property (readonly, nonatomic) BOOL useLiveServer;
@property (readonly, nonatomic) long long pushBehavior;

+ (id)defaultContext;
+ (id)deviceContextForTestDeviceReferenceProtocol:(id)a0;

- (id)_initWithTestDeviceReferenceProtocol:(id)a0 useLiveServer:(BOOL)a1;
- (void).cxx_destruct;
- (id)deviceScopedPushTopic:(id)a0;

@end
