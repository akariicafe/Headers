@class NSString, BSAnimationSettings;

@interface SBFTraitsSettingsActuationContext : NSObject <NSCopying, BSDescriptionProviding>

@property (copy, nonatomic) BSAnimationSettings *animationSettings;
@property (retain, nonatomic) id drawingFence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToSettingsActuationContext:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithAnimationSettings:(id)a0 drawingFence:(id)a1;
- (id)initWithSettingsActuationContext:(id)a0;

@end
