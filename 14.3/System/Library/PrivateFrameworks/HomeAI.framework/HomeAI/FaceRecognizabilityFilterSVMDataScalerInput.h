@class MLMultiArray, NSSet;

@interface FaceRecognizabilityFilterSVMDataScalerInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithInput:(id)a0;

@end
