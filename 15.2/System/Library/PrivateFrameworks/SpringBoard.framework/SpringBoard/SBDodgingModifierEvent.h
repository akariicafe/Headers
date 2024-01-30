@interface SBDodgingModifierEvent : SBChainableModifierEvent

@property (readonly, nonatomic) unsigned long long type;

- (id)description;

@end
