@class NSDictionary, CKVLocalization, CKVSearchContext;

@interface CKVSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *simulatedPriors;
@property (readonly, nonatomic) CKVSearchContext *searchContext;
@property (readonly) CKVLocalization *localization;
@property (readonly, nonatomic) BOOL isSandboxInstance;

+ (id)sandboxSettingsWithLocale:(id)a0;
+ (id)defaultSettings;
+ (id)defaultSandboxSettings;

- (BOOL)shouldDonateHomeKit;
- (id)overrideRankerRegionalRelativeThreshold;
- (id)overrideRankerPriorScoreWeight;
- (BOOL)shouldDonateContacts;
- (void)encodeWithCoder:(id)a0;
- (id)overrideRankerAbsoluteThreshold;
- (id)overrideRankerPrioritizeExactMatch;
- (BOOL)shouldDonateCustomVocabulary;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)shouldDonateMedia;
- (BOOL)isVocabularyDonationEnabled;
- (BOOL)shouldDonateAppInfo;
- (id)overrideRankerAllowPartialMatch;
- (BOOL)isSkitEnabled;
- (BOOL)_shouldDonateAll;
- (id)initWithLocalization:(id)a0 isSandboxInstance:(BOOL)a1;
- (id)overrideRankerMatchScoreWeight;
- (BOOL)_shouldOverrideDonationSettings;
- (id)overrideRankerUsePriors;
- (id)overrideRankerUseTopFive;
- (id)overrideRankerGlobalRelativeThreshold;
- (id)overrideRankerAllowApproximateMatch;

@end
