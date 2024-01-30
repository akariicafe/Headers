@class NSArray;

@interface SBNotificationDefaults : SBAbstractSpringBoardDefaultDomain

@property (retain, nonatomic) NSArray *displayIDsWithBadgingEnabled;
@property (readonly, nonatomic) BOOL alwaysAllowDefaultAction;
@property (readonly, nonatomic) BOOL alwaysAllowLongLookGesture;
@property (readonly, nonatomic) BOOL dontSuppressForPrivacyWhenUnlocked;
@property (readonly, nonatomic) BOOL shouldTestBannerPlayTextTone;
@property (readonly, nonatomic) BOOL alwaysSpeakNotifications;
@property (readonly, nonatomic) NSArray *legacyAlarmList;

+ (id)standardDefaults;

- (void)_bindAndRegisterDefaults;

@end
