@class NLModelConfiguration, NLDataProvider;

@interface NLDataSet : NSObject {
    NLModelConfiguration *_configuration;
    NLDataProvider *_trainingDataProvider;
    NLDataProvider *_validationDataProvider;
    NLDataProvider *_testDataProvider;
}

@property (readonly, copy) NLModelConfiguration *configuration;
@property (readonly) unsigned long long numberOfTrainingInstances;
@property (readonly) unsigned long long numberOfValidationInstances;
@property (readonly) unsigned long long numberOfTestInstances;

+ (id)dataSetWithDataSet:(id)a0 constraintParameters:(struct _NLConstraintParameters { BOOL x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })a1 modelTrainer:(id)a2;

- (void).cxx_destruct;
- (unsigned long long)numberOfLabels;
- (id)labelMap;
- (id)vocabularyMap;
- (id)documentFrequencyMap;
- (id)dataProviderOfType:(long long)a0;
- (id)inverseLabelMap;
- (id)initWithConfiguration:(id)a0 trainingDataURL:(id)a1 validationDataURL:(id)a2 testDataURL:(id)a3;
- (unsigned long long)numberOfVocabularyEntries;
- (id)initWithConfiguration:(id)a0 trainingDataProvider:(id)a1 validationDataProvider:(id)a2 testDataProvider:(id)a3;
- (id)initWithConfiguration:(id)a0 dataProvider:(id)a1 validationSplit:(double)a2 testingSplit:(double)a3;
- (id)trainingInstanceAtIndex:(unsigned long long)a0;
- (id)validationInstanceAtIndex:(unsigned long long)a0;
- (id)testInstanceAtIndex:(unsigned long long)a0;

@end
