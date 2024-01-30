@class NSString;

@interface SBHomeHardwareButtonLongPressDurationAssertion : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithReason:(id)a0 duration:(double)a1;

@end
