@class HDMCAnalysisManager, NSString, HDProfile, HDFeatureAvailabilityManager, HDMCAnalyticsManager, HDMCNotificationManager, HKMCSettingsManager;

@interface HDMCProfileExtension : NSObject <HDProfileExtension, HDFeatureAvailabilityExtensionProvider> {
    HDMCAnalyticsManager *_analyticsManager;
    HDFeatureAvailabilityManager *_featureAvailabilityManager;
}

@property (readonly, nonatomic) HKMCSettingsManager *settingsManager;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDMCAnalysisManager *analysisManager;
@property (readonly, nonatomic) HDMCNotificationManager *notificationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)a0 client:(id)a1;

@end
