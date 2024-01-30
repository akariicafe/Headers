@class NSString, UITransformer;

@interface UISceneLayerPresentationContext : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (retain, nonatomic) UITransformer *transformer;
@property (nonatomic) double alpha;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isClippingDisabled) BOOL clippingDisabled;
@property (nonatomic) unsigned long long renderingMode;
@property (copy, nonatomic, setter=_setMinificationFilterName:) NSString *_minificationFilterName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isEqualToDefaultContext;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)_initWithSceneLayerPresentationContext:(id)a0;

@end
