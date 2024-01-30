@class NSDictionary, NSArray, NSString;

@interface EvaluationDataSource : NSObject <EvaluatorDataSource>

@property (copy, nonatomic) NSDictionary *recipe;
@property (retain, nonatomic) NSArray *records;
@property (retain, nonatomic) NSArray *recordInfos;
@property (retain, nonatomic) NSArray *recordDatas;
@property (readonly, nonatomic) NSArray *layersToTrain;
@property (readonly, nonatomic) int numLocalIterations;
@property (readonly, nonatomic) float learningRate;
@property (readonly, nonatomic) float learningRateDecay;
@property (readonly, nonatomic) float gradNormFactor;
@property (readonly, nonatomic) int batchSize;
@property (readonly, nonatomic) float l2NormBound;
@property (readonly, nonatomic) NSString *gradNormType;
@property (readonly, nonatomic) NSString *objectiveFunction;
@property (readonly, nonatomic) NSString *freezeComponents;
@property (readonly, nonatomic) NSString *modelFeatures;
@property (readonly, nonatomic) int minsUntil;
@property (readonly, nonatomic) int minDaemonVersion;
@property (readonly, nonatomic) BOOL doDummyDataFilter;
@property (readonly, nonatomic) NSString *modelOutputName;
@property (readonly, nonatomic) int minBatchSize;
@property (readonly, nonatomic) float negativeSamplingRate;
@property (readonly, nonatomic) int labelKeyName;
@property (readonly, nonatomic) BOOL useNewTrainingAPI;
@property (readonly, nonatomic) NSString *modelInputSchemaInputName;
@property (readonly, nonatomic) NSString *modelInputSchemaLabelName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)defaultRecipeParams;

- (unsigned long long)recordCount;
- (void).cxx_destruct;
- (BOOL)allNegativeSamples;
- (long long)classificationForRecord:(unsigned long long)a0;
- (id)dataForRecord:(unsigned long long)a0;
- (id)extractFeatureDataForRecord:(unsigned long long)a0;
- (id)extractFullFeatureListForRecord:(unsigned long long)a0;
- (void)filterInMatchedLabelData:(id)a0;
- (void)filteringOperation;
- (void)filteroutDummyData;
- (id)getRecordInfo:(unsigned long long)a0;
- (id)initWithRecipe:(id)a0 infos:(id)a1 datas:(id)a2 error:(id *)a3;
- (void)performDownSampling;
- (void)selectDaemonVersion:(int)a0;
- (void)validateRecordInfo:(id)a0;
- (id)vectorForClassification:(long long)a0;

@end
