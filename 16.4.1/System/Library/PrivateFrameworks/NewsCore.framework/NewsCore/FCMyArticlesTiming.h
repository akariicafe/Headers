@interface FCMyArticlesTiming : NSObject

@property (readonly, nonatomic) double totalTime;
@property (readonly, nonatomic) double feedsNetworkTime;
@property (readonly, nonatomic) double evergreenNetworkTime;
@property (readonly, nonatomic) double scoringTime;

- (id)init;
- (id)initWithTotalTime:(double)a0 feedsNetworkTime:(double)a1 evergreenNetworkTime:(double)a2 scoringTime:(double)a3;

@end
