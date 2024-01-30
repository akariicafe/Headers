@class SAUIDelayedActionCommand, BKSProcessAssertion;

@interface _SRUIFAssertingDelayedActionCommand : NSObject

@property (readonly, nonatomic) SAUIDelayedActionCommand *command;
@property (readonly, nonatomic) BKSProcessAssertion *assertion;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 assertion:(id)a1;

@end
