@class _TtC14FamilyCircleUI24FamilyChecklistAnalytics;

@interface FamilyCircleUI.FamilyChecklistAnalytics : NSObject

@property (class, nonatomic, readonly) _TtC14FamilyCircleUI24FamilyChecklistAnalytics *shared;

- (id)init;
- (void).cxx_destruct;
- (void)sendChildSettingsAnalyticsEvent;
- (void)sendChecklistChildSettingsToggleAnalyticsEvent;
- (void)sendChecklistCommLimitsToggleAnalyticsEvent;
- (void)sendChecklistIcloudPlusToggleAnalyticsEvent;
- (void)sendChecklistLocationSharingToggleAnalyticsEvent;
- (void)sendChildSettingsOnOffToggleEvent;
- (void)sendCommLimitsAnalyticsEvent;
- (void)sendCommLimitsOnOffToggleEvent;
- (void)sendEmergencyContactsAnalyticsEvent;
- (void)sendEmergencyContactsOnOffToggleEvent;
- (void)sendEmergencyContactsToggleAnalyticsEvent;
- (void)sendIcloudPlusSharingAnalyticsEvent;
- (void)sendLocationSharingAnalyticsEvent;
- (void)sendLocationSharingOnOffToggleEvent;
- (void)sendRecoveryContactsAnalyticsEvent;
- (void)sendRecoveryContactsOnOffToggleEvent;
- (void)sendRecoveryContactsToggleAnalyticsEvent;
- (void)sendTotalChecklistViewsAnalyticsEvent;
- (void)sendicloudPlusOnOffToggleEvent;

@end
