@class PXSearchActiveSearch;

@interface PXSearchAnalyticsSession : NSObject

@property (nonatomic) unsigned long long beginType;
@property (nonatomic) double startTime;
@property (nonatomic) double timeIntervalSuccess;
@property (nonatomic) double timeIntervalFirstAssetAction;
@property (nonatomic) double timeIntervalFirstOneUpInTopAssets;
@property (nonatomic) double timeIntervalFirstEnteredCollection;
@property (nonatomic) unsigned long long numberOfSearches;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstSuccess;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstAssetAction;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstOneUpInTopAssets;
@property (nonatomic) unsigned long long numberOfSearchesUntilFirstEnteredCollection;
@property (nonatomic) unsigned long long firstAssetActionType;
@property (nonatomic) unsigned long long firstAssetActionResultType;
@property (nonatomic) unsigned long long firstEnteredCollectionResultType;
@property (retain, nonatomic) PXSearchActiveSearch *lastSearch;
@property (nonatomic) BOOL successful;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL userInteractedWithCurrentSearch;

+ (id)bucketedTimeInterval:(double)a0;
+ (id)cappedSearchCount:(unsigned long long)a0;
+ (id)_stringForResultType:(unsigned long long)a0;
+ (id)_stringForSessionBeginType:(unsigned long long)a0;
+ (id)_stringForActionType:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)logSearch:(id)a0;
- (void)endAndInvalidateSession;
- (void)logEnteredCollectionResult:(unsigned long long)a0;
- (void)logOneUpInTopAssets;
- (id)initWithBeginType:(unsigned long long)a0;
- (void)logAssetAction:(unsigned long long)a0 inResult:(unsigned long long)a1;
- (void)_logSuccess;

@end
