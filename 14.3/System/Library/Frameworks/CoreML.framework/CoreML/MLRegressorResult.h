@class MLMultiArray;
@protocol MLFeatureProvider;

@interface MLRegressorResult : NSObject

@property (readonly) MLMultiArray *predictedValue;
@property (readonly) id<MLFeatureProvider> additionalFeatures;

+ (id)resultWithValue:(id)a0;
+ (id)resultWithValue:(id)a0 additionalFeatures:(id)a1;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0 additionalFeatures:(id)a1;
- (id)asFeatureDictionaryWithPredictedValueDescription:(id)a0;

@end
