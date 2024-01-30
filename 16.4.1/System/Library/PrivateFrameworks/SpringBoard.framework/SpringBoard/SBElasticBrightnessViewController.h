@interface SBElasticBrightnessViewController : SBElasticValueViewController {
    long long _activeBrightnessRoute;
    long long _debugOverrideBrightnessRoute;
}

- (id)log;
- (id)dataSource;
- (void)viewDidLoad;
- (id)initWithDataSource:(id)a0;
- (void)_debugHandleNextRoute;
- (void)_debugHandleResetRoute;
- (unsigned long long)layoutAxisForInterfaceOrientation:(long long)a0;
- (void)noteContinuousValueInteractionDidEnd;
- (void)noteContinuousValueInteractionWillBegin;
- (id)sliderAccessibilityIdentifier;
- (BOOL)updateActiveRouteDisplay:(out id *)a0;

@end
