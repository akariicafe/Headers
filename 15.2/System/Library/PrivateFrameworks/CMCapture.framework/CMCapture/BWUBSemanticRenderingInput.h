@class NSArray, NSString, NSDictionary;

@interface BWUBSemanticRenderingInput : NSObject <BWNoiseReductionAndFusionProcessorSemanticRenderingInput> {
    NSDictionary *_smartCameraClassifications;
}

@property (readonly, nonatomic) struct __CVBuffer { } *skinMask;
@property (readonly, nonatomic) struct __CVBuffer { } *skyMask;
@property (readonly, nonatomic) struct __CVBuffer { } *lowResPersonMask;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceMasks;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceConfidences;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceBoundingBoxes;
@property (readonly, nonatomic) NSArray *skinToneClassifications;
@property (readonly, nonatomic) NSArray *faceObservations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSkinMask:(struct __CVBuffer { } *)a0 skyMask:(struct __CVBuffer { } *)a1 lowResPersonMask:(struct __CVBuffer { } *)a2 lowResPersonInstanceMasks:(id)a3 lowResPersonInstanceConfidences:(id)a4 lowResPersonInstanceBoundingBoxes:(id)a5 skinToneClassifications:(id)a6 faceObservations:(id)a7;

@end
