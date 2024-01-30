@class MLMultiArray, NSSet;

@interface CMWorkoutClassifierCNNOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *softmax__0;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithSoftmax__0:(id)a0;

@end
