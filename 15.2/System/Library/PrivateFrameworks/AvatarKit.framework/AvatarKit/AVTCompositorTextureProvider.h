@class NSString, AVTCompositorPipeline, NSMutableSet, AVTMemoji, AVTCompositor;

@interface AVTCompositorTextureProvider : NSObject <SCNMaterialPropertyTextureProvider> {
    AVTMemoji *_memoji;
    AVTCompositor *_compositor;
    AVTCompositorPipeline *_pipeline;
    NSString *_propertyName;
    BOOL _skinIsDirty;
    unsigned long long _componentDirtyMask;
    NSMutableSet *_helperTokens;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)newTextureForDevice:(id)a0;
- (void)renderToTexture:(id)a0 computeCommandHandler:(id /* block */)a1 blitCommandHandler:(id /* block */)a2 helper:(id)a3;
- (id)initWithCompositor:(id)a0 memoji:(id)a1 propertyName:(id)a2;
- (void)skinColorDidChange;
- (void)componentDidChangeForTypes:(unsigned long long)a0;

@end
