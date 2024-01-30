@class MAFloatVector;

@interface PHAPrivateFederatedLearningLayerParameterDeltas : NSObject

@property (retain, nonatomic) MAFloatVector *weightDeltas;
@property (retain, nonatomic) MAFloatVector *biasDeltas;

+ (id)deltasFromLayerParameters:(id)a0 toLayerParameters:(id)a1;

- (void).cxx_destruct;
- (id)initWithWeightDeltas:(id)a0 biasDeltas:(id)a1;

@end
