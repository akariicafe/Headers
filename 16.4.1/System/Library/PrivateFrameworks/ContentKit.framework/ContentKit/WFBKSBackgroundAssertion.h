@class NSString, BKSProcessAssertion;

@interface WFBKSBackgroundAssertion : WFBackgroundAssertion

@property (readonly, copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) id /* block */ expirationHandler;
@property (retain, nonatomic) BKSProcessAssertion *assertion;
@property (retain, nonatomic) id observer;

+ (id)backgroundAssertionWithName:(id)a0 expirationHandler:(id /* block */)a1;

- (void)end;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 expirationHandler:(id /* block */)a1;

@end
