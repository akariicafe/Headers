@class AVSampleBufferVideoOutput, NSString, AVSampleBufferVideoRenderer, NSError, CALayer, NSObject;
@protocol OS_dispatch_queue;

@interface AVSampleBufferDisplayLayer : CALayer <AVQueuedSampleBufferRendering, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal> {
    CALayer *_contentLayer;
    NSString *_videoGravity;
    struct CGSize { double width; double height; } _presentationSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    NSObject<OS_dispatch_queue> *_serialQueue;
    AVSampleBufferVideoOutput *_videoOutput;
    NSString *_STSLabel;
    CALayer *_STSLayer;
}

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL requiresFlushToResumeDecoding;
@property (readonly, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
@property (readonly, retain) struct OpaqueCMTimebase { } *timebase;
@property (readonly, nonatomic) BOOL hasSufficientMediaDataForReliablePlaybackStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL outputObscuredDueToInsufficientExternalProtection;
@property (nonatomic) BOOL preventsCapture;
@property (nonatomic) BOOL preventsDisplaySleepDuringVideoPlayback;
@property (nonatomic) AVSampleBufferVideoOutput *output;
@property (readonly, nonatomic, getter=_sampleBufferVideoRenderer) AVSampleBufferVideoRenderer *sampleBufferVideoRenderer;
@property (retain) struct OpaqueCMTimebase { } *controlTimebase;
@property (copy) NSString *videoGravity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingStatus;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingOutputObscuredDueToInsufficientExternalProtection;

- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (void)flush;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)a0;
- (BOOL)setRenderSynchronizer:(id)a0 error:(id *)a1;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)layoutSublayers;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })videoRect;
- (id)videoPerformanceMetrics;
- (void)setSTSLabel:(id)a0;
- (void)setToneMapToStandardDynamicRange:(BOOL)a0;
- (void)flushWithRemovalOfDisplayedImage:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)resetUpcomingSampleBufferPresentationTimeExpectations;
- (void)flushAndRemoveImage;
- (void)prerollDecodeWithCompletionHandler:(id /* block */)a0;
- (void)expectMinimumUpcomingSampleBufferPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)expectMonotonicallyIncreasingUpcomingSampleBufferPresentationTimes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_destRectForAspectRatio:(struct CGSize { double x0; double x1; })a0;
- (void)postVideoRectDidChangeNotification;
- (void)_updateLayerTreeGeometryWithVideoGravity:(id)a0 presentationSize:(struct CGSize { double x0; double x1; })a1 videoGravityShouldTriggerAnimation:(BOOL)a2;
- (void)_updatePresentationSize:(struct CGSize { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopRequestingMediaData;
- (id)init;
- (void)dealloc;
- (id)_contentLayer;

@end
