@class MLMultiArray;
@protocol MLFeatureProvider;

@interface MLRegressorResult : NSObject

@property (readonly) MLMultiArray *predictedValue;
@property (readonly) id<MLFeatureProvider> additionalFeatures;

+ (id)resultWithValue:(id)a0 additionalFeatures:(id)a1;
+ (id)resultWithValue:(id)a0;

- (id)asFeatureDictionaryWithPredictedValueDescription:(id)a0;
- (id)initWithValue:(id)a0 additionalFeatures:(id)a1;
- (void).cxx_destruct;

@end
