@class NSMutableDictionary;

@interface NMSPodcastSizeEstimation : NSObject {
    BOOL _empty;
    double _totalSizeDurationRatio;
    unsigned long long _totalAverageSize;
}

@property (retain) NSMutableDictionary *sizeInfoDict;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (unsigned long long)_minimumSizeThreshold;
+ (unsigned long long)_defaultEstimatedSize;
+ (double)_defaultSizeDurationRatio;

- (id)init;
- (void).cxx_destruct;
- (void)synchronize;
- (void)_setupFromCache;
- (double)_adjustedSizeDurationRatio:(double)a0;
- (unsigned long long)sizeForFeedURL:(id)a0 duration:(double)a1 feedProvidedSize:(unsigned long long)a2;
- (id)_cachedPodcastSizeInfoDict;
- (double)_totalSizeDurationRatio;
- (unsigned long long)_totalAverageSize;
- (BOOL)incrementSize:(unsigned long long)a0 duration:(double)a1 forFeedURL:(id)a2;
- (unsigned long long)averageEpisodeSize;

@end
