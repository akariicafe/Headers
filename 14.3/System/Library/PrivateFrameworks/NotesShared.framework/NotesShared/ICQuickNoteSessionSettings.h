@interface ICQuickNoteSessionSettings : NSObject

@property (class, nonatomic) long long showOnLockScreen;
@property (class, nonatomic) long long sessionDuration;

+ (void)initialize;
+ (BOOL)hasAccountSupportingLockScreen;
+ (long long)showOnLockScreenSettingValue;
+ (void)disableNotesOnLockScreenIfNecessary;
+ (void)updateNotesOnLockScreenWhenAccountSupportingLockScreenAdded;

@end
