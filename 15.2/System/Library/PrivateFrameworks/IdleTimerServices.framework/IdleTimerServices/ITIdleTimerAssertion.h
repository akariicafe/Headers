@class NSString, ITIdleTimerConfiguration;

@interface ITIdleTimerAssertion : BSSimpleAssertion

@property (readonly, copy, nonatomic, getter=_uniqueReason) NSString *uniqueReason;
@property (readonly, copy, nonatomic) ITIdleTimerConfiguration *configuration;

- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)_initWithConfiguration:(id)a0 forReason:(id)a1 invalidationBlock:(id /* block */)a2;

@end
