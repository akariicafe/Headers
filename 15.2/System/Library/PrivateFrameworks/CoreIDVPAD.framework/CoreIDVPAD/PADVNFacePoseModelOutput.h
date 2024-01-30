@class MLMultiArray, NSSet;

@interface PADVNFacePoseModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *softmax_expression;
@property (retain, nonatomic) MLMultiArray *softmax_smile;
@property (retain, nonatomic) MLMultiArray *softmax_pose;
@property (retain, nonatomic) MLMultiArray *softmax_eye;
@property (retain, nonatomic) MLMultiArray *pred_facepose;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithSoftmax_expression:(id)a0 softmax_smile:(id)a1 softmax_pose:(id)a2 softmax_eye:(id)a3 pred_facepose:(id)a4;

@end
