@interface BBBulletinBoardDefaults : BSAbstractDefaultDomain

@property (nonatomic) long long globalContentPreviewSetting;
@property (nonatomic) long long globalSpokenNotificationSetting;
@property (nonatomic, getter=isSpokenNotificationsSupported) BOOL spokenNotificationsSupported;

+ (id)standardDefaults;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
