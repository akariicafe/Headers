@class UISceneAsynchronousRenderingOptions;

@interface _UIContextLayerHostView : _UISceneLayerHostView

@property (nonatomic) unsigned long long renderingMode;
@property (copy, nonatomic) UISceneAsynchronousRenderingOptions *asynchronousRenderingOptions;

+ (Class)layerClass;

- (id)initWithSceneLayer:(id)a0;
- (void)setResizesHostedContext:(BOOL)a0;
- (void)setStopsHitTestTransformAccumulation:(BOOL)a0;
- (void)setInheritsSecurity:(BOOL)a0;
- (void)willMoveToWindow:(id)a0;
- (id)layer;
- (void)_prepareForWindowDealloc;

@end
