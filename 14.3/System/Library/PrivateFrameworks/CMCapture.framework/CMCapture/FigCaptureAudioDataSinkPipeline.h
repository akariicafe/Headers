@interface FigCaptureAudioDataSinkPipeline : FigCaptureRemoteQueueSinkPipeline

+ (void)initialize;

- (id)initWithConfiguration:(id)a0 graph:(id)a1 name:(id)a2 sourceAudioOutput:(id)a3 clientAuditToken:(struct { unsigned int x0[8]; })a4 renderDelegate:(id)a5;
- (int)_buildAudioDataSinkPipeline:(id)a0 graph:(id)a1 sourceAudioOutput:(id)a2 clientAuditToken:(struct { unsigned int x0[8]; })a3 renderDelegate:(id)a4;

@end
