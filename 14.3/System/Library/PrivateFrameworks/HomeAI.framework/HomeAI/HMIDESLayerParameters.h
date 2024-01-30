@class NSString, HMIDESMutableFloatArray;

@interface HMIDESLayerParameters : HMFObject

@property (readonly) NSString *name;
@property (readonly) HMIDESMutableFloatArray *weights;
@property (readonly) HMIDESMutableFloatArray *biases;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 weights:(id)a1 biases:(id)a2;

@end
