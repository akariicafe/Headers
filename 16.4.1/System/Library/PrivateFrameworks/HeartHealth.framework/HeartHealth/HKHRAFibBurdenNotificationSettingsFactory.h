@class HKFeatureStatus;

@interface HKHRAFibBurdenNotificationSettingsFactory : NSObject

@property (retain, nonatomic) HKFeatureStatus *featureStatus;

- (void).cxx_destruct;
- (id)_deviceRegionGatedBridgeSettingFooter;
- (id)_deviceRegionGatedWatchSettingFooter;
- (id)_evaluationForIsOnboarded:(BOOL)a0;
- (id)_genericBridgeSettingFooter;
- (id)_genericWatchSettingFooter;
- (id)_irnEnabledBridgeSettingFooter;
- (id)_irnEnabledWatchSettingFooter;
- (BOOL)_isFeatureOnboardedAndAvailableWithIsOnboarded:(BOOL)a0 requirementsEvaluation:(id)a1;
- (BOOL)_isOnboarded;
- (id)_remoteDisabledBridgeSettingFooter;
- (id)_remoteDisabledWatchSettingFooter;
- (id)_seedExpiryBridgeSettingFooter;
- (id)_seedExpiryWatchSettingFooter;
- (id)_wristDetectDisabledBridgeSettingFooter;
- (id)bridgeSettings;
- (id)initWithFeatureStatus:(id)a0;
- (id)watchSettings;

@end
