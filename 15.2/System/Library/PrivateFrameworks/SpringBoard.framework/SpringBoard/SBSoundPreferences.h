@interface SBSoundPreferences : NSObject

+ (id)calendarAlarmPath;
+ (BOOL)vibrateWhenRinging;
+ (BOOL)vibrateWhenSilent;
+ (id)_soundDefaults;
+ (id)ringtoneIdentifier;
+ (id)ringtonePath;

@end
