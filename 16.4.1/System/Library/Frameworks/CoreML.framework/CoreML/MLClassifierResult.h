@class NSDictionary, MLFeatureValue;
@protocol MLFeatureProvider;

@interface MLClassifierResult : NSObject

@property (readonly) MLFeatureValue *predictedClass;
@property (readonly) NSDictionary *classProbability;
@property (readonly) long long predictedClassFeatureType;
@property (readonly) id<MLFeatureProvider> additionalFeatures;

+ (id)resultWithClassProbability:(id)a0 additionalFeatures:(id)a1 classLabelOfMaxProbability:(id)a2;
+ (id)resultWithIntClassProbability:(id)a0;
+ (id)resultWithIntClassProbability:(id)a0 additionalFeatures:(id)a1;
+ (id)resultWithStringClassProbability:(id)a0;
+ (id)resultWithStringClassProbability:(id)a0 additionalFeatures:(id)a1;

- (void).cxx_destruct;
- (id)asFeatureDictionaryWithPredictedClassDescription:(id)a0 classProbabilityDescription:(id)a1;
- (id)initWithClassProbability:(id)a0 additionalFeatures:(id)a1 classLabelOfMaxProbability:(id)a2;
- (id)initWithIntClassProbability:(id)a0 classFeatureType:(long long)a1 additionalFeatures:(id)a2;
- (id)initWithStringClassProbability:(id)a0 classFeatureType:(long long)a1 additionalFeatures:(id)a2;

@end
