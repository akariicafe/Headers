@class NSArray, NSString, NSDate;

@interface ICMutableMusicSubscriptionStatus : ICMusicSubscriptionStatus

@property (nonatomic, getter=isMinorAccountHolder) BOOL minorAccountHolder;
@property (nonatomic) BOOL hasFamily;
@property (nonatomic) BOOL hasFamilyGreaterThanOneMember;
@property (nonatomic, getter=isHeadOfHousehold) BOOL headOfHousehold;
@property (nonatomic, getter=isMatchEnabled) BOOL matchEnabled;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL hasOfflineSlots;
@property (nonatomic, getter=isInFreeTrial) BOOL inFreeTrial;
@property (nonatomic, getter=isEligibleForFreeTrial) BOOL eligibleForFreeTrial;
@property (nonatomic, getter=isPurchaser) BOOL purchaser;
@property (nonatomic) long long carrierBundlingStatusType;
@property (nonatomic) long long reasonType;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long statusType;
@property (nonatomic, getter=isAdministrator) BOOL administrator;
@property (nonatomic, getter=isDiscoveryModeEligible) BOOL discoveryModeEligible;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSArray *termsStatusList;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *cellularOperatorName;
@property (copy, nonatomic) NSString *sessionIdentifier;
@property (nonatomic) long long carrierBundlingErrorCode;
@property (nonatomic, getter=isPartOfBundle) BOOL partOfBundle;
@property (nonatomic, getter=isBundleOnwer) BOOL bundleOwner;
@property (copy, nonatomic) NSArray *eligibleOffers;
@property (nonatomic, getter=isInGlidePreview) BOOL inGlidePreview;

- (void)setSessionIdentifier:(id)a0;
- (void)setReasonType:(long long)a0;
- (void)setHasOfflineSlots:(BOOL)a0;
- (void)setMinorAccountHolder:(BOOL)a0;
- (void)setHasFamily:(BOOL)a0;
- (void)setMatchEnabled:(BOOL)a0;
- (void)setExpirationDate:(id)a0;
- (void)setInFreeTrial:(BOOL)a0;
- (void)setAdministrator:(BOOL)a0;
- (void)setPartOfBundle:(BOOL)a0;
- (void)setCellularOperatorName:(id)a0;
- (void)setSourceType:(long long)a0;
- (void)setPhoneNumber:(id)a0;
- (void)setTermsStatusList:(id)a0;
- (void)setBundleOwner:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStatusType:(long long)a0;
- (void)setCarrierBundlingStatusType:(long long)a0;
- (void)setPurchaser:(BOOL)a0;
- (void)setCarrierBundlingErrorCode:(long long)a0;
- (void)setDiscoveryModeEligible:(BOOL)a0;
- (void)setEligibleForFreeTrial:(BOOL)a0;
- (void)setEligibleOffers:(id)a0;
- (void)setHasFamilyGreaterThanOneMember:(BOOL)a0;
- (void)setHeadOfHousehold:(BOOL)a0;
- (void)setInGlidePreview:(BOOL)a0;

@end
