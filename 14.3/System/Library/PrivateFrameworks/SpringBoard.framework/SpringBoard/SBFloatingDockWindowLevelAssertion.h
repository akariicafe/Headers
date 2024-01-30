@class NSString;

@interface SBFloatingDockWindowLevelAssertion : NSObject <BSDescriptionProviding>

@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) double level;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)initWithPriority:(unsigned long long)a0 level:(double)a1 reason:(id)a2;

@end
