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

- (id)initWithAdaptableModelConfig:(id)a0 isAdaptedMLModelOK:(BOOL)a1 scoreThreshold:(double)a2;
- (BOOL)isAdaptedModelCreated;
- (id)rankRules:(id)a0 contextItems:(id)a1;
- (void)loadDefaultRuleMinerMLModel;
- (void).cxx_destruct;
- (id)giveModelDescription;
- (id)scoresOnRules:(id)a0 contextItems:(id)a1;
- (BOOL)isAdaptedModelUsed;
- (id)initWithMLModel:(id)a0 scoreThreshold:(double)a1 isAdaptedModel:(BOOL)a2 psConfigForAdaptableModel:(id)a3 isAdaptedMLModelOK:(BOOL)a4;
- (id)extractAdaptedModelRecipeID;
- (id)getAdaptedModelVersion;

@end
