@interface SBDodgingModifierEventResponse : SBChainableModifierEventResponse

@property (nonatomic) unsigned long long type;

+ (id)newEventResponse;

- (id)description;

@end
