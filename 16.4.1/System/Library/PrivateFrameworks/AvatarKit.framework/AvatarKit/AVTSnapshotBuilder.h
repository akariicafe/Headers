@class MTLRenderPassDescriptor, NSString, SCNRenderer, AVTAvatar, AVTRenderer;
@protocol MTLCommandQueue;

@interface AVTSnapshotBuilder : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {
    AVTAvatar *_avatar;
    AVTAvatar *_snapshotedAvatar;
    AVTRenderer *_renderer;
    id<MTLCommandQueue> _commandQueue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct CGContext { } *_bitmapContext;
    struct { BOOL canSubmitGPUWorkAppIsActive; BOOL canSubmitGPUWorkAppIsForeground; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } canSubmitGPUWorkLock; } _backgroundGPUWorkHelper;
}

@property (retain, nonatomic) AVTAvatar *avatar;
@property (readonly, nonatomic) SCNRenderer *renderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (struct CGImage { } *)copyRescaledCGImage:(struct CGImage { } *)a0 by:(float)a1;

- (void)_applicationWillEnterForeground:(id)a0;
- (void)_applicationWillResignActive:(id)a0;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;
- (void)_applyOptions:(id)a0;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;
- (id)_imageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2 useACopy:(BOOL)a3;
- (id)animatedImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 options:(id)a2;
- (void)setupAvatarWithOptions:(id)a0 useACopy:(BOOL)a1;

@end
