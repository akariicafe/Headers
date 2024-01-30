@class NSNumber, NSString;

@interface HFAnalyticsAnnounceUserSettingEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSNumber *announceEnabledForUser;
@property (retain, nonatomic) NSNumber *settingChangedForCurrentUser;
@property (retain, nonatomic) NSNumber *settingChangedForAdminUser;
@property (retain, nonatomic) NSNumber *settingChangedByOwner;
@property (retain, nonatomic) NSNumber *settingChangedByAdmin;
@property (retain, nonatomic) NSNumber *settingChangedDuringOnboarding;
@property (retain, nonatomic) NSNumber *settingChangedFromUserSettings;
@property (retain, nonatomic) NSNumber *settingChangedFromHomePodSettings;
@property (retain, nonatomic) NSNumber *announceSettingChangeFailed;
@property (retain, nonatomic) NSString *processName;

- (id)payload;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
