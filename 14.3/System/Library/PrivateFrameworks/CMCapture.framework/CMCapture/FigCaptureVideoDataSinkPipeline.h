@class BWPixelTransferNode, NSString, BWNodeOutput, BWFigVideoCaptureDevice, FigCaptureVISPipeline;

@interface FigCaptureVideoDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWFigVideoCaptureDevice *_captureDevice;
    FigCaptureVISPipeline *_visPipeline;
    BWPixelTransferNode *_videoDataConverterRotatorNode;
}

@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) int sourceDeviceType;
@property (readonly, nonatomic) BWNodeOutput *faceTrackingVideoCaptureOutput;
@property (readonly, nonatomic) BWNodeOutput *offlineVISMotionDataCaptureOutput;

+ (void)initialize;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0 sourceVideoOutput:(id)a1 captureDevice:(id)a2 graph:(id)a3 name:(id)a4 delegate:(id)a5;
- (int)_buildVideoDataSinkPipelineWithConfiguration:(id)a0 sourceVideoOutput:(id)a1 captureDevice:(id)a2 graph:(id)a3 delegate:(id)a4;

@end
