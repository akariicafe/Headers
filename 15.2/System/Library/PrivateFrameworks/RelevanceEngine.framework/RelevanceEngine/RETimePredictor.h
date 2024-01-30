@interface RETimePredictor : REPredictor

+ (double)updateInterval;
+ (id)supportedFeatures;

- (void)update;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;

@end
