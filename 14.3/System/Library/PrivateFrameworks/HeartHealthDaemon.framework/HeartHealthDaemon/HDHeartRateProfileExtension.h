@class HDHRNotificationManager, NSString, HDProfile, HDHRCardioFitnessFeatureAvailabilityManager, HDHRCardioFitnessAnalyticsDailyEventActivity, HDHRDailyHeartRateManager, HDHRHealthLiteDataCollector;

@interface HDHeartRateProfileExtension : NSObject <HDProfileExtension, HDFeatureAvailabilityExtensionProvider> {
    HDHRCardioFitnessFeatureAvailabilityManager *_featureAvailabilityManager;
    HDHRCardioFitnessAnalyticsDailyEventActivity *_dailyAnalyticsActivity;
}

@property (readonly, weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDHRHealthLiteDataCollector *healthLiteDataCollector;
@property (retain, nonatomic) HDHRDailyHeartRateManager *dailyHeartRateManager;
@property (retain, nonatomic) HDHRNotificationManager *heartRateNotificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0 client:(id)a1;

@end
