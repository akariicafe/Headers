@class NSString, NSArray, NSDictionary, NSDate, NSNumber, ICDelegateToken;

@interface ICUserIdentityProperties : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {
    NSString *_alternateDSID;
    NSString *_carrierBundleDeviceIdentifier;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_storefrontIdentifier;
    NSString *_username;
    NSDate *_ageVerificationExpirationDate;
    NSNumber *_mergeToCloudLibraryPreference;
    NSDictionary *_cloudLibraryStateReason;
    NSDictionary *_privacyAcknowledgementVersions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isCloudBackupEnabled) BOOL cloudBackupEnabled;
@property (copy, nonatomic, setter=setICloudPersonID:) NSString *iCloudPersonID;
@property (copy, nonatomic) NSArray *homeUserIdentifiers;
@property (copy, nonatomic) NSDictionary *privateListeningEnabledForHomeUsers;
@property (readonly, copy, nonatomic) NSString *alternateDSID;
@property (readonly, copy, nonatomic) NSString *carrierBundleDeviceIdentifier;
@property (readonly, copy, nonatomic) NSNumber *DSID;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, nonatomic, getter=isManagedAppleID) BOOL managedAppleID;
@property (readonly, nonatomic, getter=isSandboxed) BOOL sandboxed;
@property (readonly, copy, nonatomic) NSString *storefrontIdentifier;
@property (readonly, nonatomic, getter=isSubscriptionStatusEnabled) BOOL subscriptionStatusEnabled;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSDate *ageVerificationExpirationDate;
@property (readonly, copy, nonatomic) NSNumber *mergeToCloudLibraryPreference;
@property (readonly, copy, nonatomic) NSDictionary *cloudLibraryStateReason;
@property (readonly, copy, nonatomic) NSNumber *privateListeningEnabled;
@property (readonly, nonatomic, getter=isActiveLocker) BOOL activeLocker;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSDictionary *privacyAcknowledgementVersions;
@property (readonly, nonatomic, getter=isDelegated) BOOL delegated;
@property (readonly, copy, nonatomic) ICDelegateToken *delegateToken;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToIdentityProperties:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
