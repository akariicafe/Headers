@class INIntent;

@interface WFActionWillRunIntentTestingEvent : WFActionTestingEvent

@property (readonly, nonatomic) INIntent *intent;

- (void).cxx_destruct;
- (id)initWithAction:(id)a0 intent:(id)a1;

@end
