@interface ATXGroupHistogramEntry : NSObject

@property (readonly, nonatomic) int count;
@property (readonly, nonatomic) double score;

- (void)addScore:(double)a0;
- (id)initWithScore:(double)a0;

@end
