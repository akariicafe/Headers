@class MLMultiArray, NSSet;

@interface gan_model_pre_A11Input : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithInput:(id)a0;

@end
