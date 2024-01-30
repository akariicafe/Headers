@class NSArray, NSDictionary, NSString, NSDate;

@interface ICMusicSubscriptionStatus : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasCatalogPlaybackCapability;
@property (readonly, nonatomic) BOOL hasAddToCloudLibraryCapability;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary;
@property (readonly, nonatomic, getter=isMinorAccountHolder) BOOL minorAccountHolder;
@property (readonly, nonatomic) BOOL hasFamily;
@property (readonly, nonatomic) BOOL hasFamilyGreaterThanOneMember;
@property (readonly, nonatomic, getter=isHeadOfHousehold) BOOL headOfHousehold;
@property (readonly, nonatomic, getter=isMatchEnabled) BOOL matchEnabled;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) BOOL hasOfflineSlots;
@property (readonly, nonatomic, getter=isInFreeTrial) BOOL inFreeTrial;
@property (readonly, nonatomic, getter=isEligibleForFreeTrial) BOOL eligibleForFreeTrial;
@property (readonly, nonatomic, getter=isPurchaser) BOOL purchaser;
@property (readonly, nonatomic) long long carrierBundlingStatusType;
@property (readonly, nonatomic) long long reasonType;
@property (readonly, nonatomic) long long sourceType;
@property (readonly, nonatomic) long long statusType;
@property (readonly, nonatomic, getter=isAdministrator) BOOL administrator;
@property (readonly, nonatomic, getter=isDiscoveryModeEligible) BOOL discoveryModeEligible;
@property (readonly, copy, nonatomic) NSArray *termsStatusList;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSString *cellularOperatorName;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) long long carrierBundlingErrorCode;
@property (readonly, nonatomic, getter=isCloudMusicServiceEnabled) BOOL cloudMusicServiceEnabled;

- (BOOL)isEqualToStatus:(id)a0;
- (id)initWithResponseDictionary:(id)a0;
- (void)_copySubscriptionStatusPropertiesToStatus:(id)a0 withZone:(struct _NSZone { } *)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
