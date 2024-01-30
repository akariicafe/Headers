@class MLMultiArray, NSSet;

@interface CRTextDetectorModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *f_score_act_sigmoid_output;
@property (retain, nonatomic) MLMultiArray *geometry_output;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithF_score_act_sigmoid_output:(id)a0 geometry_output:(id)a1;

@end
