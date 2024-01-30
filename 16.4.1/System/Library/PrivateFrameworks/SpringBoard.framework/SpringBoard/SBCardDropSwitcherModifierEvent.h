@class SBSwitcherDropRegionContext;

@interface SBCardDropSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBSwitcherDropRegionContext *context;
@property (readonly, nonatomic) unsigned long long phase;

- (long long)type;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPhase:(unsigned long long)a0 context:(id)a1;

@end
