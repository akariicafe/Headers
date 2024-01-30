@class CKDMetadataCache, CKTestDevice, NSURL, CKTestServer, CKDThrottleManager, CKDLogicalDeviceScopedStateManager, CKTestDeviceReference, CKDAccountDataSecurityObserver, CKDOperationInfoCache, CKDTokenRegistrationScheduler;

@interface CKDLogicalDeviceContext : NSObject

@property (retain, nonatomic) CKTestServer *testServer;
@property (retain, nonatomic) CKDMetadataCache *metadataCache;
@property (retain, nonatomic) CKDOperationInfoCache *operationInfoCache;
@property (retain, nonatomic) CKDThrottleManager *throttleManager;
@property (retain, nonatomic) CKDLogicalDeviceScopedStateManager *deviceScopedStateManager;
@property (retain, nonatomic) CKDTokenRegistrationScheduler *tokenRegistrationScheduler;
@property (retain, nonatomic) CKDAccountDataSecurityObserver *accountDataSecurityObserver;
@property (readonly, nonatomic) CKTestDeviceReference *testDeviceReference;
@property (readonly, nonatomic) CKTestDevice *testDevice;
@property (readonly, nonatomic) BOOL isLiveDevice;
@property (readonly, nonatomic) NSURL *cacheDirectory;
@property (readonly, nonatomic) BOOL hasValidCredentials;
@property (readonly, nonatomic) BOOL wantsPushRegistration;
@property (readonly, nonatomic) BOOL wantsFlowControl;

+ (id)deviceContextForTestDeviceReference:(id)a0;
+ (id)defaultContext;
+ (id)existingDefaultContext;

- (void).cxx_destruct;
- (id)_initWithTestDeviceReference:(id)a0;

@end
