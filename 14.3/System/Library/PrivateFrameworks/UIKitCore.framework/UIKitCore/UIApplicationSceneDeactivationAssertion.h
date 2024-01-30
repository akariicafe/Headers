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

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)acquireWithPredicate:(id /* block */)a0 transitionContext:(id)a1;
- (void)dealloc;
- (void)relinquish;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)acquire;
- (id)initWithReason:(long long)a0 manager:(id)a1;

@end
