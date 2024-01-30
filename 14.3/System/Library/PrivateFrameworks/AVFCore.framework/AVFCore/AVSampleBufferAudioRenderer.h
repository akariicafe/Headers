@class NSError, NSString, AVSampleBufferAudioRendererInternal;

@interface AVSampleBufferAudioRenderer : NSObject <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering> {
    AVSampleBufferAudioRendererInternal *_audioRendererInternal;
}

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *audioOutputDeviceUniqueID;
@property (copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, retain) struct OpaqueCMTimebase { } *timebase;
@property (readonly, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;

+ (id)sampleBufferAudioRenderer;

- (void)setMuted:(BOOL)a0;
- (float)volume;
- (void)setVolume:(float)a0;
- (BOOL)isMuted;
- (id)init;
- (void)requestMediaDataWhenReadyOnQueue:(id)a0 usingBlock:(id /* block */)a1;
- (void)dealloc;
- (int)_initializeTimebase;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (int)_installNotificationHandlers;
- (void)_uninstallNotificationHandlers;
- (void)_transitionToStatus:(long long)a0 error:(id)a1;
- (void)_transitionToFailedStatusWithOSStatus:(int)a0;
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)a0;
- (BOOL)setRenderSynchronizer:(id)a0 error:(id *)a1;
- (void)_triggerMediaRequestCallback;
- (void)_wasFlushedAutomaticallyAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)flushFromSourceTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (void)stopRequestingMediaData;
- (void)flush;
- (void)setSTSLabel:(id)a0;

@end
