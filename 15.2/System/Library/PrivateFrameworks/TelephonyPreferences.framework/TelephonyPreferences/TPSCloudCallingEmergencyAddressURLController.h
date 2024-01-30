@class NSString;

@interface TPSCloudCallingEmergencyAddressURLController : TPSCloudCallingURLController <TUCallCapabilitiesDelegatePrivate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCapabilityEnabled;
- (void)didChangeWiFiCallingProvisionalURLForSenderIdentityWithUUID:(id)a0;
- (id)initWithSubscriptionContext:(id)a0;
- (void)enableCapability;
- (void)webSheetCompletion;
- (int)capabilityProvisioningStatus;
- (id)capabilityProvisioningURL;
- (BOOL)isCapabilityProvisioningURLInvalid;
- (id)capabilityProvisioningPostData;

@end
