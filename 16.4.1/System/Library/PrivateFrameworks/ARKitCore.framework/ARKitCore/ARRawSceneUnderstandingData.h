@class ARCamera, ARMLImageDownScalingResultData, NSString;

@interface ARRawSceneUnderstandingData : NSObject <ARResultData> {
    void *_resultsRef;
}

@property (nonatomic) double timestamp;
@property (readonly, nonatomic) void *sceneUnderstandingResultRef;
@property (nonatomic) struct __CVBuffer { } *semanticSegmentationBuffer;
@property (nonatomic) struct __CVBuffer { } *semanticSegmentationBufferSampledForDepth;
@property (nonatomic) struct __CVBuffer { } *semanticSegmentationConfidenceBuffer;
@property (nonatomic) struct __CVBuffer { } *semanticSegmentationConfidenceBufferSampledForDepth;
@property (nonatomic) struct __CVBuffer { } *semanticSegmentationUncertaintyBuffer;
@property (nonatomic) struct __CVBuffer { } *normalsBuffer;
@property (nonatomic) struct __CVBuffer { } *depthBuffer;
@property (nonatomic) struct __CVBuffer { } *depthConfidenceBuffer;
@property (nonatomic) struct __CVBuffer { } *capturedImage;
@property (retain, nonatomic) ARCamera *wideCamera;
@property (retain, nonatomic) ARCamera *ultraWideCamera;
@property (retain, nonatomic) ARMLImageDownScalingResultData *ultraWideDownscalingResultData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;

@end
