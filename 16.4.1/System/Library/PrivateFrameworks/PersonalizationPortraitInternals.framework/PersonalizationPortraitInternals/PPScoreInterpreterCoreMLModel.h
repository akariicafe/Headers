@class NSArray, NSString, MLModel;

@interface PPScoreInterpreterCoreMLModel : NSObject {
    NSString *_coreMLModelPath;
    MLModel *_coreMLModel;
    NSString *_coreMLModelOutputName;
    NSArray *_coreMLInputFeatures;
}

@property (readonly, nonatomic) NSArray *argumentsToEvaluate;
@property (readonly, nonatomic) BOOL hasOutputIndexedSubscript;
@property (readonly, nonatomic) unsigned long long numberOfFeatures;

+ (double)scoreForOutputValue:(id)a0 outputIndexedSubscript:(long long)a1;

- (id)init;
- (void).cxx_destruct;
- (id)featureAtIndex:(unsigned long long)a0;
- (id)initWithModelPath:(id)a0 features:(id)a1 outputSpecification:(id)a2;
- (void)loadCoreMLModelIfNotAlreadyLoaded;
- (void)loadInstanceVariablesFromFeatures:(id)a0 outputSpecification:(id)a1;
- (double)predictionForEvaluatedFeatures:(id)a0 withOutputIndexedSubscript:(long long)a1;

@end
