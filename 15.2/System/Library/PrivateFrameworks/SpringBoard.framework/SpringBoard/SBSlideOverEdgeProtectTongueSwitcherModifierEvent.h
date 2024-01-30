@interface SBSlideOverEdgeProtectTongueSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic, getter=isTonguePresented) BOOL tonguePresented;
@property (readonly, nonatomic) unsigned long long edge;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id)initWithTonguePresented:(BOOL)a0 edge:(unsigned long long)a1;

@end
