@class NSSet, NSMutableDictionary, NSArray, MLMultiArray, MLFeatureDescription;

@interface DSPGMLInputProvider : NSObject <MLFeatureProvider> {
    MLFeatureDescription *_featureDescription;
    NSMutableDictionary *_featureCache;
    NSArray *_allInputFeatureNames;
    MLMultiArray *_input;
}

@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;

@end
