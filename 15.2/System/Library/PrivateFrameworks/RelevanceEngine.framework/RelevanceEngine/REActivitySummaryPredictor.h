@class NSSet;

@interface REActivitySummaryPredictor : REPredictor <REActivitySummaryPredictorProperties> {
    NSSet *_queries;
}

@property float activeEnergyPercentComplete;
@property float exerciseTimePercentComplete;
@property float standHourPercentComplete;

+ (double)updateInterval;
+ (id)supportedFeatures;

- (void)update;
- (void).cxx_destruct;
- (void)pause;
- (id)_init;
- (void)resume;
- (void)_stopQueries;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;
- (void)_startActivitySummaryQueryWithRetries:(long long)a0;
- (void)_stopQuery:(id)a0;
- (void)_updateWithActivitySummary:(id)a0 completion:(id /* block */)a1;
- (void)_runQuery:(id)a0;

@end
