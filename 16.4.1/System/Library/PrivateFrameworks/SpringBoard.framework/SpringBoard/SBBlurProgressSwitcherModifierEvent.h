@interface SBBlurProgressSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) double progress;

- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProgress:(double)a0;

@end
