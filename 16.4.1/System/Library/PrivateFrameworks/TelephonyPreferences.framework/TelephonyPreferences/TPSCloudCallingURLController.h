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

- (id)init;
- (void).cxx_destruct;
- (id)_webViewControllerWithType:(long long)a0;
- (void)enableCapability;
- (id)genericErrorAlertController;
- (id)initWithSubscriptionContext:(id)a0;
- (void)loadWebViewController;
- (id)provisionCapabilityController;
- (void)reloadWebViewController;
- (id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)a0;
- (id)updateEmergencyAddressController;
- (void)webSheetCompletion;

@end
