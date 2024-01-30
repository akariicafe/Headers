@class NSString;

@interface SBWindowLevelAssertion : NSObject <BSDescriptionProviding, BSInvalidatable> {
    id /* block */ _invalidationHandler;
}

@property (readonly, nonatomic) double windowLevel;
@property (readonly, nonatomic) long long priority;
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
- (void)invalidate;
- (id)initWithPriority:(long long)a0 windowLevel:(double)a1 reason:(id)a2 invalidationHandler:(id /* block */)a3;

@end
