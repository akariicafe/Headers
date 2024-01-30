@interface PXWidgetCompositionTilingControllerElement : PXWidgetCompositionElement

@property (nonatomic, setter=_setDidLoadContent:) BOOL _didLoadContent;

- (id)contentTilingController;
- (id)animationOptionsOriginatingTilingController;

@end
