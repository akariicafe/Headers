@class NUVisionSegmentationRequest;
@protocol NUImageBuffer;

@interface NUVisionSegmentationJob : NURenderJob

@property (readonly, nonatomic) NUVisionSegmentationRequest *segmentationRequest;
@property (readonly, nonatomic) NUVisionSegmentationRequest *confidenceMapRequest;
@property (retain, nonatomic) id<NUImageBuffer> segmentedMatte;
@property (retain, nonatomic) id<NUImageBuffer> confidenceMap;

- (id)result;
- (void)cleanUp;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)render:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (struct __CVBuffer { } *)_combineMultipleObservations:(id)a0 context:(id)a1 error:(out id *)a2;
- (id)initWithVisionSegmentationRequest:(id)a0;

@end
