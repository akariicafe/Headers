@class NSMutableDictionary;

@interface NMSPodcastSizeEstimation : NSObject {
    BOOL _empty;
    double _totalSizeDurationRatio;
    unsigned long long _totalAverageSize;
}

@property (retain) NSMutableDictionary *sizeInfoDict;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (unsigned long long)_defaultEstimatedSize;
+ (double)_defaultSizeDurationRatio;
+ (unsigned long long)_minimumSizeThreshold;

- (void)synchronize;
- (id)init;
- (void).cxx_destruct;
- (void)_setupFromCache;
- (double)_adjustedSizeDurationRatio:(double)a0;
- (id)_cachedPodcastSizeInfoDict;
- (unsigned long long)_totalAverageSize;
- (double)_totalSizeDurationRatio;
- (unsigned long long)averageEpisodeSize;
- (BOOL)incrementSize:(unsigned long long)a0 duration:(double)a1 forFeedURL:(id)a2;
- (unsigned long long)sizeForFeedURL:(id)a0 duration:(double)a1 feedProvidedSize:(unsigned long long)a2;

@end
