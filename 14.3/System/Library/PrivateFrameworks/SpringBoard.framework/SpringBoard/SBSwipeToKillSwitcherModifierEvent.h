@class SBAppLayout;

@interface SBSwipeToKillSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) double progress;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;
- (id)initWithAppLayout:(id)a0 progress:(double)a1;

@end
