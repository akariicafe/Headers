@class NSDictionary;

@interface SBEmitSBEventSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) NSDictionary *payload;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithSBEventWithEventType:(unsigned long long)a0 payload:(id)a1;

@end
