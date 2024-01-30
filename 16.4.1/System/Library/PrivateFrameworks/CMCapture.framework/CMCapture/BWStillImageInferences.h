@class NSArray, NSDictionary;

@interface BWStillImageInferences : NSObject {
    NSDictionary *_smartCameraClassifications;
}

@property (readonly, nonatomic) struct __CVBuffer { } *skinMask;
@property (readonly, nonatomic) struct __CVBuffer { } *skyMask;
@property (readonly, nonatomic) struct __CVBuffer { } *personMask;
@property (readonly, nonatomic) struct __CVBuffer { } *lowResPersonMask;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceMasks;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceConfidences;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceBoundingBoxes;
@property (readonly, nonatomic) NSArray *skinToneClassifications;
@property (readonly, nonatomic) NSArray *faceObservations;
@property (readonly, nonatomic) NSDictionary *inferenceAttachedMediaMetadata;

- (void)dealloc;
- (id)description;
- (void)addInference:(id)a0 inferenceAttachmentKey:(id)a1;
- (void)addInferenceAttachedMediaMetadata:(id)a0;
- (void)addInferenceBuffer:(struct __CVBuffer { } *)a0 inferenceAttachedMediaKey:(id)a1;
- (id)initWithSkinMask:(struct __CVBuffer { } *)a0 skyMask:(struct __CVBuffer { } *)a1 personMask:(struct __CVBuffer { } *)a2 lowResPersonMask:(struct __CVBuffer { } *)a3 lowResPersonInstanceMasks:(id)a4 lowResPersonInstanceConfidences:(id)a5 lowResPersonInstanceBoundingBoxes:(id)a6 skinToneClassifications:(id)a7 faceObservations:(id)a8 inferenceAttachedMediaMetadata:(id)a9;

@end
