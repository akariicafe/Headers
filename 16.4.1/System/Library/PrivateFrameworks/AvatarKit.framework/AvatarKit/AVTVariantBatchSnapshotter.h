@class MTLRenderPassDescriptor, NSString, AVTRenderer, AVTAvatar;
@protocol MTLCommandQueue;

@interface AVTVariantBatchSnapshotter : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {
    AVTAvatar *_avatar;
    struct CGSize { double width; double height; } _size;
    double _scale;
    unsigned long long _antialiasingMode;
    AVTRenderer *_renderer;
    id<MTLCommandQueue> _commandQueue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct CGContext { } *_bitmapContext;
    struct { BOOL canSubmitGPUWorkAppIsActive; BOOL canSubmitGPUWorkAppIsForeground; struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } canSubmitGPUWorkLock; } _backgroundGPUWorkHelper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationWillEnterForeground:(id)a0;
- (void)_applicationWillResignActive:(id)a0;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)imageWithOptions:(id)a0 modifications:(id /* block */)a1;
- (id)initWithAvatar:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 antialiasingMode:(unsigned long long)a3 device:(id)a4;

@end
