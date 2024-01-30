@class SBSwitcherDropRegionContext;

@interface SBCardDropSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBSwitcherDropRegionContext *context;
@property (readonly, nonatomic) unsigned long long phase;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)type;
- (id)initWithPhase:(unsigned long long)a0 context:(id)a1;

@end
