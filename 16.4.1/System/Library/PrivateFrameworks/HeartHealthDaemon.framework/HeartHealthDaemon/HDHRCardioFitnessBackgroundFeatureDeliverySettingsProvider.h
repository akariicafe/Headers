@class NSUserDefaults;

@interface HDHRCardioFitnessBackgroundFeatureDeliverySettingsProvider : NSObject <HDBackgroundFeatureDeliverySettingsProviding> {
    NSUserDefaults *_heartRateSettingsDefaults;
}

- (id)featureSettingsUponBackgroundDelivery;
- (id)initWithHeartRateSettingsDefaults:(id)a0;
- (void).cxx_destruct;

@end
