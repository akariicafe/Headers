@class FCSolConfiguration;

@interface FCHeadlineClusteringRules : NSObject

@property (nonatomic) unsigned long long minClusterSizeAutoFavorite;
@property (nonatomic) unsigned long long maxClusterSizeAutoFavorite;
@property (nonatomic) unsigned long long minIdealClusterSizeAutoFavorite;
@property (nonatomic) unsigned long long maxIdealClusterSizeAutoFavorite;
@property (readonly, nonatomic) unsigned long long minClusterSize;
@property (readonly, nonatomic) unsigned long long maxClusterSize;
@property (readonly, nonatomic) unsigned long long minIdealClusterSize;
@property (readonly, nonatomic) unsigned long long maxIdealClusterSize;
@property (readonly, nonatomic) unsigned long long maxPublisherOccurrences;
@property (readonly, nonatomic) unsigned long long maxNativeAdCount;
@property (readonly, nonatomic) BOOL enforcePublisherCap;
@property (readonly, nonatomic) unsigned long long maxUnpaidArticles;
@property (readonly, nonatomic) unsigned long long maxEvergreenArticles;
@property (readonly, nonatomic) BOOL enableOptimizedLayout;
@property (readonly, nonatomic) unsigned long long optimizedLayoutSizeThreshold;
@property (readonly, nonatomic) unsigned long long optimizedLayoutIncrementUnit;
@property (readonly, nonatomic) double minSubscribedChannelRatioForUGroup;
@property (readonly, nonatomic) double maxExpandedAutofavoriteGroupCandidateRatio;
@property (readonly, nonatomic) double expandedAutofavoriteClusterMinSizeMultiplier;
@property (readonly, nonatomic) double expandedAutofavoriteClusterMaxSizeMultiplier;
@property (nonatomic) double autoFavoriteClusterMinSizeMultiplier;
@property (nonatomic) double autoFavoriteClusterMaxSizeMultiplier;
@property (retain, nonatomic) FCSolConfiguration *solConfiguration;

+ (id)rulesWithTreatment:(id)a0 configurationSet:(long long)a1 deviceIsiPad:(BOOL)a2 limitUnpaidArticles:(BOOL)a3 enforcePublisherCap:(BOOL)a4 minClusterSizeiPhone:(long long)a5 maxClusterSizeiPhone:(long long)a6 minClusterSizeiPad:(long long)a7 maxClusterSizeiPad:(long long)a8 todayFeedEnabled:(BOOL)a9;
+ (id)rulesWithTreatment:(id)a0 deviceIsiPad:(BOOL)a1 limitUnpaidArticles:(BOOL)a2 enforcePublisherCap:(BOOL)a3 todayFeedEnabled:(BOOL)a4;
+ (id)rulesWithTreatment:(id)a0 configurationSet:(long long)a1 deviceIsiPad:(BOOL)a2 limitUnpaidArticles:(BOOL)a3 enforcePublisherCap:(BOOL)a4 todayFeedEnabled:(BOOL)a5;
+ (id)rulesWithTreatment:(id)a0 deviceIsiPad:(BOOL)a1 limitUnpaidArticles:(BOOL)a2 enforcePublisherCap:(BOOL)a3 minClusterSizeiPhone:(long long)a4 maxClusterSizeiPhone:(long long)a5 minClusterSizeiPad:(long long)a6 maxClusterSizeiPad:(long long)a7 todayFeedEnabled:(BOOL)a8;

- (id)initWithMinClusterSize:(unsigned long long)a0 maxClusterSize:(unsigned long long)a1 minIdealClusterSize:(unsigned long long)a2 maxIdealClusterSize:(unsigned long long)a3 minClusterSizeAutoFavorite:(unsigned long long)a4 maxClusterSizeAutoFavorite:(unsigned long long)a5 minIdealClusterSizeAutoFavorite:(unsigned long long)a6 maxIdealClusterSizeAutoFavorite:(unsigned long long)a7 maxPublisherOccurrences:(unsigned long long)a8 enforcePublisherCap:(BOOL)a9 maxUnpaidArticles:(unsigned long long)a10 maxEvergreenArticles:(unsigned long long)a11 enableOptimizedLayout:(BOOL)a12 optimizedLayoutSizeThreshold:(unsigned long long)a13 optimizedLayoutIncrementUnit:(unsigned long long)a14 solConfiguration:(id)a15 minSubscribedChannelRatioForUGroup:(double)a16 maxExpandedAutofavoriteGroupCandidateRatio:(double)a17 expandedAutofavoriteClusterMinSizeMultiplier:(double)a18 expandedAutofavoriteClusterMaxSizeMultiplier:(double)a19 maxNativeAdCount:(unsigned long long)a20;
- (void).cxx_destruct;
- (id)init;

@end
