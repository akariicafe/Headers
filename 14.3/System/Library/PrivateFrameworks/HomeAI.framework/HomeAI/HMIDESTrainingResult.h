@class NSArray;

@interface HMIDESTrainingResult : HMFObject

@property (readonly) NSArray *layerParameters;
@property (readonly) NSArray *losses;

- (void).cxx_destruct;
- (id)initWithLayerParameters:(id)a0 losses:(id)a1;

@end
