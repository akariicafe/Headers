@class MLMultiArray, NSSet;

@interface FaceRecognizabilityFilterSVMDataScalerOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *transformed_features;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithTransformed_features:(id)a0;

@end
