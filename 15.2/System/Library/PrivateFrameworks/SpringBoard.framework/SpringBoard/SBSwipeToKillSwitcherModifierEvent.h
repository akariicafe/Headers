@class SBAppLayout;

@interface SBSwipeToKillSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) long long layoutRole;
@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (nonatomic) double progress;
@property (nonatomic) struct CGPoint { double x; double y; } translation;
@property (nonatomic, getter=isDragging) BOOL dragging;
@property (nonatomic) double decelerationTargetProgress;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id)initWithLayoutRole:(long long)a0 inAppLayout:(id)a1 progress:(double)a2 translation:(struct CGPoint { double x0; double x1; })a3;

@end
