@class NSArray, NSMutableSet, APOdmlRecipe;

@interface APOdmlTrainingSetBuilder : NSObject

@property (readonly, copy, nonatomic) NSMutableSet *deviceAndSearchLevelRequiredFeatures;
@property (readonly, copy, nonatomic) NSMutableSet *adLevelRequiredFeatures;
@property (readonly, nonatomic) APOdmlRecipe *recipe;
@property (readonly, copy, nonatomic) NSArray *recordDictionaries;
@property (readonly, copy, nonatomic) NSArray *infos;
@property (readonly, nonatomic) unsigned long long placementType;
@property (readonly, nonatomic) unsigned long long trainingSetCount;

+ (id)classesForDataDict;

- (void).cxx_destruct;
- (id)_additionalMetricsFromAdRecord:(id)a0 clientPttr:(id)a1 error:(id *)a2;
- (BOOL)_extractFeaturesFromDataBlob:(id)a0 featuresRequired:(id)a1 andSaveTo:(id)a2 error:(id *)a3;
- (id)_gatherFeaturesFromAdRecord:(id)a0 requiredFeatures:(id)a1 forMetricsOnly:(BOOL)a2 error:(id *)a3;
- (void)_preprocessDESRecordSet:(id)a0 andAddInfoTo:(id)a1 addUnarchivedDataTo:(id)a2;
- (id)_trainingRowsFromDESRecord:(id)a0 isCounterfactual:(id)a1 error:(id *)a2;
- (void)addRequiredFeatures:(id)a0;
- (id)generateTrainingSet:(id *)a0;
- (id)initWithDESRecordSet:(id)a0 recipe:(id)a1;
- (id)initWithRecipe:(id)a0 recordDictionaries:(id)a1 infos:(id)a2;
- (id)metricsFromDESRecordWithClientPttr:(id)a0 error:(id *)a1;
- (BOOL)setError:(id *)a0 errorCode:(long long)a1;
- (BOOL)setErrorPtr:(id *)a0 toError:(id)a1;
- (id)translateFeatureKeyToDESKey:(id)a0;

@end
