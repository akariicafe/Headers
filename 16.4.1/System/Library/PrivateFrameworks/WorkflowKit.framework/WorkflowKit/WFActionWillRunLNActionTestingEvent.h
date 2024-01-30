@class LNAction;

@interface WFActionWillRunLNActionTestingEvent : WFActionTestingEvent

@property (readonly, nonatomic) LNAction *lnAction;

- (void).cxx_destruct;
- (id)initWithAction:(id)a0 lnAction:(id)a1;

@end
