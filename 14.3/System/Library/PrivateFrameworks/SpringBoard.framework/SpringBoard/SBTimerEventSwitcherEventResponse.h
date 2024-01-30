@class NSString;

@interface SBTimerEventSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, nonatomic) NSString *reason;

- (id)initWithDelay:(double)a0 validator:(id /* block */)a1 reason:(id)a2;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (long long)type;

@end
