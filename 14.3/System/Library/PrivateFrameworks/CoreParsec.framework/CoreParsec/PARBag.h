@class NSData, NSString, NSDictionary, NSArray, NSURL, NSNumber, NSUserDefaults;

@interface PARBag : NSObject <NSSecureCoding> {
    NSData *_bagData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *userAgent;
@property (readonly, copy, nonatomic) NSString *clientName;
@property (readonly, copy, nonatomic) NSDictionary *rawBag;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, copy, nonatomic) NSString *releaseTag;
@property (readonly, copy, nonatomic) NSDictionary *resources;
@property (readonly, nonatomic) NSNumber *minSearchRenderTimeout;
@property (readonly, nonatomic) NSNumber *searchRenderTimeout;
@property (readonly, nonatomic) NSNumber *otherRenderTimeout;
@property (readonly, nonatomic) NSNumber *minSuggestionRenderTimeout;
@property (readonly, nonatomic) double timeoutIntervalForRequest;
@property (readonly, nonatomic) NSArray *supportedGeoLocationSources;
@property (readonly, nonatomic) NSArray *downloadResourcesList;
@property (readonly, nonatomic) BOOL sendGeoEnvironmentHeader;
@property (readonly, nonatomic) NSArray *subscriptionProviderDomainWhitelist;
@property (readonly, nonatomic) NSArray *subscriptionProviderBundleIdentifierWhitelist;
@property (readonly, nonatomic) double subscriptionTTL;
@property (readonly, nonatomic) double minimumIntervalBetweenQueriesFromBag;
@property (readonly, nonatomic) NSURL *warmURL;
@property (readonly, nonatomic) NSURL *searchURL;
@property (readonly, nonatomic) NSURL *uncommittedSearchURL;
@property (readonly, nonatomic) NSURL *feedbackURL;
@property (readonly, nonatomic) NSURL *crowdsourcingURL;
@property (readonly, nonatomic) NSURL *flightURL;
@property (readonly, copy, nonatomic) NSString *customFlight;
@property (readonly, nonatomic) unsigned long long minimumQueryLength;
@property (readonly, nonatomic) unsigned long long maximumCachedResultsToSend;
@property (readonly, nonatomic) unsigned long long maximumCachedQueriesToSend;
@property (readonly, nonatomic) long long abTest2WeekZoneSize;
@property (readonly, nonatomic) BOOL feedbackEnabled;
@property (readonly, nonatomic) BOOL imageTimingFeedbackEnabled;
@property (readonly, copy, nonatomic) NSArray *skuUploadWhitelist;
@property (readonly, copy, nonatomic) NSArray *recentlyUsedAppIdentifierWhitelist;
@property (readonly, copy, nonatomic) NSArray *enabledDomains;
@property (readonly, copy, nonatomic) NSString *firstUseDescriptionText;
@property (readonly, copy, nonatomic) NSString *firstUseLearnMoreText;
@property (readonly, copy, nonatomic) NSString *firstUseLearnMoreURL;
@property (readonly, copy, nonatomic) NSString *firstUseContinueText;
@property (readonly, nonatomic) NSDictionary *maximumCustomFeedbackSizes;
@property (readonly, nonatomic) double safariLast1hour;
@property (readonly, nonatomic) double safariLast1day;
@property (readonly, nonatomic) double safariLast1week;
@property (readonly, nonatomic) double safariLast1month;
@property (readonly, nonatomic) double safariAll;
@property (readonly, nonatomic) double safariDecay;
@property (readonly, nonatomic) double safariMostRecent;
@property (readonly, nonatomic) double minThresholdToSend;
@property (readonly, nonatomic) BOOL smartHistoryEnabled;
@property (readonly, nonatomic) unsigned long long smartHistoryTimeout;
@property (readonly, nonatomic) unsigned long long smartHistoryMaxRows;
@property (readonly, nonatomic) unsigned long long smartHistoryCompletionReturnCount;
@property (readonly, nonatomic) unsigned long long smartHistorySampleThreshold;
@property (readonly, nonatomic) BOOL smartHistoryFeatureFeedbackEnabled;
@property (readonly, nonatomic) unsigned long long smartHistoryMinimumQueryLength;
@property (readonly, nonatomic) BOOL sampleClientTiming;
@property (readonly, nonatomic) NSArray *sampleClientTimingEventWhitelist;
@property (readonly, nonatomic) NSDictionary *smartSearchV2Parameters;
@property (readonly, nonatomic) BOOL sampleFeatures;
@property (readonly, nonatomic) BOOL collectScores;
@property (readonly, nonatomic) BOOL collectAnonymousMetadata;
@property (readonly, nonatomic) NSArray *anonymousMetadataPreference;
@property (readonly, nonatomic) BOOL use2LayerRanking;
@property (readonly, nonatomic) NSArray *suggestionRankerModel;
@property (readonly, nonatomic) BOOL disableAsTypedSuggestion;
@property (readonly, nonatomic) NSDictionary *tuscanyConfiguration;
@property (readonly, nonatomic) NSNumber *eagerFeedbackSamplingPercentage;
@property (readonly, nonatomic) NSNumber *feedbackMaxAgeInDays;
@property (readonly, copy, nonatomic) NSString *parsecFeedbackFormat;
@property (readonly, nonatomic) NSNumber *duetExpertCustomFeedbackSamplingPercentage;
@property (readonly, nonatomic) NSNumber *cohortsLookbackInDays;
@property (readonly, nonatomic) long long protocolVersion;
@property (readonly, nonatomic) BOOL exp;
@property (readonly, nonatomic) double safariDwellTimeThresholdMedium;
@property (readonly, nonatomic) double safariDwellTimeThresholdHigh;
@property (readonly, nonatomic) BOOL allowSafariRankingDataCollection;

- (id)urlForIdentifier:(id)a0;
- (id)bag_arrayForKey:(id)a0;
- (id)bag_dictionaryForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)bag_URLForKey:(id)a0;
- (id)valueForKey:(id)a0;
- (id)initWithURL:(id)a0 userDefaults:(id)a1;
- (unsigned long long)maximumSizeForFeedbackType:(id)a0;
- (BOOL)bag_boolForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)expirationDate;
- (id)initWithData:(id)a0 userAgent:(id)a1;
- (id)description;
- (id)_bag_objectOfClass:(Class)a0 forKey:(id)a1;
- (id)personalizationParameters;
- (BOOL)isRefreshDisabled;
- (id)bag_stringForKey:(id)a0;
- (id)initWithBag:(id)a0 userAgent:(id)a1;
- (id)initWithURL:(id)a0 userAgent:(id)a1;
- (id)_bag_objectOfClass:(Class)a0 forKey:(id)a1 override:(BOOL)a2;
- (id)valueForKey:(id)a0 override:(BOOL)a1;
- (id)initWithData:(id)a0 userAgent:(id)a1 userDefaults:(id)a2;
- (id)initWithURL:(id)a0 userAgent:(id)a1 userDefaults:(id)a2;
- (id)bagURL;
- (void)encodeWithCoder:(id)a0;
- (id)bag_numberForKey:(id)a0;

@end
