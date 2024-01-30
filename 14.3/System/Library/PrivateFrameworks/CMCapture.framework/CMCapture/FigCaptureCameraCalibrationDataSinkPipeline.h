@class NSString;

@interface FigCaptureCameraCalibrationDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline

@property (readonly, nonatomic) NSString *sourceID;

+ (void)initialize;

- (int)_buildCameraCalibrationDataSinkPipelineWithConfiguration:(id)a0 sourceOutput:(id)a1 graph:(id)a2 cameraInfoByPortType:(id)a3 clientAuditToken:(struct { unsigned int x0[8]; })a4 delegate:(id)a5;
- (id)initWithConfiguration:(id)a0 sourceOutput:(id)a1 graph:(id)a2 name:(id)a3 cameraInfoByPortType:(id)a4 clientAuditToken:(struct { unsigned int x0[8]; })a5 delegate:(id)a6;
- (void)dealloc;

@end
