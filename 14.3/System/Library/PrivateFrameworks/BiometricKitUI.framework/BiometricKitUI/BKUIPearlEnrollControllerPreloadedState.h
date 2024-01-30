@class NSArray, BKUIPearlAudioSession, BKUIPearlVideoCaptureSession;

@interface BKUIPearlEnrollControllerPreloadedState : NSObject {
    NSArray *_cachedEntryAnimationImages;
    BKUIPearlAudioSession *_cachedAudioSession;
    BKUIPearlVideoCaptureSession *_cachedVideoCaptureSession;
}

- (void).cxx_destruct;
- (void)cacheAudioSession:(id)a0;
- (void)cacheVideoCaptureSession:(id)a0;
- (id)acquireCachedVideoCaptureSession;
- (id)acquireCachedAudioSession;
- (void)cacheEntryAnimationImages:(id)a0;
- (id)acquireCachedEntryAnimationImages;

@end
