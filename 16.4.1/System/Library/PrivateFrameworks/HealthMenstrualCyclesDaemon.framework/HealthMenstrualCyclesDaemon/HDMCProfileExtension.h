@class HDAnalyticsDailyEventManager, NSString, HDBackgroundFeatureDeliveryManager, HKCalendarCache, HDPrimaryProfile, HDMCAnalysisManager, HDMCAnalyticsManager, HDFeatureAvailabilityManager, HKMCSettingsManager, HDMCNotificationManager, HDMCAnalysisScheduler;

@interface HDMCProfileExtension : NSObject <HDProfileExtension, HDFeatureAvailabilityExtensionProvider, HDHealthDaemonReadyObserver, HDPostInstallUpdateTaskHandler> {
    HDMCAnalyticsManager *_analyticsManager;
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
    HDFeatureAvailabilityManager *_heartRateFeatureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_heartRateBackgroundFeatureDeliveryManager;
    HDFeatureAvailabilityManager *_wristTemperatureInputAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_wristTemperatureInputBackgroundFeatureDeliveryManager;
    HDAnalyticsDailyEventManager *_wristTemperatureDailyEventManager;
    HDFeatureAvailabilityManager *_deviationsFeatureAvailabilityManager;
    HDBackgroundFeatureDeliveryManager *_deviationsBackgroundFeatureDeliveryManager;
    HDMCAnalysisScheduler *_analysisScheduler;
    HKCalendarCache *_calendarCache;
}

@property (readonly, nonatomic) HKMCSettingsManager *settingsManager;
@property (readonly, weak, nonatomic) HDPrimaryProfile *profile;
@property (readonly, nonatomic) HDMCAnalysisManager *analysisManager;
@property (readonly, nonatomic) HDMCNotificationManager *notificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)performPostInstallUpdateTaskForManager:(id)a0 completion:(id /* block */)a1;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0;
- (void).cxx_destruct;

@end
