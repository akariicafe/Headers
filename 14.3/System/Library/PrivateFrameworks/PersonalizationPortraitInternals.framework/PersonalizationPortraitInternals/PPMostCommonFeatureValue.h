@class NSCountedSet, NSString;

@interface PPMostCommonFeatureValue : NSObject <MLCustomModel> {
    NSCountedSet *_itemCounts;
    NSString *_featureName;
    NSString *_dominantItemFeatureValueKey;
    NSString *_dominantItemCountFeatureValueKey;
}

- (id)_dominantItem;
- (void).cxx_destruct;
- (id)itemCounts;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end
