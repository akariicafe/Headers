@interface SBPIPWindowLevelOverrideAssertion : SBPIPBehaviorOverrideAssertion

@property (readonly, nonatomic) unsigned long long windowLevel;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithWindowLevel:(unsigned long long)a0 reason:(long long)a1 identifier:(id)a2 invalidationBlock:(id /* block */)a3;

@end
