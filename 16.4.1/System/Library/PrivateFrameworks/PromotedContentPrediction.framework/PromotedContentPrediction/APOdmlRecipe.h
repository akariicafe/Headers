@class NSString, NSDictionary, NSArray, NSNumber;

@interface APOdmlRecipe : NSObject

@property (readonly, nonatomic) NSString *modelType;
@property (readonly, nonatomic) NSString *modelFileName;
@property (readonly, nonatomic) NSString *lossName;
@property (readonly, nonatomic) NSString *labelName;
@property (readonly, nonatomic) NSString *learningRateName;
@property (readonly, nonatomic) NSString *functionInitName;
@property (readonly, nonatomic) NSString *isTrainingName;
@property (readonly, nonatomic) NSNumber *isCounterfactual;
@property (readonly, nonatomic) NSString *iCloudServiceKey;
@property (readonly, nonatomic) NSNumber *l2NormBound;
@property (readonly, nonatomic) NSNumber *learningRate;
@property (readonly, nonatomic) NSNumber *localIterationsCount;
@property (readonly, nonatomic) NSNumber *weightBySamples;
@property (readonly, nonatomic) NSNumber *shouldShuffle;
@property (readonly, nonatomic) NSNumber *minTrainingSamples;
@property (readonly, nonatomic) NSNumber *maxNorm;
@property (readonly, nonatomic) NSNumber *normBinCount;
@property (readonly, nonatomic) NSDictionary *desSettings;
@property (readonly, nonatomic) NSDictionary *privacyParams;
@property (readonly, nonatomic) NSArray *trainLayers;
@property (readonly, nonatomic) NSArray *weightNames;
@property (readonly, nonatomic) NSNumber *batchSize;
@property (readonly, nonatomic) NSDictionary *featureValueConfig;
@property (readonly, nonatomic) NSDictionary *modelOutputConfig;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithMLRTask:(id)a0;
- (id)rangeBoundaryForFeature:(id)a0 upperBound:(BOOL)a1;
- (id)rangeBoundaryForOutput:(BOOL)a0;
- (id)sentinelValuesForFeature:(id)a0;
- (id)sentinelValuesForOutput;

@end
