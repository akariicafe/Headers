@interface SBPointerCrossedDisplayBoundarySwitcherModifierEvent : SBSwitcherModifierEvent

@property (nonatomic) unsigned long long direction;
@property (nonatomic) unsigned int edge;

- (long long)type;
- (id)initWithDirection:(unsigned long long)a0 edge:(unsigned int)a1;

@end
