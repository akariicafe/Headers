@class NSObject;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface XBLaunchImageProvider : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    id<BSInvalidatable> _stateCaptureAssertion;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)captureLaunchImageForManifest:(id)a0 withCompatibilityInfo:(id)a1 launchRequests:(id)a2 createCaptureInfo:(BOOL)a3 firstImageIsReady:(id /* block */)a4 withCompletionHandler:(id /* block */)a5;
- (id /* block */)createLaunchImageGeneratorWithContext:(id)a0 asyncImageData:(BOOL)a1 error:(id *)a2;
- (void)preheatServiceWithTimeout:(double)a0;
- (void)_generateImageForSnapshot:(id)a0 inManifest:(id)a1 withContext:(id)a2 asyncImageData:(BOOL)a3 dataProvider:(id)a4 completion:(id /* block */)a5;
- (void)_addBadLaunchInterfaceToDenyList:(id)a0 forError:(id)a1;

@end
