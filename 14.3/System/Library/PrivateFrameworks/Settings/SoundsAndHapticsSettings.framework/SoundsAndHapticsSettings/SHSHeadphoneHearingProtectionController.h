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

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)startDate;
- (void)loadView;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (id)endDate;
- (void)dismiss;
- (void)openHealthArticleSafeListening;
- (id)getHeadphoneLevelLimitSetting;
- (void)queryNotificationCountsFromDate:(id)a0 toDate:(id)a1;
- (id)headphoneNotificationsGroupSpecifier;
- (id)headphoneNotificationsSwitchSpecifier;
- (id)headphoneWeeklyNotificationDescriptionSpecifier;
- (id)headphoneLevelLimitGroupSpecifier;
- (id)headphoneLevelLimitSwitchSpecifier;
- (id)headphoneLevelLimitDescriptionSpecifier;
- (id)headphoneLevelLimitSliderSpecifier;
- (id)headphoneLightningAdaptersSpecifier;
- (id)deviceTypeString;
- (void)setHeadphoneNotificationsEnabled:(id)a0 forSpecifier:(id)a1;
- (id)getHeadphoneNotificationsEnabled;
- (id)weeklyNotificationCount:(id)a0;
- (void)setHeadphoneLevelLimitEnabled:(id)a0 forSpecifier:(id)a1;
- (id)getHeadphoneLevelLimitEnabled;
- (BOOL)headphoneLevelLimitLockedByRestrictions;
- (id)updateHeadphoneLevelLimitText;
- (id)updateHeadphoneLevelLimitDescriptionText;
- (void)setHeadphoneLevelLimitValue:(id)a0 forSpecifier:(id)a1;
- (void)updateWeeklyNotificationCounts:(id)a0 perMonth:(id)a1;
- (void)openHealthPrivacySettings;
- (void)openAboutHeadphoneNotifications;

@end
