@class HKHRCardioFitnessNotificationStatus;

@interface HKHRCardioFitnessNotificationSettingsFactory : NSObject

@property (retain, nonatomic) HKHRCardioFitnessNotificationStatus *notificationStatus;

- (void).cxx_destruct;
- (id)_notificationsAvailableBridgeSettingFooter;
- (BOOL)_hasUnavailabilitySetForReasons:(long long)a0;
- (id)_genericBridgeSettingFooter;
- (id)_ageGatedBridgeSettingFooter;
- (id)_ageNotSetBridgeSettingFooter;
- (id)_genericWatchSettingFooter;
- (id)_ageGatedWatchSettingFooter;
- (id)_ageNotSetWatchSettingFooter;
- (id)initWithNotificationStatus:(id)a0;
- (id)bridgeSettings;
- (id)watchSettings;

@end
