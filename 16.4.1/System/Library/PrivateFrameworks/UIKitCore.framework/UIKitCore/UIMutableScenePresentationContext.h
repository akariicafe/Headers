@class UIColor, NSSet, NSString, UITransformer, UISceneAsynchronousRenderingOptions, UIScenePresentationContext;

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
@property (copy, nonatomic) UISceneAsynchronousRenderingOptions *asynchronousRenderingOptions;
@property (nonatomic) BOOL inheritsSecurity;
@property (nonatomic) BOOL resizesHostedContext;
@property (nonatomic) BOOL shouldPassthroughHitTestEventsIfTransparent;
@property (nonatomic) BOOL stopsHitTestTransformAccumulation;

- (void)removeAllLayerPresentationOverrides;
- (void)setResizesHostedContext:(BOOL)a0;
- (void)setPresentedLayerTypes:(unsigned long long)a0;
- (void)setStopsHitTestTransformAccumulation:(BOOL)a0;
- (void)setRenderingMode:(unsigned long long)a0;
- (void)setClippingDisabled:(BOOL)a0;
- (void)setAppearanceStyle:(unsigned long long)a0;
- (void)setBackgroundColorWhileNotHosting:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeLayerPresentationOverrideForLayerTarget:(id)a0;
- (void)setInheritsSecurity:(BOOL)a0;
- (void)setShouldPassthroughHitTestEventsIfTransparent:(BOOL)a0;
- (void)setBackgroundColorWhileHosting:(id)a0;
- (void)setAsynchronousRenderingOptions:(id)a0;
- (void)setHostTransformer:(id)a0;
- (id)_existingLayerPresentationContextCreatingIfNecessary:(BOOL)a0;
- (void)resetToDefaults;
- (void)modifyLayerPresentationOverrideContextForLayerTarget:(id)a0 block:(id /* block */)a1;

@end
