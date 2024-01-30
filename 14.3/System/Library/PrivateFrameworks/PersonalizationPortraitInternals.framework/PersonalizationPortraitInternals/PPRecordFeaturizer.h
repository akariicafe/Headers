@class MLModel, NSArray;

@interface PPRecordFeaturizer : NSObject {
    MLModel *_model;
    NSArray *_featureNames;
}

+ (id)_flattenArraylikeToFeatures:(id)a0 featureName:(id)a1;
+ (id)_flattenDictionarylikeToFeatures:(id)a0 featureName:(id)a1;
+ (id)featuresForScoreDict:(id)a0;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithDomain:(unsigned char)a0 trialWrapper:(id)a1;
- (id)featurize:(id)a0 sourceStats:(id)a1 error:(id *)a2;

@end
