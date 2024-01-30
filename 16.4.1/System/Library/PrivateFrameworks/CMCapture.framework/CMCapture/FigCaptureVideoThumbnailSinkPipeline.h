@class BWPixelTransferNode, NSString, BWImageQueueSinkNode, NSObject;
@protocol OS_dispatch_queue, BWPipelineNotificationDelegate;

@interface FigCaptureVideoThumbnailSinkPipeline : FigCaptureSinkPipeline <BWImageQueueSinkNodePreviewTapDelegate> {
    BWPixelTransferNode *_scalerNode;
    BWImageQueueSinkNode *_imageQueueSinkNode;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    BOOL _didPropagateCurrentImageQueue;
    id<BWPipelineNotificationDelegate> _notificationDelegate;
    NSString *_sourceID;
    int _sourceDeviceType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)setDiscardsSampleData:(BOOL)a0;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)a0 atHostTime:(long long)a1;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:(id)a0;
- (void)dealloc;
- (void)imageQueueSinkNode:(id)a0 didAttemptToEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 withSuccess:(BOOL)a2;

@end
