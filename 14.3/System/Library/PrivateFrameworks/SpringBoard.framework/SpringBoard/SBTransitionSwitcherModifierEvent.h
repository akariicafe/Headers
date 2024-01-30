@class NSUUID, SBAppLayout;

@interface SBTransitionSwitcherModifierEvent : SBSwitcherModifierEvent

@property (nonatomic) unsigned long long phase;
@property (nonatomic, getter=isAnimated) BOOL animated;
@property (retain, nonatomic) SBAppLayout *fromAppLayout;
@property (nonatomic) long long fromEnvironmentMode;
@property (retain, nonatomic) SBAppLayout *toAppLayout;
@property (nonatomic) long long toEnvironmentMode;
@property (nonatomic) long long fromInterfaceOrientation;
@property (nonatomic) long long toInterfaceOrientation;
@property (readonly, nonatomic) NSUUID *transitionID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)initWithTransitionID:(id)a0 phase:(unsigned long long)a1 animated:(BOOL)a2;
- (BOOL)isTransitionEvent;

@end
