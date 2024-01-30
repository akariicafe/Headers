@class MTLRenderPassDescriptor, NSString, SCNRenderer, AVTAvatar, AVTAvatarEnvironment;
@protocol MTLCommandQueue;

@interface AVTVariantBatchSnapshotter : NSObject <SCNSceneRendererDelegate, _SCNSceneRendererDelegateSPI> {
    AVTAvatar *_avatar;
    struct CGSize { double width; double height; } _size;
    double _scale;
    unsigned long long _antialiasingMode;
    SCNRenderer *_renderer;
    AVTAvatarEnvironment *_environment;
    id<MTLCommandQueue> _commandQueue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct CGContext { } *_bitmapContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)renderer:(id)a0 didApplyAnimationsAtTime:(double)a1;
- (void)_renderer:(id)a0 didBuildSubdivDataForHash:(id)a1 dataProvider:(id /* block */)a2;
- (id)_renderer:(id)a0 subdivDataForHash:(id)a1;
- (id)initWithAvatar:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 antialiasingMode:(unsigned long long)a3 device:(id)a4;
- (id)imageWithOptions:(id)a0 modifications:(id /* block */)a1;

@end
