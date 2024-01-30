@class NSDictionary;

@interface REMLLinearModel : REMLModel <REMLLinearModelProperties> {
    NSDictionary *_models;
}

@property (readonly, nonatomic) NSDictionary *models;

- (void).cxx_destruct;
- (void)_clearCache;
- (void)setMetricsRecorder:(id)a0;
- (void)_clearModel;
- (void)_enumerateModelsForFeatureMap:(id)a0 usingBlock:(id /* block */)a1;
- (float)_getAveragePrediction;
- (float)_getNormalizedEntropy;
- (long long)_getNumberOfCoordinates;
- (unsigned long long)_getTotalExampleCount;
- (unsigned long long)_getTotalPositiveCount;
- (BOOL)_loadModelFromURL:(id)a0 error:(id *)a1;
- (id)_predictWithFeatures:(id)a0;
- (BOOL)_saveModelToURL:(id)a0 error:(id *)a1;
- (void)_trainWithFeatures:(id)a0 positiveEvent:(id)a1;
- (id)initWithFeatureSet:(id)a0 interactionDescriptors:(id)a1;
- (void)logCoreAnalyticsMetrics;
- (id)predictionSetWithFeatures:(id)a0;
- (BOOL)requiresDirectory;
- (void)trainWithFeatures:(id)a0 positiveEvent:(id)a1 interaction:(id)a2;

@end
