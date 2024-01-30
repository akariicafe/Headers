@class NSString, SCNRenderer, SCNScene, AVTAvatar, AVTAvatarEnvironment, AVTStickerConfigurationReversionContext;

@interface AVTStickerGenerator : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI, _SCNSceneCommandBufferStatusMonitor, _SCNSceneRendererResourceManagerMonitor> {
    AVTStickerConfigurationReversionContext *_context;
    BOOL _canSubmitGPUWork;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _canSubmitGPUWorkLock;
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
+ (id)addCamera:(id)a0 inScene:(id)a1;
+ (void)addProps:(id)a0 toScene:(id)a1 forAvatar:(id)a2 withCamera:(id)a3 forExport:(BOOL)a4 completion:(id /* block */)a5;
+ (id)createPropsParentNodeIfNeededInScene:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clippingRectForBaseSize:(struct CGSize { double x0; double x1; })a0;
+ (id)applyViewTransitionConfiguration:(id)a0 toScene:(id)a1 withAvatar:(id)a2 context:(id)a3;
+ (void)applyViewTransitionConfiguration:(id)a0 toNewComponentAssetNode:(id)a1;
+ (id)findNodesNamed:(id)a0 inHierarchy:(id)a1;

- (void)_applicationWillResignActive:(id)a0;
- (void)stickerImageWithConfiguration:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAvatar:(id)a0;
- (void).cxx_destruct;
- (void)stickerImageWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)_applicationWillEnterForeground:(id)a0;
- (void)dealloc;
- (void)renderer:(id)a0 didApplyAnimationsAtTime:(double)a1;
- (void)setupAvatar:(id)a0;
- (void)setupRendererWithAvatar:(id)a0;
- (void)applyConfiguration:(id)a0 forExport:(BOOL)a1 completion:(id /* block */)a2;
- (id)snapshotAtTime:(double)a0 withRenderer:(id)a1 configuration:(id)a2 options:(id)a3;
- (void)rendererWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_stickerImageWithConfiguration:(id)a0 options:(id)a1 startTime:(double)a2 completionHandler:(id /* block */)a3;
- (void)_renderer:(id)a0 didBuildSubdivDataForHash:(id)a1 dataProvider:(id /* block */)a2;
- (id)_renderer:(id)a0 subdivDataForHash:(id)a1;
- (void)renderer:(id)a0 commandBufferDidCompleteWithError:(id)a1;
- (void)renderer:(id)a0 didFallbackToDefaultTextureForSource:(id)a1 message:(id)a2;
- (void)stickerImageWithConfiguration:(id)a0 correctClipping:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
