@class MLMultiArray, NSString, NSSet;

@interface HMIFaceQualityFilterModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *input;
@property (readonly) NSString *inputName;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithInput:(id)a0 inputName:(id)a1;

@end
