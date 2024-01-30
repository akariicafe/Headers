@class NSArray, NSString, NSDictionary, NSDate, NSNumber;

@interface SSVSubscriptionStatus : NSObject <SSXPCCoding, NSCopying> {
    double _subscriptionExpirationTime;
}

@property (copy, nonatomic) NSNumber *accountIdentifier;
@property (copy, nonatomic) NSArray *accountPermissions;
@property (nonatomic) long long accountStatus;
@property (nonatomic) unsigned long long acceptedStoreTermsVersion;
@property (nonatomic) long long carrierBundlingStatus;
@property (nonatomic) long long carrierBundlingErrorCode;
@property (copy, nonatomic) NSString *cellularOperatorName;
@property (nonatomic, getter=isDiscoveryModeEligible) BOOL discoveryModeEligible;
@property (nonatomic, getter=isFamilyOrganizer) BOOL familyOrganizer;
@property (nonatomic, getter=isFamilySubscription) BOOL familySubscription;
@property (nonatomic, getter=isFreeTrialIneligible) BOOL freeTrialIneligible;
@property (nonatomic) BOOL hasFamily;
@property (nonatomic) BOOL hasFamilyMembers;
@property (nonatomic) BOOL hasOfflineSlots;
@property (nonatomic) unsigned long long latestStoreTermsVersion;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSDictionary *rawResponseData;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (nonatomic, getter=isSubscribed) BOOL subscribed;
@property (copy, nonatomic) NSDate *subscriptionExpirationDate;
@property (nonatomic, getter=isSubscriptionPurchaser) BOOL subscriptionPurchaser;
@property (readonly, nonatomic) BOOL hasOfflineSlot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyUserDefaultsRepresentation;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCEncoding;
- (BOOL)isEqualToStatus:(id)a0;
- (void)resetCarrierBundlingProperties;
- (void)resetAccountBasedProperties;
- (void)_setSubscribed:(BOOL)a0;
- (id)initWithUserDefaultsRepresentation:(id)a0;
- (void).cxx_destruct;
- (void)setValuesUsingStatusDictionary:(id)a0;

@end
