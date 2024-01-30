@class PKAccountUserNotificationSettings, NSString, NSSet, PKAccountUserPreferences, NSDate, NSPersonNameComponents;

@interface PKAccountUser : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long accessLevel;
@property (copy, nonatomic) NSString *altDSID;
@property (nonatomic) unsigned long long accountState;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *appleID;
@property (nonatomic, getter=isCurrentUser) BOOL currentUser;
@property (copy, nonatomic) NSSet *addressableHandles;
@property (copy, nonatomic) NSSet *supportedFeatures;
@property (retain, nonatomic) PKAccountUserPreferences *preferences;
@property (nonatomic) unsigned long long identityStatus;
@property (nonatomic, getter=isDirty) BOOL dirty;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (copy, nonatomic) NSSet *transactionSourceIdentifiers;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) PKAccountUserNotificationSettings *notificationSettings;
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;

+ (BOOL)currentUser:(id)a0 canShareZone:(id)a1 withAccountUser:(id)a2;
+ (BOOL)currentUser:(id)a0 shouldRequestZoneShareForZone:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)_featureWithIdentifier:(id)a0;
- (BOOL)isEqualToAccountUser:(id)a0;
- (id)monthlySpendLimitFeatureDescriptor;
- (id)physicalCardActivationFeatureDescriptor;
- (id)requestPhysicalCardFeatureDescriptor;
- (BOOL)supportsMonthlySpendLimit;
- (BOOL)supportsPhysicalCardActivation;
- (BOOL)supportsRequestPhysicalCard;

@end
