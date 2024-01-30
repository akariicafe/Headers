@interface SBIndirectPanGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent

@property (nonatomic) unsigned long long indirectPanEndReason;

- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isIndirectPanGestureEvent;

@end
