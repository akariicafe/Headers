@class NSString;

@interface SBSystemApertureSceneElementConfiguration : NSObject <BSDescriptionProviding, NSCopying>

@property (nonatomic) BOOL allowsSceneReactivation;
@property (nonatomic) BOOL entersBackgroundWhenBacklightIsOff;
@property (nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (nonatomic) double maximumHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;

@end
