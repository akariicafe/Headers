@class BSMutableSettings, NSString, UITransformer, UIMutableTransformer, NSSet, NSDictionary, UISceneAsynchronousRenderingOptions, UIColor;

@interface UIScenePresentationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    BSMutableSettings *_settings;
    UIMutableTransformer *_transformer;
}

@property (readonly, nonatomic) UIScenePresentationContext *_defaultPresentationContext;
@property (readonly, copy, nonatomic) NSSet *_exclusiveLayerTargetsToInclude;
@property (readonly, copy, nonatomic) NSSet *_layerTargetsToExclude;
@property (readonly, nonatomic, getter=_isVisibilityPropagationEnabled) BOOL _visibilityPropagationEnabled;
@property (readonly, copy, nonatomic) NSString *_minificationFilterName;
@property (readonly, nonatomic, getter=isClippingDisabled) BOOL clippingDisabled;
@property (readonly, nonatomic) unsigned long long appearanceStyle;
@property (readonly, copy, nonatomic) UIColor *backgroundColorWhileHosting;
@property (readonly, copy, nonatomic) UIColor *backgroundColorWhileNotHosting;
@property (readonly, nonatomic) unsigned long long presentedLayerTypes;
@property (readonly, copy, nonatomic) NSDictionary *layerPresentationOverrides;
@property (readonly, copy, nonatomic) UITransformer *hostTransformer;
@property (readonly, nonatomic) unsigned long long renderingMode;
@property (readonly, copy, nonatomic) UISceneAsynchronousRenderingOptions *asynchronousRenderingOptions;
@property (readonly, nonatomic) BOOL inheritsSecurity;
@property (readonly, nonatomic) BOOL resizesHostedContext;
@property (readonly, nonatomic) BOOL shouldPassthroughHitTestEventsIfTransparent;
@property (readonly, nonatomic) BOOL stopsHitTestTransformAccumulation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_initWithPresentationContext:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_initWithDefaultValues;
- (id)succinctDescriptionBuilder;
- (id)_initWithDefaultPresentationContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_initWithSettings:(id)a0 defaultPresentationContext:(id)a1;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;

@end
