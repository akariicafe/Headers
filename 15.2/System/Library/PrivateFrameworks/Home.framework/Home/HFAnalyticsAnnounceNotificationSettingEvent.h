@class NSNumber, NSString;

@interface HFAnalyticsAnnounceNotificationSettingEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *announceNotificationSettingOption;
@property (retain, nonatomic) NSNumber *settingChangedByOwner;
@property (retain, nonatomic) NSNumber *settingChangedByAdmin;
@property (retain, nonatomic) NSNumber *settingChangedDuringOnboarding;
@property (retain, nonatomic) NSNumber *settingChangedFromUserSettings;
@property (retain, nonatomic) NSNumber *settingChangedFromHomePodSettings;
@property (retain, nonatomic) NSNumber *announceSettingChangeFailed;
@property (copy, nonatomic) NSString *processName;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
