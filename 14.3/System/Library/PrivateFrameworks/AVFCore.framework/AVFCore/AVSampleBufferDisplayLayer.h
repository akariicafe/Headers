@class AVSampleBufferVideoOutput, NSString, AVSampleBufferDisplayLayerInternal, NSError;

@interface AVSampleBufferDisplayLayer : CALayer <AVQueuedSampleBufferRendering, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal> {
    AVSampleBufferDisplayLayerInternal *_sampleBufferDisplayLayerInternal;
}

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) BOOL requiresFlushToResumeDecoding;
@property (readonly, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
@property (readonly, retain) struct OpaqueCMTimebase { } *timebase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL outputObscuredDueToInsufficientExternalProtection;
@property (nonatomic) BOOL preventsCapture;
@property (nonatomic) BOOL preventsDisplaySleepDuringVideoPlayback;
@property (nonatomic) AVSampleBufferVideoOutput *output;
@property (retain) struct OpaqueCMTimebase { } *controlTimebase;
@property (copy) NSString *videoGravity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversOfStatus;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (BOOL)automaticallyNotifiesObserversOfError;

- (id)init;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (void)dealloc;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)_refreshAboveHighWaterLevel;
- (void)removeAllAnimations;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)a0;
- (BOOL)setRenderSynchronizer:(id)a0 error:(id *)a1;
- (void)stopRequestingMediaData;
- (void)flush;
- (void)setToneMapToStandardDynamicRange:(BOOL)a0;
- (void)setSTSLabel:(id)a0;
- (struct OpaqueFigVideoQueue { } *)_copyVideoQueue;
- (void)_updateLayerTreeGeometryWithVideoGravity:(id)a0 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 presentationSize:(struct CGSize { double x0; double x1; })a2;
- (void)_setStatus:(long long)a0 error:(id)a1;
- (void)_setControlTimebase:(struct OpaqueCMTimebase { } *)a0;
- (BOOL)_setSynchronizerTimebase:(struct OpaqueCMTimebase { } *)a0 error:(id *)a1;
- (int)_initializeTimebases;
- (int)_createVideoQueue:(struct OpaqueFigVideoQueue **)a0;
- (void)_updatePresentationSize:(struct CGSize { double x0; double x1; })a0;
- (void)_resetStatusWithOSStatus:(int)a0;
- (void)_addFigVideoQueueListeners;
- (void)_setOutputObscuredDueToInsufficientExternalProtection:(BOOL)a0;
- (void)_removeFigVideoQueueListeners;
- (void)_setRequiresFlushToResumeDecoding:(BOOL)a0;
- (void)resetUpcomingSampleBufferPresentationTimeExpectations;
- (void)_callOldPrerollCompletionHandlerWithSuccess:(BOOL)a0 andSetNewPrerollCompletionHandler:(id /* block */)a1 forRequestID:(int)a2;
- (id)_transformToAbsoluteAnimationOfBounds:(id)a0;
- (void)_addAnimationsForContentLayer:(id)a0 size:(struct CGSize { double x0; double x1; })a1 gravity:(id)a2;
- (void)_flushComplete;
- (void)flushWithRemovalOfDisplayedImage:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)flushAndRemoveImage;
- (void)_completedDecodeForPrerollForRequestID:(int)a0;
- (void)prerollDecodeWithCompletionHandler:(id /* block */)a0;
- (BOOL)setUpcomingPresentationTimeExpectations:(int)a0 minimumPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)expectMinimumUpcomingSampleBufferPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)expectMonotonicallyIncreasingUpcomingSampleBufferPresentationTimes;
- (id)_weakReference;
- (void)_forBoundsAnimations:(id)a0 applyBlock:(id /* block */)a1;
- (id)videoPerformanceMetrics;
- (void)removeAnimationForKey:(id)a0;
- (void)_didFinishSuspension:(id)a0;

@end
