@interface GEOClientRankingModelFeatureFunctionDiscrete : GEOClientRankingModelFeatureFunction

@property (readonly, nonatomic) float valueThresholdLow;
@property (readonly, nonatomic) float weightLow;
@property (readonly, nonatomic) float valueThresholdHigh;
@property (readonly, nonatomic) float weightHigh;

- (long long)functionType;
- (id)init;
- (id)initWithValueThresholdLow:(float)a0 weightLow:(float)a1 valueThresholdHigh:(float)a2 weightHigh:(float)a3;

@end
