@class BWVISNode, BWMotionAttachmentsNode;

@interface FigCaptureVISPipeline : FigCapturePipeline

@property (readonly, nonatomic) BWMotionAttachmentsNode *motionAttachmentsNode;
@property (readonly, nonatomic) BWVISNode *visNode;
@property (readonly, nonatomic) BWVISNode *sdofVISNode;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } irisVISCleanOutputRect;

+ (void)initialize;
+ (BOOL)visPipelineIsRequiredForFigCaptureVideoStabilizationType:(int)a0;

- (void)dealloc;
- (void)_buildVISPipelineWithUpstreamOutput:(id)a0 graph:(id)a1 parentPipeline:(id)a2 videoCaptureConnectionConfiguration:(id)a3 pipelineStage:(id)a4 sdofPipelineStage:(id)a5 videoStabilizationType:(int)a6 motionAttachmentsSource:(int)a7 fillExtendedRowsOfOutputBuffer:(BOOL)a8 overCaptureEnabled:(BOOL)a9 videoStabilizationOverscanOverride:(float)a10 motionMetadataPreloadingEnabled:(BOOL)a11 visExecutionMode:(int)a12 pipelineTraceID:(int)a13 captureDevice:(id)a14 outputDimensions:(struct { int x0; int x1; })a15 P3ToBT2020ConversionEnabled:(BOOL)a16;
- (id)initWithUpstreamOutput:(id)a0 graph:(id)a1 name:(id)a2 parentPipeline:(id)a3 videoCaptureConnectionConfiguration:(id)a4 pipelineStage:(id)a5 sdofPipelineStage:(id)a6 videoStabilizationType:(int)a7 motionAttachmentsSource:(int)a8 fillExtendedRowsOfOutputBuffer:(BOOL)a9 overCaptureEnabled:(BOOL)a10 videoStabilizationOverscanOverride:(float)a11 motionMetadataPreloadingEnabled:(BOOL)a12 visExecutionMode:(int)a13 pipelineTraceID:(int)a14 captureDevice:(id)a15 outputDimensions:(struct { int x0; int x1; })a16 P3ToBT2020ConversionEnabled:(BOOL)a17;
- (id)_buildMotionAttachmentsNodeWithUpstreamOutput:(id)a0 graph:(id)a1 parentPipeline:(id)a2 horizontalSensorBinningFactor:(int)a3 verticalSensorBinningFactor:(int)a4 maxSupportedFrameRate:(float)a5 pipelineStage:(id)a6 motionAttachmentsSource:(int)a7 captureDevice:(id)a8 isPanorama:(BOOL)a9 optimizesImagesForOfflineVideoStabilization:(BOOL)a10 provideSourceVideoWithMotionAttachmentsOutput:(BOOL)a11 provideOfflineVISMotionDataOutput:(BOOL)a12 motionAttachmentsNodeOut:(id *)a13;
- (id)_newVISNodeWithUpstreamOutput:(id)a0 graph:(id)a1 parentPipeline:(id)a2 videoCaptureConnectionConfiguration:(id)a3 videoStabilizationType:(int)a4 motionAttachmentsSource:(int)a5 fillExtendedRowsOfOutputBuffer:(BOOL)a6 overCaptureEnabled:(BOOL)a7 videoStabilizationOverscanOverride:(float)a8 motionMetadataPreloadingEnabled:(BOOL)a9 visExecutionMode:(int)a10 pipelineTraceID:(int)a11 pipelineStage:(id)a12 captureDevice:(id)a13 outputDimensions:(struct { int x0; int x1; })a14 irisVISCleanOutputRectOut:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a15 P3ToBT2020ConversionEnabled:(BOOL)a16;

@end
