@class NSString, BWFigVideoCaptureStream;

@interface FigCaptureVisionDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFigVideoCaptureStream *_captureStream;
}

@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) int sourceDeviceType;

+ (void)initialize;

- (int)_buildVisionDataSinkPipeline:(id)a0 videoDataConnectionConfiguration:(id)a1 graph:(id)a2 visionCaptureOutput:(id)a3 clientAuditToken:(struct { unsigned int x0[8]; })a4 delegate:(id)a5;
- (id)initWithVisionDataConnectionConfiguration:(id)a0 videoDataConnectionConfiguration:(id)a1 graph:(id)a2 name:(id)a3 visionCaptureOutput:(id)a4 captureDevice:(id)a5 clientAuditToken:(struct { unsigned int x0[8]; })a6 delegate:(id)a7;
- (void)dealloc;
- (void)setKeypointDetectionThreshold:(float)a0;
- (void)triggerVisionDataBurst;

@end
