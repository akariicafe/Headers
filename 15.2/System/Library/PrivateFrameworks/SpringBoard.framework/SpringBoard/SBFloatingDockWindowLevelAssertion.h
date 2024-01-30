@class NSString;

@interface SBFloatingDockWindowLevelAssertion : NSObject <BSDescriptionProviding, BSInvalidatable>

@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) double level;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPriority:(unsigned long long)a0 level:(double)a1 reason:(id)a2;

@end
