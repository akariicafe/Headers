@class TUSenderIdentityCapabilities, NSString, CTXPCServiceSubscriptionContext, NSDictionary, TPSCloudCallingEmergencyAddressURLController, TPSCarrierBundleController, TPSCloudCallingThumperProvisioningURLController, TPSEncryptedIdentityClient;

@interface TPSWiFiCallingController : NSObject <TUCallCapabilitiesDelegatePrivate>

@property (retain, nonatomic) TPSCarrierBundleController *carrierBundleController;
@property (retain, nonatomic) TPSEncryptedIdentityClient *encryptedIdentityClient;
@property (copy, nonatomic) NSDictionary *encryptedIdentityInfo;
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (retain, nonatomic) TUSenderIdentityCapabilities *subscriptionCapabilities;
@property (readonly, nonatomic) BOOL supportsEncryptedIdentity;
@property (nonatomic, getter=isThumperCallingEnabled) BOOL thumperCallingEnabled;
@property (nonatomic, getter=isWiFiCallingEnabled) BOOL wiFiCallingEnabled;
@property (nonatomic, getter=isWiFiCallingRoamingEnabled) BOOL wiFiCallingRoamingEnabled;
@property (readonly, nonatomic) BOOL supportsThumperCalling;
@property (readonly, nonatomic) BOOL supportsWiFiCalling;
@property (readonly, nonatomic) BOOL supportsWiFiEmergencyCalling;
@property (readonly, copy, nonatomic) NSString *localizedCarrierName;
@property (retain, nonatomic) TPSCloudCallingEmergencyAddressURLController *emergencyAddressURLController;
@property (retain, nonatomic) TPSCloudCallingThumperProvisioningURLController *thumperProvisioningURLController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)didChangeThumperCallingCapabilitiesForSenderIdentityWithUUID:(id)a0;
- (void)didChangeWiFiCallingCapabilitiesForSenderIdentityWithUUID:(id)a0;
- (id)initWithSubscriptionContext:(id)a0;
- (id)subscriptionCapabilitiesForSubscriptionContextUUID:(id)a0;

@end
