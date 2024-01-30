@class NSArray, AVSampleBufferRenderSynchronizerInternal;

@interface AVSampleBufferRenderSynchronizer : NSObject {
    AVSampleBufferRenderSynchronizerInternal *_synchronizerInternal;
}

@property (readonly) NSArray *renderers;
@property (readonly, retain) struct OpaqueCMTimebase { } *timebase;
@property (nonatomic) float rate;
@property (nonatomic) BOOL delaysRateChangeUntilHasSufficientMediaData;

+ (void)enableSTSLabels;
+ (id)_makeSTSLabel;
+ (id)_videoRendererForRenderer:(id)a0;
+ (id)currentFigRenderSynchronizerFactory;
+ (void)setFigRenderSynchronizerFactory:(id)a0 forQueue:(id)a1;

- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)dealloc;
- (id)init;
- (BOOL)_addRenderer:(id)a0 error:(id *)a1;
- (long long)_addedAudioRendererCount;
- (long long)_addedAudioRendererCountInternal;
- (BOOL)_canAddRendererInternal:(id)a0 error:(id *)a1;
- (id)_createOnceTimebaseObserverForRemovalOfRenderer:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id /* block */)_getClientCompletionHandlerForRenderer:(id)a0;
- (id)_getTimebaseObserverForRenderer:(id)a0;
- (int)_initializeTimebase;
- (BOOL)_multipleAudioRenderersDisallowed;
- (void)_performRendererRemoval:(id)a0;
- (void)_removeTimebaseObserverForRenderer:(id)a0;
- (BOOL)_rendererConfigurationIsValid:(id *)a0;
- (BOOL)_scheduleTimedRendererRemovalAtTime:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withClientCompletionHandler:(id /* block */)a2;
- (int)_setRate:(float)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)_storeObserver:(id)a0 clientCompletionHandler:(id /* block */)a1 forRenderer:(id)a2;
- (void)_updateRateFromTimebase;
- (id)addBoundaryTimeObserverForTimes:(id)a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (id)addPeriodicTimeObserverForInterval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 queue:(id)a1 usingBlock:(id /* block */)a2;
- (void)addRenderer:(id)a0;
- (void)removeRenderer:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 completionHandler:(id /* block */)a2;
- (void)removeRenderer:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 withCompletionHandler:(id /* block */)a2;
- (void)removeTimeObserver:(id)a0;
- (void)setRate:(float)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setRate:(float)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (BOOL)setRate:(float)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 atHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 error:(id *)a3;

@end
