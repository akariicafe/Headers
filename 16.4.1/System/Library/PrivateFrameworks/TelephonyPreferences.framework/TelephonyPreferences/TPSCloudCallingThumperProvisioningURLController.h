@class NSString;

@interface TPSCloudCallingThumperProvisioningURLController : TPSCloudCallingURLController <TUCallCapabilitiesDelegatePrivate>

@property (readonly, nonatomic) BOOL shouldShowUpgradeToThumperButton;
@property (readonly, nonatomic, getter=isThumperProvisioningInProcess) BOOL thumperProvisioningInProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeThumperCallingProvisionalURLForSenderIdentityWithUUID:(id)a0;
- (id)capabilityProvisioningPostData;
- (int)capabilityProvisioningStatus;
- (id)capabilityProvisioningURL;
- (void)enableCapability;
- (id)initWithSubscriptionContext:(id)a0;
- (BOOL)isCapabilityEnabled;
- (BOOL)isCapabilityProvisioningURLInvalid;
- (id)requestTimeoutController;
- (BOOL)shouldShowEmergencyAddress;
- (void)webSheetCompletion;

@end
