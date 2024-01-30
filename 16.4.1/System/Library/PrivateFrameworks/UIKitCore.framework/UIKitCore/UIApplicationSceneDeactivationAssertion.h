@class NSString, UIApplicationSceneDeactivationManager;

@interface UIApplicationSceneDeactivationAssertion : NSObject <BSDescriptionProviding>

@property (readonly, weak, nonatomic) UIApplicationSceneDeactivationManager *manager;
@property (readonly, nonatomic) long long reason;
@property (readonly, copy, nonatomic) id /* block */ predicate;
@property (readonly, nonatomic, getter=isAcquired) BOOL acquired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)acquire;
- (void)relinquish;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)dealloc;
- (id)initWithReason:(long long)a0 manager:(id)a1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (void)acquireWithPredicate:(id /* block */)a0 transitionContext:(id)a1;

@end
