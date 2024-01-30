@class BWRemoteQueueSinkNode;

@interface FigCaptureRemoteQueueSinkPipeline : FigCaptureSinkPipeline

@property (readonly, nonatomic) BWRemoteQueueSinkNode *sinkNode;

- (void)setSinkNode:(id)a0;
- (void)dealloc;

@end
