@class NSString;

@interface TPSCloudCallingEmergencyAddressURLController : TPSCloudCallingURLController <TUCallCapabilitiesDelegatePrivate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didChangeWiFiCallingProvisionalURLForSenderIdentityWithUUID:(id)a0;
- (id)capabilityProvisioningPostData;
- (int)capabilityProvisioningStatus;
- (id)capabilityProvisioningURL;
- (void)enableCapability;
- (id)initWithSubscriptionContext:(id)a0;
- (BOOL)isCapabilityEnabled;
- (BOOL)isCapabilityProvisioningURLInvalid;
- (void)webSheetCompletion;

@end
