@class NSDate;

@interface PPSpotlightWritebackDissectorCacheEntry : NSObject

@property (readonly, nonatomic) NSDate *cachingDate;
@property (readonly, nonatomic) double score;

- (void).cxx_destruct;
- (id)initWithCachingDate:(id)a0 score:(double)a1;

@end
