@class NSString, NSDictionary, ICDelegateToken, NSNumber, NSDate;

@interface ICMutableUserIdentityProperties : ICUserIdentityProperties

@property (nonatomic, getter=isActiveLocker) BOOL activeLocker;
@property (nonatomic, getter=isActive) BOOL active;
@property (copy, nonatomic) NSString *alternateDSID;
@property (copy, nonatomic) NSString *carrierBundleDeviceIdentifier;
@property (nonatomic, getter=isDelegated) BOOL delegated;
@property (copy, nonatomic) ICDelegateToken *delegateToken;
@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic, getter=isManagedAppleID) BOOL managedAppleID;
@property (nonatomic, getter=isSandboxed) BOOL sandboxed;
@property (copy, nonatomic) NSString *storefrontIdentifier;
@property (nonatomic, getter=isSubscriptionStatusEnabled) BOOL subscriptionStatusEnabled;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSDate *ageVerificationExpirationDate;
@property (copy, nonatomic) NSNumber *mergeToCloudLibraryPreference;
@property (copy, nonatomic) NSDictionary *cloudLibraryStateReason;
@property (copy, nonatomic) NSNumber *privateListeningEnabled;
@property (copy, nonatomic) NSDictionary *privacyAcknowledgementVersions;

- (void)setFirstName:(id)a0;
- (void)setLastName:(id)a0;
- (void)setStorefrontIdentifier:(id)a0;
- (void)setPrivateListeningEnabled:(id)a0;
- (void)setCarrierBundleDeviceIdentifier:(id)a0;
- (void)setCloudBackupEnabled:(BOOL)a0;
- (void)setSandboxed:(BOOL)a0;
- (void)setPrivateListeningEnabledForHomeUsers:(id)a0;
- (void)setDSID:(id)a0;
- (void)setPrivacyAcknowledgementVersions:(id)a0;
- (void)setAlternateDSID:(id)a0;
- (void)setUsername:(id)a0;
- (void)setCloudLibraryStateReason:(id)a0;
- (void)setActiveLocker:(BOOL)a0;
- (void)setManagedAppleID:(BOOL)a0;
- (void)replaceValuesWithValuesFromProperties:(id)a0;
- (void)setHomeUserIdentifiers:(id)a0;
- (void)setMergeToCloudLibraryPreference:(id)a0;
- (void)setDelegated:(BOOL)a0;
- (void)setSubscriptionStatusEnabled:(BOOL)a0;
- (void)setICloudPersonID:(id)a0;
- (void)setAgeVerificationExpirationDate:(id)a0;
- (void)setActive:(BOOL)a0;
- (void)setDelegateToken:(id)a0;

@end
