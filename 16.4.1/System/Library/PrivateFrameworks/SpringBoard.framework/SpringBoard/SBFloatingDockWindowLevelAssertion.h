@class NSString, SBFloatingDockController;

@interface SBFloatingDockWindowLevelAssertion : NSObject <BSDescriptionProviding, BSInvalidatable>

@property (readonly, weak, nonatomic) SBFloatingDockController *floatingDockController;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) double level;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithFloatingDockController:(id)a0 priority:(unsigned long long)a1 level:(double)a2 reason:(id)a3;

@end
