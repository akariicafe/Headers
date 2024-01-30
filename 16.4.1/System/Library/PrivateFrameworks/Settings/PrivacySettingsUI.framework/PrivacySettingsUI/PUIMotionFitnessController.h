@protocol SRRelatedSettingsProvider;

@interface PUIMotionFitnessController : PUITCCAccessController {
    id<SRRelatedSettingsProvider> _sensorKitSpecifiersProvider;
}

- (id)specifiers;
- (void).cxx_destruct;
- (id)_appSpecifiers;
- (id)valueForSpecifier:(id)a0;
- (id)loadSensorKitSpecifiersProvider;
- (BOOL)isFitnessTrackingEnabledFromTCC;
- (id)isFitnessTrackingEnabled:(id)a0;
- (void)setFitnessTrackingEnabled:(id)a0 forSpecifier:(id)a1;

@end
