@interface _UIContextLayerHostView : _UISceneLayerHostView

@property (nonatomic) unsigned long long renderingMode;

+ (Class)layerClass;

- (id)layer;
- (id)initWithSceneLayer:(id)a0;

@end
