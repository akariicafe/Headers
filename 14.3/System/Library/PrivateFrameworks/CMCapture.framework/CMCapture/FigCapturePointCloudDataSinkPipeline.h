@class NSString;

@interface FigCapturePointCloudDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline

@property (readonly, nonatomic) NSString *sourceID;

+ (void)initialize;

- (void)dealloc;
- (int)_buildPointCloudDataSinkPipelineWithConfiguration:(id)a0 sourceOutput:(id)a1 graph:(id)a2 clientAuditToken:(struct { unsigned int x0[8]; })a3 delegate:(id)a4;
- (id)initWithConfiguration:(id)a0 sourceOutput:(id)a1 graph:(id)a2 name:(id)a3 clientAuditToken:(struct { unsigned int x0[8]; })a4 delegate:(id)a5;

@end
