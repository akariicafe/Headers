@class NSArray, HKHealthStore, NSNumberFormatter, ADASManager, NSNumber;

@interface SHSHeadphoneHearingProtectionController : PSListController

@property (retain, nonatomic) ADASManager *audioSettingsManager;
@property (nonatomic, getter=isDeviceiPad) BOOL DeviceiPad;
@property (nonatomic, getter=isDeviceiPod) BOOL DeviceiPod;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSArray *weeklyNotificationData;
@property (nonatomic) int weeklyNotificationCount;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSNumber *levelLimitThreshold;

- (void)dismiss;
- (void)dealloc;
- (id)endDate;
- (id)specifiers;
- (id)init;
- (id)startDate;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)deviceTypeString;
- (void)openAboutHeadphoneNotifications;
- (id)getHeadphoneLevelLimitEnabled;
- (id)getHeadphoneLevelLimitSetting;
- (id)getHeadphoneNotificationsEnabled;
- (id)headphoneLevelLimitDescriptionSpecifier;
- (id)headphoneLevelLimitGroupSpecifier;
- (BOOL)headphoneLevelLimitLockedByRestrictions;
- (id)headphoneLevelLimitSliderSpecifier;
- (id)headphoneLevelLimitSwitchSpecifier;
- (id)headphoneLightningAdaptersSpecifier;
- (id)headphoneNotificationsGroupSpecifier;
- (id)headphoneNotificationsSwitchSpecifier;
- (id)headphoneWeeklyNotificationDescriptionSpecifier;
- (void)openHealthArticleSafeListening;
- (void)openHealthPrivacySettings;
- (void)queryNotificationCountsFromDate:(id)a0 toDate:(id)a1;
- (void)setHeadphoneLevelLimitEnabled:(id)a0 forSpecifier:(id)a1;
- (void)setHeadphoneLevelLimitValue:(id)a0 forSpecifier:(id)a1;
- (void)setHeadphoneNotificationsEnabled:(id)a0 forSpecifier:(id)a1;
- (id)updateHeadphoneLevelLimitDescriptionText;
- (id)updateHeadphoneLevelLimitText;
- (void)updateWeeklyNotificationCounts:(id)a0 perMonth:(id)a1;
- (id)weeklyNotificationCount:(id)a0;

@end
