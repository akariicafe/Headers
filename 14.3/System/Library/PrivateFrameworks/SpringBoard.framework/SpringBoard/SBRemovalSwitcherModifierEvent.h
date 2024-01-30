@class SBAppLayout;

@interface SBRemovalSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) unsigned long long phase;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)initWithAppLayout:(id)a0 reason:(long long)a1 phase:(unsigned long long)a2;

@end
