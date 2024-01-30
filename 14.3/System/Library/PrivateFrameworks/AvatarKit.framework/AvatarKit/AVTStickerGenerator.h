@class NSString, SCNRenderer, SCNScene, AVTAvatar, AVTAvatarEnvironment, AVTStickerConfigurationReversionContext;

@interface AVTStickerGenerator : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {
    AVTStickerConfigurationReversionContext *_context;
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
+ (void)applyConfiguration:(id)a0 toScene:(id)a1 withAvatar:(id)a2 context:(id)a3 defaultCamera:(id)a4 forExport:(BOOL)a5 completion:(id /* block */)a6;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clippingRectForBaseSize:(struct CGSize { double x0; double x1; })a0;
+ (id)findNodesNamed:(id)a0 inAvatar:(id)a1;

- (void).cxx_destruct;
- (void)stickerImageWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)renderer:(id)a0 didApplyAnimationsAtTime:(double)a1;
- (void)stickerImageWithConfiguration:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)stickerImageWithConfiguration:(id)a0 correctClipping:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithAvatar:(id)a0;
- (void)setupAvatar:(id)a0;
- (void)setupRendererWithAvatar:(id)a0;
- (id)snapshotAtTime:(double)a0 withRenderer:(id)a1 configuration:(id)a2 options:(id)a3;
- (void)rendererWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)_stickerImageWithConfiguration:(id)a0 options:(id)a1 startTime:(double)a2 completionHandler:(id /* block */)a3;
- (void)_renderer:(id)a0 didBuildSubdivDataForHash:(id)a1 dataProvider:(id /* block */)a2;
- (id)_renderer:(id)a0 subdivDataForHash:(id)a1;

@end
