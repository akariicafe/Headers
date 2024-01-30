@class MLMultiArray, NSSet;

@interface gan_modelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithInput:(id)a0;
- (void).cxx_destruct;

@end
