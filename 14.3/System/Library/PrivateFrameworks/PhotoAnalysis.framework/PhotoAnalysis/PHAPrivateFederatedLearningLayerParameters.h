@class MAFloatVector;

@interface PHAPrivateFederatedLearningLayerParameters : NSObject

@property (retain, nonatomic) MAFloatVector *weights;
@property (retain, nonatomic) MAFloatVector *bias;

- (void).cxx_destruct;
- (id)initWithWeights:(id)a0 bias:(id)a1;

@end
