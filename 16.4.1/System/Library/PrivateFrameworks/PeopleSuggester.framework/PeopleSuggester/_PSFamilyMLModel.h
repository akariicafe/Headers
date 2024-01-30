@class NSDictionary, NSObject;
@protocol OS_xpc_object;

@interface _PSFamilyMLModel : NSObject

@property (readonly, nonatomic) NSDictionary *models;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *activity;

- (id)init;
- (void).cxx_destruct;
- (id)initWithActivity:(id)a0;
- (id)initWithModels:(id)a0;
- (id)defaultModelForPrediction;
- (id)defaultPredictionForInputFeatures:(id)a0;
- (id)ensemblePredictionForInputFeatures:(id)a0;
- (id)familiesPredictionForContacts:(id)a0 withMaxSuggestion:(long long)a1;
- (id)familyProbability:(id)a0;
- (id)familyRelationsOfContacts:(id)a0 featureDicts:(id)a1;
- (id)getFeatureDictForContact:(id)a0;
- (id)getFeatureDictsForContacts:(id)a0;
- (id)getModelWithModelName:(id)a0;
- (id)getPredictionFromModel:(id)a0 withInputFeatures:(id)a1;
- (void)initializeModels;
- (BOOL)isFamilyContact:(id)a0;
- (id)loadModelFromUrlResource:(id)a0;
- (id)predictionForContact:(id)a0;
- (id)predictionsForContacts:(id)a0;
- (id)predictionsForContacts:(id)a0 featureDicts:(id)a1;

@end
