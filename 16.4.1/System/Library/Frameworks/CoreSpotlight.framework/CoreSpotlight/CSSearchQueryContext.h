@class _CSQueryRewriteContext, NSArray, NSString, CSSuggestion, NSDictionary;

@interface CSSearchQueryContext : NSObject <NSSecureCoding, NSCopying> {
    NSArray *_fetchAttributes;
    long long _maxSuggestionCount;
    NSString *_clientBundleID;
    NSArray *_bundleIDs;
    NSArray *_additionalBundleIDs;
    NSArray *_rankingQueries;
    NSArray *_additionalQueries;
    NSArray *_preferredLanguages;
    NSArray *_markedTextArray;
    NSArray *_disableBundles;
    NSString *_filterQuery;
    NSString *_keyboardLanguage;
    NSString *_userQuery;
    CSSuggestion *_suggestion;
    int _rankingType;
    long long _strongRankingQueryCount;
    long long _dominantRankingQueryCount;
    long long _dominatedRankingQueryCount;
    long long _shortcutBit;
    long long _highMatchBit;
    long long _lowMatchBit;
    long long _highRecencyBit;
    long long _lowRecencyBit;
    long long _maxCount;
    long long _minCount;
    long long _completionResultCount;
    long long _queryID;
    double _minL2Score;
    double _maxAge;
    BOOL _internal;
    BOOL _grouped;
    BOOL _live;
    BOOL _counting;
    BOOL _attribute;
    BOOL _lowPriority;
    BOOL _parseUserQuery;
    BOOL _enableSuggestionTokens;
    BOOL _enableRecentSuggestions;
    BOOL _enableResultCountsPerSuggestion;
    BOOL _fsOnly;
    BOOL _playback;
    BOOL _includeUserActivities;
    BOOL _disableBlockingOnIndex;
    unsigned __int128 _fuzzyMask;
    unsigned __int128 _fuzzyMatch;
    NSString *_completionString;
    NSArray *_completionAttributes;
    NSArray *_completionWeights;
    unsigned int _completionOptions;
    unsigned int _qos;
    unsigned int _userQueryOptions;
    double _currentTime;
    NSDictionary *_options;
    NSArray *_mountPoints;
    NSArray *_scopes;
    NSString *_reason;
    _CSQueryRewriteContext *_rewriteContext;
    NSArray *_customFieldSpecifications;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned short flags;
@property (retain, nonatomic) NSArray *protectionClasses;
@property BOOL allowSpotlightEntitledAttributes;
@property BOOL allowPhotosEntitledAttributes;
@property (retain, nonatomic) NSString *clientBundleID;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSArray *additionalBundleIDs;
@property (retain, nonatomic) NSArray *rankingQueries;
@property (retain, nonatomic) NSArray *additionalQueries;
@property (retain, nonatomic) NSArray *preferredLanguages;
@property (retain, nonatomic) NSArray *markedTextArray;
@property (retain, nonatomic) NSArray *disableBundles;
@property (retain, nonatomic) NSString *userQuery;
@property (copy, nonatomic) CSSuggestion *suggestion;
@property (copy, nonatomic) NSArray *groupingRules;
@property (nonatomic) int rankingType;
@property (retain, nonatomic) NSString *filterQuery;
@property (nonatomic) long long strongRankingQueryCount;
@property (nonatomic) long long dominantRankingQueryCount;
@property (nonatomic) long long dominatedRankingQueryCount;
@property (nonatomic) long long shortcutBit;
@property (nonatomic) long long highMatchBit;
@property (nonatomic) long long lowMatchBit;
@property (nonatomic) long long highRecencyBit;
@property (nonatomic) long long lowRecencyBit;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long minCount;
@property (nonatomic) long long maxSuggestionCount;
@property (nonatomic) long long completionResultCount;
@property (nonatomic) long long queryID;
@property (nonatomic) double minL2Score;
@property (nonatomic) double maxAge;
@property (nonatomic) BOOL internal;
@property (nonatomic) BOOL grouped;
@property (nonatomic) BOOL live;
@property (nonatomic) BOOL counting;
@property (nonatomic) BOOL attribute;
@property (nonatomic) BOOL sodium;
@property (nonatomic) BOOL pommesSuggestions;
@property (nonatomic) BOOL pommesZKW;
@property (nonatomic) BOOL lowPriority;
@property (nonatomic) BOOL parseUserQuery;
@property (nonatomic) BOOL disableNLP;
@property (nonatomic) BOOL generateSuggestions;
@property (nonatomic) BOOL fsOnly;
@property (nonatomic) BOOL playback;
@property (nonatomic) BOOL includeUserActivities;
@property (nonatomic) BOOL disableBlockingOnIndex;
@property (nonatomic) unsigned __int128 fuzzyMask;
@property (nonatomic) unsigned __int128 fuzzyMatch;
@property (retain, nonatomic) NSString *completionString;
@property (retain, nonatomic) NSArray *completionAttributes;
@property (retain, nonatomic) NSArray *completionWeights;
@property (nonatomic) unsigned int completionOptions;
@property (readonly) unsigned int qos;
@property (nonatomic) unsigned int userQueryOptions;
@property (nonatomic) double currentTime;
@property (copy, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSArray *mountPoints;
@property (retain, nonatomic) NSArray *scopes;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) _CSQueryRewriteContext *rewriteContext;
@property (retain, nonatomic) NSArray *fetchAttributes;
@property (copy, nonatomic) NSArray *filterQueries;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (nonatomic) unsigned long long sourceOptions;

- (id)xpc_dictionary;
- (void)encodeWithCoder:(id)a0;
- (BOOL)enableResultCountsPerSuggestion;
- (BOOL)enableRecentSuggestions;
- (void)setEnableRecentSuggestions:(BOOL)a0;
- (void)setQos:(unsigned int)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (long long)maxItemCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMaxItemCount:(long long)a0;
- (id)debugDescription;
- (void)setEnableResultCountsPerSuggestion:(BOOL)a0;
- (id)init;
- (void)setEnableSuggestionTokens:(BOOL)a0;
- (id)initWithQoS:(unsigned int)a0;
- (id)description;
- (void)setCustomFieldSpecifications:(id)a0;
- (id)customFieldSpecifications;
- (void).cxx_destruct;
- (BOOL)enableSuggestionTokens;

@end
