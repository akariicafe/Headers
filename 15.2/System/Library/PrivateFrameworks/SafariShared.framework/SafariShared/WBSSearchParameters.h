@class NSArray;

@interface WBSSearchParameters : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *searchParameters;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isCFSearch;
@property (nonatomic) double CFSearchTimeout;
@property (nonatomic) BOOL isForVoiceSearch;
@property (nonatomic) BOOL isResultFilteringDisabled;
@property (nonatomic) BOOL isDedupeThroughAlternativeURLsEnabled;
@property (nonatomic) BOOL isLocalPhantomTophitDisabled;
@property (nonatomic) BOOL strengthenAutocompleteTriggerExtensionMatching;
@property (nonatomic) BOOL enableCompletionListHistoryDeduplicationValue;
@property (nonatomic) BOOL enableCompletionListHistoryDeduplicationSwitchToTabValue;
@property (nonatomic) long long characterThresholdForAnywhereInTitleOrURL;
@property (nonatomic) double percentageThresholdForAnywhereInTitle;
@property (nonatomic) double percentageThresholdForAnywhereInURL;
@property (nonatomic) long long characterThresholdForStartOfURLPathComponent;
@property (nonatomic) long long matchingWordsInTitleThreshold;
@property (nonatomic) long long characterThresholdForStartOfTitle;
@property (nonatomic) long long characterThresholdForStartOfTitleWord;
@property (nonatomic) long long characterThresholdForStartOfURL;
@property (nonatomic) double normalizedTopSitesScoreAndVisitCountMultiplier;

+ (id)getSearchParametersHelper:(id)a0 withTrial:(id)a1 withCache:(BOOL)a2;

- (id)initWithPreferences:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)updateUsingPreferenceKeys:(id)a0;
- (id)initWithTrial:(BOOL)a0 forPrefs:(id)a1 forTrial:(id)a2;
- (void)updateWithDefaults;
- (void)updateWithTrial:(BOOL)a0 forTrial:(id)a1;

@end
