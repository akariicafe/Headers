@interface ICASRankingStrategyType : NSObject <AADataType>

@property (readonly, nonatomic) long long rankingStrategyType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithRankingStrategyType:(long long)a0;

@end
