@class NSString, MLModel, NSDictionary, MLModelConfiguration, _PSBehaviorRuleFeatureExtraction, NSArray;

@interface _PSRuleRankingMLModel : NSObject

@property (retain) MLModel *mlModel;
@property (retain) NSDictionary *metadata;
@property BOOL isAdaptedModel;
@property (retain) NSDictionary *psConfigForAdaptableModel;
@property (retain, nonatomic) MLModelConfiguration *adaptableModelConfiguration;
@property (nonatomic) BOOL isAdaptedMLModelOK;
@property (retain) NSString *adaptedModelRecipeVersion;
@property (retain) _PSBehaviorRuleFeatureExtraction *feaExtHandle;
@property double scoreThreshold;
@property (retain, nonatomic) NSArray *scores;

- (BOOL)isAdaptedModelCreated;
- (BOOL)isAdaptedModelUsed;
- (void).cxx_destruct;
- (id)initWithAdaptableModelConfig:(id)a0 isAdaptedMLModelOK:(BOOL)a1 scoreThreshold:(double)a2;
- (id)extractAdaptedModelRecipeID;
- (id)getAdaptedModelVersion;
- (id)giveModelDescription;
- (id)initWithMLModel:(id)a0 scoreThreshold:(double)a1 isAdaptedModel:(BOOL)a2 psConfigForAdaptableModel:(id)a3 isAdaptedMLModelOK:(BOOL)a4;
- (void)loadDefaultRuleMinerMLModel;
- (id)rankRules:(id)a0 contextItems:(id)a1;
- (id)scoresOnRules:(id)a0 contextItems:(id)a1;

@end
