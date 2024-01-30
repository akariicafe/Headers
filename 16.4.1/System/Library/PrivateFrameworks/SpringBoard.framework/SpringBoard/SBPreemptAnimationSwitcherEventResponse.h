@interface SBPreemptAnimationSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) unsigned long long options;

- (long long)type;
- (id)initWithOptions:(unsigned long long)a0;

@end
