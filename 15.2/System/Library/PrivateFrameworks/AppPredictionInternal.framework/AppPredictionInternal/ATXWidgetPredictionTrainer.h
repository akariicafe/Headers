@class NSUserDefaults, ATXWidgetPredictionTrainingDatasetBuilder, ATXInformationStore;

@interface ATXWidgetPredictionTrainer : NSObject {
    ATXWidgetPredictionTrainingDatasetBuilder *_datasetBuilder;
    ATXInformationStore *_informationStore;
    NSUserDefaults *_defaults;
}

+ (BOOL)shouldTrainModelOnDeviceWithTimeOfLatestTraining:(id)a0;
+ (id)compiledModelURLForModelName:(id)a0;
+ (void)moveOriginalModelToWriteablePath:(id)a0;

- (void).cxx_destruct;
- (id)initWithInformationStore:(id)a0 distinctScoreCounts:(id)a1;
- (void)trainWidgetPredictionModelWithActivity:(id)a0;
- (id)_timeOfLatestTraining;
- (void)trainWidgetPredictionModelWithMLArrayBatchProvider:(id)a0 modelURL:(id)a1 andSaveToURL:(id)a2 withActivity:(id)a3;
- (void)_updateTimeOfLatestTrainingTo:(id)a0;
- (void)modelPredictionWithSampleDictionaryFeatureProvider:(id)a0 withMLModel:(id)a1;

@end
