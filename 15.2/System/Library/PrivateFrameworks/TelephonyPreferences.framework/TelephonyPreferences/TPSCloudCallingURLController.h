@class NSURL, NSData, TPSCloudCallingWebViewController, TUSenderIdentityCapabilities, CTXPCServiceSubscriptionContext, TPSCarrierBundleController;
@protocol TPSCloudCallingURLControllerDelegate;

@interface TPSCloudCallingURLController : NSObject

@property (retain, nonatomic) TPSCarrierBundleController *carrierBundleController;
@property (weak, nonatomic) TPSCloudCallingWebViewController *webViewController;
@property (weak, nonatomic) id<TPSCloudCallingURLControllerDelegate> delegate;
@property (readonly, nonatomic) TUSenderIdentityCapabilities *subscriptionCapabilities;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (readonly, nonatomic) BOOL shouldEnableCapability;
@property (readonly, nonatomic, getter=isCapabilityEnabled) BOOL capabilityEnabled;
@property (readonly, nonatomic) int capabilityProvisioningStatus;
@property (readonly, copy, nonatomic) NSURL *capabilityProvisioningURL;
@property (readonly, nonatomic, getter=isCapabilityProvisioningURLInvalid) BOOL capabilityProvisioningURLInvalid;
@property (readonly, copy, nonatomic) NSData *capabilityProvisioningPostData;

- (void).cxx_destruct;
- (id)init;
- (id)initWithSubscriptionContext:(id)a0;
- (void)enableCapability;
- (void)reloadWebViewController;
- (void)webSheetCompletion;
- (id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)a0;
- (void)loadWebViewController;
- (id)genericErrorAlertController;
- (id)_webViewControllerWithType:(long long)a0;
- (id)provisionCapabilityController;
- (id)updateEmergencyAddressController;

@end
