@protocol SRRelatedSettingsProvider;

@interface PUIMotionFitnessController : PUITCCAccessController {
    id<SRRelatedSettingsProvider> _sensorKitSpecifiersProvider;
}

- (void).cxx_destruct;
- (id)valueForSpecifier:(id)a0;
- (id)specifiers;
- (id)_appSpecifiers;
- (id)loadSensorKitSpecifiersProvider;
- (BOOL)isFitnessTrackingEnabledFromTCC;
- (void)setFitnessTrackingEnabled:(id)a0 forSpecifier:(id)a1;
- (id)isFitnessTrackingEnabled:(id)a0;

@end
