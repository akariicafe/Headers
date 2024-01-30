@class NSCountedSet, NSString;

@interface PPMostCommonFeatureValue : NSObject <MLCustomModel> {
    NSCountedSet *_itemCounts;
    NSString *_featureName;
    NSString *_dominantItemFeatureValueKey;
    NSString *_dominantItemCountFeatureValueKey;
}

- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;
- (id)_dominantItem;
- (id)itemCounts;

@end
