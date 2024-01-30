@class NSDictionary, NSArray;
@protocol BWDeepFusionProcessorInputDelegate;

@interface BWDeepFusionProcessorInput : BWStillImageProcessorInput {
    NSDictionary *_evZeroReferenceFrameAttachments;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _evZeroReferenceFramePTS;
    void *_skinMask;
    void *_skyMask;
    void *_lowResPersonMask;
    id _lowResPersonInstanceMasks;
    id _lowResPersonInstanceConfidences;
    id _lowResPersonInstanceBoundingBoxes;
    id _skinToneClassifications;
    id _faceObservations;
    struct __CVBuffer { } *_personMask;
}

@property (retain, nonatomic) id<BWDeepFusionProcessorInputDelegate> delegate;
@property (copy, nonatomic) NSDictionary *evZeroReferenceFrameAttachments;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } evZeroReferenceFramePTS;
@property (readonly, nonatomic) struct __CVBuffer { } *syntheticReference;
@property (readonly, nonatomic) NSDictionary *syntheticReferenceMetadata;
@property (readonly, nonatomic) struct __CVBuffer { } *syntheticReferenceFusionMap;
@property (readonly, nonatomic) NSDictionary *syntheticReferenceFusionMapMetadata;
@property (readonly, nonatomic) struct __CVBuffer { } *syntheticLong;
@property (readonly, nonatomic) NSDictionary *syntheticLongMetadata;
@property (readonly, nonatomic) struct __CVBuffer { } *syntheticLongFusionMap;
@property (readonly, nonatomic) NSDictionary *syntheticLongFusionMapMetadata;
@property (readonly, nonatomic) struct __CVBuffer { } *syntheticRealLongFusionMap;
@property (readonly, nonatomic) NSDictionary *syntheticRealLongFusionMapMetadata;
@property (readonly, nonatomic) struct __CVBuffer { } *gainMap;
@property (readonly, nonatomic) struct __CVBuffer { } *skinMask;
@property (readonly, nonatomic) struct __CVBuffer { } *skyMask;
@property (readonly, nonatomic) struct __CVBuffer { } *lowResPersonMask;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceMasks;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceConfidences;
@property (readonly, nonatomic) NSArray *lowResPersonInstanceBoundingBoxes;
@property (readonly, nonatomic) NSArray *skinToneClassifications;
@property (readonly, nonatomic) NSArray *faceObservations;
@property (readonly, nonatomic) struct __CVBuffer { } *personMask;
@property (retain, nonatomic) NSArray *providedInferenceAttachedMedia;
@property (retain, nonatomic) NSDictionary *inferenceAttachedMediaMetadata;

- (id)description;
- (void)dealloc;
- (void)addPersonMask:(struct __CVBuffer { } *)a0;
- (void)addSkinMask:(void *)a0 skyMask:(void *)a1 lowResPersonMask:(void *)a2 lowResPersonInstanceMasks:(id)a3 lowResPersonInstanceConfidences:(id)a4 lowResPersonInstanceBoundingBoxes:(id)a5 skinToneClassifications:(id)a6 faceObservations:(id)a7;
- (void)addBuffer:(struct __CVBuffer { } *)a0 metadata:(id)a1 type:(unsigned long long)a2;
- (BOOL)receivedAllInferences;

@end
