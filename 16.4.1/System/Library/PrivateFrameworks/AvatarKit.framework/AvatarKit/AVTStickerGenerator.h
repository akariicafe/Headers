@class NSString, SCNRenderer, SCNScene, AVTAvatar, AVTAvatarEnvironment, AVTStickerConfigurationReversionContext;

@interface AVTStickerGenerator : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI, _SCNSceneCommandBufferStatusMonitor, _SCNSceneRendererResourceManagerMonitor> {
    AVTStickerConfigurationReversionContext *_context;
    struct { BOOL canSubmitGPUWorkAppIsActive; BOOL canSubmitGPUWorkAppIsForeground; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } canSubmitGPUWorkLock; } _backgroundGPUWorkHelper;
}

@property (retain, nonatomic) SCNScene *scene;
@property (retain, nonatomic) SCNRenderer *renderer;
@property (retain, nonatomic) AVTAvatarEnvironment *environment;
@property (retain, nonatomic) AVTAvatar *avatar;
@property (nonatomic) BOOL async;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)workQueue;
+ (id)addCamera:(id)a0 inScene:(id)a1 reversionContext:(id)a2;
+ (void)addProps:(id)a0 toScene:(id)a1 forAvatar:(id)a2 withCamera:(id)a3 options:(id)a4 forExport:(BOOL)a5 reversionContext:(id)a6;
+ (void)applyViewTransitionConfiguration:(id)a0 toNewComponentAssetNode:(id)a1;
+ (void)applyViewTransitionConfiguration:(id)a0 toView:(id)a1 scope:(unsigned long long)a2 options:(unsigned long long)a3 duration:(double)a4 avatar:(id)a5 context:(id)a6 completionHandler:(id /* block */)a7;
+ (id)findNodesNamed:(id)a0 inHierarchy:(id)a1;
+ (id)poseByApplyingAdjustmentsForConfiguration:(id)a0 avatar:(id)a1;

- (void)_applicationWillEnterForeground:(id)a0;
- (void)_applicationWillResignActive:(id)a0;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAvatar:(id)a0;
- (void)stickerImageWithConfiguration:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)renderer:(id)a0 didApplyAnimationsAtTime:(double)a1;
- (void)_renderer:(id)a0 didBuildSubdivDataForHash:(id)a1 dataProvider:(id /* block */)a2;
- (id)_renderer:(id)a0 subdivDataForHash:(id)a1;
- (void)renderer:(id)a0 commandBufferDidCompleteWithError:(id)a1;
- (void)renderer:(id)a0 didFallbackToDefaultTextureForSource:(id)a1 message:(id)a2;
- (void)_stickerImageWithConfiguration:(id)a0 options:(id)a1 startTime:(double)a2 completionHandler:(id /* block */)a3;
- (void)applyConfiguration:(id)a0 options:(id)a1 forExport:(BOOL)a2 completion:(id /* block */)a3;
- (void)rendererWithConfiguration:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)setupAvatar:(id)a0;
- (void)setupRendererWithAvatar:(id)a0;
- (void)snapshotAtTime:(double)a0 withRenderer:(id)a1 configuration:(id)a2 options:(id)a3 completionBlock:(id /* block */)a4;
- (void)stickerImageWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)stickerImageWithConfiguration:(id)a0 correctClipping:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
