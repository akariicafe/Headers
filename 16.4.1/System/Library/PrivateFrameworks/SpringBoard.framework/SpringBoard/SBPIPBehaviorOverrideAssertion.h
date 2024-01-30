@class NSString;

@interface SBPIPBehaviorOverrideAssertion : BSSimpleAssertion

@property (readonly, copy, nonatomic) NSString *cameraSensorAttributionBundleIdentifier;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (long long)behaviorOverrideReason;
- (id)initWithReason:(long long)a0 identifier:(id)a1 cameraSensorAttributionBundleIdentifier:(id)a2 invalidationBlock:(id /* block */)a3;
- (id)initWithReason:(long long)a0 identifier:(id)a1 invalidationBlock:(id /* block */)a2;
- (id)initWithReason:(long long)a0 invalidationBlock:(id /* block */)a1;

@end
