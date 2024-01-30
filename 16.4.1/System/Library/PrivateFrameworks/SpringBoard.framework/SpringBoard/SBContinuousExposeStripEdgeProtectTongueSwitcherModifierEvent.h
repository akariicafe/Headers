@interface SBContinuousExposeStripEdgeProtectTongueSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic, getter=isTonguePresented) BOOL tonguePresented;

- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTonguePresented:(BOOL)a0;

@end
