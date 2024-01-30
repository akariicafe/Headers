@class NSString;

@interface TPSCloudCallingThumperProvisioningURLController : TPSCloudCallingURLController <TUCallCapabilitiesDelegatePrivate>

@property (readonly, nonatomic) BOOL shouldShowUpgradeToThumperButton;
@property (readonly, nonatomic, getter=isThumperProvisioningInProcess) BOOL thumperProvisioningInProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(id)a0;
- (id)initWithSubscriptionContext:(id)a0;
- (void)enableCapability;
- (void)webSheetCompletion;
- (BOOL)isCapabilityEnabled;
- (int)capabilityProvisioningStatus;
- (id)capabilityProvisioningURL;
- (BOOL)isCapabilityProvisioningURLInvalid;
- (id)capabilityProvisioningPostData;
- (id)requestTimeoutController;
- (BOOL)shouldShowEmergencyAddress;

@end
