@class NSArray, NSDictionary, NSString, NSDate, NSNumber;

@interface ICMusicSubscriptionStatus : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {
    BOOL _isPartOfBundle;
    BOOL _isBundleOwner;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) BOOL hasCatalogPlaybackCapability;
@property (readonly, nonatomic) BOOL hasAddToCloudLibraryCapability;
@property (readonly, nonatomic, getter=isCloudMusicServiceEnabled) BOOL cloudMusicServiceEnabled;
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
@property (readonly, nonatomic, getter=isPartOfBundle) BOOL partOfBundle;
@property (readonly, nonatomic, getter=isBundleOnwer) BOOL bundleOwner;
@property (readonly, copy, nonatomic) NSArray *eligibleOffers;
@property (readonly, nonatomic, getter=isInGlidePreview) BOOL inGlidePreview;
@property (readonly, copy, nonatomic) NSArray *termsStatusList;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSString *cellularOperatorName;
@property (readonly, copy, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) long long carrierBundlingErrorCode;
@property (readonly, copy, nonatomic) NSNumber *acceptSilentAuth;

+ (unsigned long long)_capabilitiesForStatusType:(long long)a0 carrierBundlingStatusType:(long long)a1 isMatchEnabled:(BOOL)a2;

- (BOOL)hasCapability:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResponseDictionary:(id)a0;
- (BOOL)isEqualToStatus:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_copySubscriptionStatusPropertiesToStatus:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)description;
- (void).cxx_destruct;

@end
