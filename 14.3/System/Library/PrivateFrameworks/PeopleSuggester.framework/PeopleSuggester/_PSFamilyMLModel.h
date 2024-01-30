@class NSDictionary;

@interface _PSFamilyMLModel : NSObject

@property (readonly, nonatomic) NSDictionary *models;

- (id)init;
- (void).cxx_destruct;
- (id)initWithModels:(id)a0;
- (id)loadModelFromUrlResource:(id)a0;
- (id)predictionForContact:(id)a0;
- (id)familyProbability:(id)a0;
- (id)getFeatureDictForContact:(id)a0;
- (id)ensemblePredictionForInputFeatures:(id)a0;
- (id)defaultPredictionForInputFeatures:(id)a0;
- (id)predictionsForContacts:(id)a0 featureDicts:(id)a1;
- (id)getFeatureDictsForContacts:(id)a0;
- (id)getModelWithModelName:(id)a0;
- (id)defaultModelForPrediction;
- (id)getPredictionFromModel:(id)a0 withInputFeatures:(id)a1;
- (BOOL)isFamilyContact:(id)a0;
- (id)familiesPredictionForContacts:(id)a0 withMaxSuggestion:(long long)a1;
- (id)predictionsForContacts:(id)a0;
- (id)familyRelationsOfContacts:(id)a0 featureDicts:(id)a1;

@end
