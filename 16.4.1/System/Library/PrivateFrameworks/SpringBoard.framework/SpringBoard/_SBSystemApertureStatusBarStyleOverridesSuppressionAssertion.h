@interface _SBSystemApertureStatusBarStyleOverridesSuppressionAssertion : BSSimpleAssertion

@property (readonly, nonatomic) unsigned long long styleOverridesToSuppress;

- (id)initWithIdentifier:(id)a0 forReason:(id)a1 styleOverridesToSuppress:(unsigned long long)a2 invalidationBlock:(id /* block */)a3;

@end
