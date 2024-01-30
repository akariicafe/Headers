@class UITransformer;

@interface UIMutableSceneLayerPresentationContext : UISceneLayerPresentationContext

@property (nonatomic) double alpha;
@property (retain, nonatomic) UITransformer *transformer;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isClippingDisabled) BOOL clippingDisabled;
@property (nonatomic) unsigned long long renderingMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
