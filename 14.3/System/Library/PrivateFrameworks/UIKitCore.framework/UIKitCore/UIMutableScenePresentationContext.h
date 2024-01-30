@class UIColor, NSSet, NSString, UITransformer, UIScenePresentationContext;

@interface UIMutableScenePresentationContext : UIScenePresentationContext

@property (retain, nonatomic, setter=_setDefaultPresentationContext:) UIScenePresentationContext *_defaultPresentationContext;
@property (copy, nonatomic, setter=_setExclusiveLayerTargetsToInclude:) NSSet *_exclusiveLayerTargetsToInclude;
@property (copy, nonatomic, setter=_setLayerTargetsToExclude:) NSSet *_layerTargetsToExclude;
@property (nonatomic, getter=_isVisibilityPropagationEnabled, setter=_setVisibilityPropagationEnabled:) BOOL _visibilityPropagationEnabled;
@property (copy, nonatomic, setter=_setMinificationFilterName:) NSString *_minificationFilterName;
@property (nonatomic, getter=isClippingDisabled) BOOL clippingDisabled;
@property (nonatomic) unsigned long long appearanceStyle;
@property (copy, nonatomic) UIColor *backgroundColorWhileHosting;
@property (copy, nonatomic) UIColor *backgroundColorWhileNotHosting;
@property (nonatomic) unsigned long long presentedLayerTypes;
@property (copy, nonatomic) UITransformer *hostTransformer;
@property (nonatomic) unsigned long long renderingMode;

- (void)resetToDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRenderingMode:(unsigned long long)a0;
- (void)setBackgroundColorWhileHosting:(id)a0;
- (void)setHostTransformer:(id)a0;
- (id)_existingLayerPresentationContextCreatingIfNecessary:(BOOL)a0;
- (void)setBackgroundColorWhileNotHosting:(id)a0;
- (void)removeLayerPresentationOverrideForLayerTarget:(id)a0;
- (void)setClippingDisabled:(BOOL)a0;
- (void)modifyLayerPresentationOverrideContextForLayerTarget:(id)a0 block:(id /* block */)a1;
- (void)setPresentedLayerTypes:(unsigned long long)a0;
- (void)removeAllLayerPresentationOverrides;
- (void)setAppearanceStyle:(unsigned long long)a0;

@end
