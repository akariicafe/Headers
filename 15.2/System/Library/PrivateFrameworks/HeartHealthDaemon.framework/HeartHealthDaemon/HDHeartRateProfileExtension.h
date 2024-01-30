@class HDHRHealthLiteDataCollector, NSString, HDHRCardioFitnessAnalyticsDailyEventActivity, HDHRCardioFitnessFeatureAvailabilityManager, HDHRIrregularRhythmNotificationsV1FeatureAvailabilityManager, HKFeatureStatusManager, HDPrimaryProfile, HDHRNotificationManager, HDHRDailyHeartRateManager, NSUserDefaults;

@interface HDHeartRateProfileExtension : NSObject <HDProfileReadyObserver, HDHRHeartNotificationsUserDefaultsProviding, HDProfileExtension, HDFeatureAvailabilityExtensionProvider> {
    HDHRCardioFitnessFeatureAvailabilityManager *_cardioFitnessFeatureAvailabilityManager;
    HDHRCardioFitnessAnalyticsDailyEventActivity *_dailyAnalyticsActivity;
    HDHRIrregularRhythmNotificationsV1FeatureAvailabilityManager *_irregularRhythmNotificationsAvailabilityManager;
    HKFeatureStatusManager *_irregularRhythmNotificationsFeatureStatusManager;
}

@property (readonly, nonatomic) HKFeatureStatusManager *irregularRhythmNotificationsFeatureStatusManager;
@property (readonly, weak, nonatomic) HDPrimaryProfile *profile;
@property (retain, nonatomic) HDHRHealthLiteDataCollector *healthLiteDataCollector;
@property (retain, nonatomic) HDHRDailyHeartRateManager *dailyHeartRateManager;
@property (retain, nonatomic) HDHRNotificationManager *heartRateNotificationManager;
@property (retain, nonatomic) NSUserDefaults *heartNotificationsUserDefaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void).cxx_destruct;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0;
- (void)dealloc;
- (id)initWithProfile:(id)a0 heartNotificationsUserDefaults:(id)a1;

@end
