@class BWPixelTransferNode, NSString, BWImageQueueSinkNode, NSObject;
@protocol OS_dispatch_queue, BWPipelineNotificationDelegate;

@interface FigCaptureVideoThumbnailSinkPipeline : FigCaptureSinkPipeline <BWImageQueueSinkNodePreviewTapDelegate> {
    BWPixelTransferNode *_scalerNode;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    BOOL _didPropagateCurrentImageQueue;
    id<BWPipelineNotificationDelegate> _notificationDelegate;
}

@property (readonly, nonatomic) NSString *sourceID;
@property (readonly, nonatomic) int sourceDeviceType;
@property (readonly, nonatomic) BWImageQueueSinkNode *imageQueueSinkNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)imageQueueSinkNode:(id)a0 didAttemptToEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 withSuccess:(BOOL)a2;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)a0;
- (void)setDiscardsSampleData:(BOOL)a0;
- (id)initWithGraph:(id)a0 name:(id)a1 videoSourceOutput:(id)a2 videoSourceTransform:(struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; })a3 outputTransform:(struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; })a4 videoThumbnailConnectionConfiguration:(id)a5 notificationDelegate:(id)a6;
- (int)_buildVideoFilterThumbnailPipeline:(id)a0 videoSourceOutput:(id)a1 videoSourceTransform:(struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; })a2 outputTransform:(struct FigCaptureVideoTransform { BOOL x0; int x1; struct { int x0; int x1; } x2; })a3 videoThumbnailConnectionConfiguration:(id)a4;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)a0 atHostTime:(long long)a1;

@end
