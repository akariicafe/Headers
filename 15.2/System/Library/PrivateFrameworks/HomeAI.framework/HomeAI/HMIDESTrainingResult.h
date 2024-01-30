@class NSArray, HMIDESMutableFloatArray;

@interface HMIDESTrainingResult : HMFObject

@property (readonly) NSArray *layerParameters;
@property (readonly) NSArray *losses;
@property (readonly) float preTrainingLoss;
@property (readonly) float postTrainingLoss;
@property (readonly) HMIDESMutableFloatArray *flattedTrainingResult;
@property (readonly) float l2Norm;

- (void).cxx_destruct;
- (id)initWithLayerParameters:(id)a0 losses:(id)a1 preTrainingLoss:(float)a2 postTrainingLoss:(float)a3;

@end
