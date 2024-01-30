@class NSUserDefaults, HDHRCardioFitnessAnalyticsDailyEventActivity, HDHRIrregularRhythmNotificationsFeatureAvailabilityManager, HDHRIrregularRhythmNotificationsSettingMigrator, NSString, HDHRElectrocardiogramRecordingFeatureAvailabilityManager, HDBackgroundFeatureDeliveryManager, HDHRHealthLiteDataCollector, HDPrimaryProfile, HDHRCardioFitnessFeatureAvailabilityManager, HDHRHeartbeatSeriesFeatureExclusivityManager, HDHRNotificationManager, HDHRDailyHeartRateManager, HDHRAFibBurdenProfileExtensionComponents, HKFeatureStatusManager;
@protocol HDFeatureAvailabilityExtension;

@interface HDHeartRateProfileExtension : NSObject <HDHRAFibBurdenProfileExtensionComponentsContainer, HDProfileReadyObserver, HDHRHeartNotificationsUserDefaultsProviding, HDProfileExtension, HDFeatureAvailabilityExtensionProvider> {
    HDHRCardioFitnessFeatureAvailabilityManager *_cardioFitnessFeatureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_cardioFitnessBackgroundFeatureDeliveryManager;
    HDHRCardioFitnessAnalyticsDailyEventActivity *_dailyAnalyticsActivity;
    HDHRHeartbeatSeriesFeatureExclusivityManager *_heartbeatSeriesFeatureExclusivityManager;
    id<HDFeatureAvailabilityExtension> _lowHeartRateNotificationsFeatureAvailabilityManager;
    id<HDFeatureAvailabilityExtension> _highHeartRateNotificationsFeatureAvailabilityManager;
    HDHRIrregularRhythmNotificationsFeatureAvailabilityManager *_irregularRhythmNotificationsAvailabilityManager;
    HDHRIrregularRhythmNotificationsSettingMigrator *_irregularRhythmNotificationsSettingMigrator;
    HDBackgroundFeatureDeliveryManager *_irregularRhythmNotificationsV2DeliveryManager;
    HKFeatureStatusManager *_irregularRhythmNotificationsFeatureStatusManager;
    HDHRElectrocardiogramRecordingFeatureAvailabilityManager *_electrocardiogramRecordingAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_electrocardiogramRecordingV2DeliveryManager;
}

@property (readonly, nonatomic) HKFeatureStatusManager *irregularRhythmNotificationsFeatureStatusManager;
@property (readonly, weak, nonatomic) HDPrimaryProfile *profile;
@property (retain, nonatomic) HDHRHealthLiteDataCollector *healthLiteDataCollector;
@property (retain, nonatomic) HDHRDailyHeartRateManager *dailyHeartRateManager;
@property (retain, nonatomic) HDHRNotificationManager *heartRateNotificationManager;
@property (retain, nonatomic) HDHRAFibBurdenProfileExtensionComponents *aFibBurdenComponents;
@property (retain, nonatomic) NSUserDefaults *heartNotificationsUserDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (id)initWithProfile:(id)a0 heartNotificationsUserDefaults:(id)a1 capabilityProvider:(id)a2;
- (void)_setupElectrocardiogramRecordingWithProfile:(id)a0 pairedDeviceCapabilityProvider:(id)a1;
- (id)initWithProfile:(id)a0 heartNotificationsUserDefaults:(id)a1;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0;
- (void).cxx_destruct;

@end
