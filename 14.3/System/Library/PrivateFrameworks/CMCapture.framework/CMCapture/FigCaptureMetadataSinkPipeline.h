@class BWFaceDetectionNode, NSString, NSArray, BWMRCNode, BWMRCGatingNode, BWPreviewHistogramNode, BWFaceTrackingNode;
@protocol BWMRCSceneObserver;

@interface FigCaptureMetadataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWMRCGatingNode *_mrcGatingNode;
    BWMRCNode *_mrcNode;
    BWPreviewHistogramNode *_previewHistogramNode;
    BWFaceTrackingNode *_faceTrackingNode;
    BWFaceDetectionNode *_faceDetectionNode;
}

@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) int sourceDeviceType;
@property (readonly, nonatomic) BOOL mrcLowPowerModeEnabled;
@property (readonly, nonatomic) NSArray *detectedObjectBoxedMetadataOutputs;
@property (readonly, nonatomic) id<BWMRCSceneObserver> mrcSceneObserver;
@property (nonatomic) BOOL discardsMRCSampleData;
@property (nonatomic, getter=isMRCSuspended) BOOL mrcSuspended;
@property (nonatomic, getter=isMRCConnectionDisabled) BOOL mrcConnectionDisabled;
@property (nonatomic) BOOL discardsFaceDetectionSampleData;
@property (nonatomic) BOOL discardsFaceTrackingSampleData;

+ (void)initialize;

- (void)setMRCSuspended:(BOOL)a0;
- (int)_buildPreviewHistogramSinkPipeline:(id)a0 graph:(id)a1 videoPreviewHistogramOutput:(id)a2 captureDevice:(id)a3;
- (int)_buildMRCSinkPipeline:(id)a0 graph:(id)a1 mrcSourceOutput:(id)a2 captureDevice:(id)a3 mrcOutputsOut:(id *)a4;
- (void)dealloc;
- (void)setMRCConnectionDisabled:(BOOL)a0;
- (int)_buildMetadataSinkPipeline:(id)a0 graph:(id)a1 videoPreviewOutput:(id)a2 offlineVISMotionDataSourceOutput:(id)a3 objectDetectionSourceOutput:(id)a4 faceTrackingSourceOutput:(id)a5 captureDevice:(id)a6 faceTrackingPipelineStage:(id)a7 clientAuditToken:(struct { unsigned int x0[8]; })a8 delegate:(id)a9;
- (int)_buildMetadataObjectRemoteQueueSinkPipeline:(id)a0 graph:(id)a1 metadataNodeOutputs:(id)a2 videoPreviewEnabled:(BOOL)a3 deferredPrepareEnabled:(BOOL)a4 delegate:(id)a5 clientAuditToken:(struct { unsigned int x0[8]; })a6;
- (int)_buildFaceTrackingPipeline:(id)a0 graph:(id)a1 videoCaptureOutput:(id)a2 pipelineStage:(id)a3 captureDevice:(id)a4;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isMRCSsuspended;
- (id)initWithConfiguration:(id)a0 graph:(id)a1 name:(id)a2 videoPreviewOutput:(id)a3 offlineVISMotionDataSourceOutput:(id)a4 objectDetectionSourceOutput:(id)a5 faceTrackingSourceOutput:(id)a6 captureDevice:(id)a7 faceTrackingPipelineStage:(id)a8 clientAuditToken:(struct { unsigned int x0[8]; })a9 delegate:(id)a10;

@end
