@class NSArray, BKUIPearlAudioSession, BKUIPearlVideoCaptureSession;

@interface BKUIPearlEnrollControllerPreloadedState : NSObject {
    NSArray *_cachedEntryAnimationImages;
    BKUIPearlAudioSession *_cachedAudioSession;
    BKUIPearlVideoCaptureSession *_cachedVideoCaptureSession;
}

- (void).cxx_destruct;
- (id)acquireCachedAudioSession;
- (id)acquireCachedEntryAnimationImages;
- (id)acquireCachedVideoCaptureSession;
- (void)cacheAudioSession:(id)a0;
- (void)cacheEntryAnimationImages:(id)a0;
- (void)cacheVideoCaptureSession:(id)a0;

@end
