@interface SBElasticBrightnessViewController : SBElasticValueViewController {
    long long _activeBrightnessRoute;
    long long _debugOverrideBrightnessRoute;
}

- (id)initWithDataSource:(id)a0;
- (void)viewDidLoad;
- (id)log;
- (id)dataSource;
- (id)sliderAccessibilityIdentifier;
- (unsigned long long)layoutAxisForInterfaceOrientation:(long long)a0;
- (void)noteContinuousValueInteractionWillBegin;
- (void)noteContinuousValueInteractionDidEnd;
- (void)_debugHandleNextRoute;
- (void)_debugHandleResetRoute;
- (BOOL)updateActiveRouteDisplay:(out id *)a0;

@end
