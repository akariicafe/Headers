@class NSDictionary;

@interface REMLLinearModel : REMLModel <REMLLinearModelProperties> {
    NSDictionary *_models;
}

@property (readonly, nonatomic) NSDictionary *models;

- (void)setMetricsRecorder:(id)a0;
- (BOOL)requiresDirectory;
- (BOOL)_saveModelToURL:(id)a0 error:(id *)a1;
- (void)_enumerateModelsForFeatureMap:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithFeatureSet:(id)a0 interactionDescriptors:(id)a1;
- (long long)_getNumberOfCoordinates;
- (void)_clearCache;
- (id)_predictWithFeatures:(id)a0;
- (void)trainWithFeatures:(id)a0 positiveEvent:(id)a1 interaction:(id)a2;
- (unsigned long long)_getTotalPositiveCount;
- (unsigned long long)_getTotalExampleCount;
- (float)_getAveragePrediction;
- (id)predictionSetWithFeatures:(id)a0;
- (void).cxx_destruct;
- (void)logCoreAnalyticsMetrics;
- (void)_clearModel;
- (void)_trainWithFeatures:(id)a0 positiveEvent:(id)a1;
- (BOOL)_loadModelFromURL:(id)a0 error:(id *)a1;
- (float)_getNormalizedEntropy;

@end
