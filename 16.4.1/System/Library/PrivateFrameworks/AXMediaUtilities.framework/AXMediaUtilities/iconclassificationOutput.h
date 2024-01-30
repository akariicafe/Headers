@class MLMultiArray, NSSet;

@interface iconclassificationOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *leaf_leaf_predictions_probabilities;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithLeaf_leaf_predictions_probabilities:(id)a0;

@end
