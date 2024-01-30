@class MLMultiArray, NSSet;

@interface gan_model_pre_A11Output : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *output;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)initWithOutput:(id)a0;
- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;

@end
