@class NSDictionary;

@interface SBEmitSBEventSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) NSDictionary *payload;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithSBEventWithEventType:(unsigned long long)a0 payload:(id)a1;

@end
