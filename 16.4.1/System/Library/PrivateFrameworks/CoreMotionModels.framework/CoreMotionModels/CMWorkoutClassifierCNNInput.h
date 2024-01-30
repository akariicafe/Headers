@class MLMultiArray, NSSet;

@interface CMWorkoutClassifierCNNInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *X__0;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithX__0:(id)a0;

@end
