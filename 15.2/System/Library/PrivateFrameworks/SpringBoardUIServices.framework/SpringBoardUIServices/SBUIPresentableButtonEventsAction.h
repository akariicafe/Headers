@class NSString;

@interface SBUIPresentableButtonEventsAction : BSAction <SBUIPresentableButtonEventsAssertion>

@property (readonly, nonatomic) long long presentableButtonEvent;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (BOOL)_expectsResponse;
- (void).cxx_destruct;
- (id)_descriptionBuilderWithMultilinePrefix:(id)a0 debug:(BOOL)a1;
- (void)invalidate;
- (id)initWithButtonEvent:(long long)a0 reason:(id)a1 handler:(id /* block */)a2;
- (void)handleButtonEvent;

@end
