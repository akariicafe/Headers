@class RETimeline;

@interface REAppUsagePredictor : REPredictor <REAppUsagePredictorProperties> {
    RETimeline *_timeline;
}

@property (readonly, nonatomic) RETimeline *timeline;

+ (double)updateInterval;
+ (id)supportedFeatures;

- (void)update;
- (void).cxx_destruct;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;

@end
