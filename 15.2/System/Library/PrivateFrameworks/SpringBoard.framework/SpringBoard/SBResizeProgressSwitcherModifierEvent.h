@interface SBResizeProgressSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) double progress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id)initWithProgress:(double)a0;

@end
