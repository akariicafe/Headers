@class UISceneAsynchronousRenderingOptions;

@interface _UIContextLayerHostView : _UISceneLayerHostView

@property (nonatomic) unsigned long long renderingMode;
@property (copy, nonatomic) UISceneAsynchronousRenderingOptions *asynchronousRenderingOptions;

+ (Class)layerClass;

- (id)layer;
- (id)initWithSceneLayer:(id)a0;

@end
