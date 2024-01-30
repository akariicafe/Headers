@interface ATXGroupHistogramEntry : NSObject

@property (readonly, nonatomic) int count;
@property (readonly, nonatomic) double score;

- (id)initWithScore:(double)a0;
- (void)addScore:(double)a0;

@end
