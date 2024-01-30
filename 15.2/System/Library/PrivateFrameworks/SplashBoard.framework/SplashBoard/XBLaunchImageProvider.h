@class NSObject;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface XBLaunchImageProvider : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    id<BSInvalidatable> _stateCaptureAssertion;
}

+ (id)sharedInstance;

- (void)preheatServiceWithTimeout:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)captureLaunchImageForManifest:(id)a0 withCompatibilityInfo:(id)a1 launchRequests:(id)a2 createCaptureInfo:(BOOL)a3 firstImageIsReady:(id /* block */)a4 withCompletionHandler:(id /* block */)a5;
- (id /* block */)createLaunchImageGeneratorWithContext:(id)a0 asyncImageData:(BOOL)a1 error:(id *)a2;
- (void)_resetBadLaunchInterfaceCount:(id)a0;
- (void)_addBadLaunchInterfaceToDenyList:(id)a0 forError:(id)a1;
- (void)dealloc;
- (void)_generateImageForSnapshot:(id)a0 inManifest:(id)a1 withContext:(id)a2 asyncImageData:(BOOL)a3 dataProvider:(id)a4 scheduleAsyncGeneration:(BOOL)a5 completion:(id /* block */)a6;

@end
