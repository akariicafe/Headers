@class NSSet, MLMultiArray, NSMutableDictionary, NSArray, MLFeatureDescription;

@interface DSPGMLInputProvider : NSObject <MLFeatureProvider> {
    MLFeatureDescription *_featureDescription;
    NSMutableDictionary *_featureCache;
    NSArray *_allInputFeatureNames;
}

@property (retain, nonatomic) MLMultiArray *input;
@property (readonly, nonatomic) NSSet *featureNames;

+ (id)shapeFromMultiArrayConstraint:(id)a0 lastDimensionCountIfFlexible:(int)a1;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithFeatureDescription:(id)a0 allInputFeatureNames:(id)a1 elementCountPerChannel:(unsigned int)a2 channelCount:(unsigned int)a3;
- (void)setFeatureValue:(id)a0 forFeatureName:(id)a1;

@end
