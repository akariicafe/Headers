@interface VSACAccount : NSObject

@property (nonatomic) unsigned long long overridingPasswordOption;

+ (id)sharedInstance;

- (BOOL)hasAccount;
- (id)username;
- (id)account;
- (unsigned long long)convertedAMSAccountPasswordPromptSettingWithPaid:(BOOL)a0;
- (unsigned long long)freeAppPasswordPromptSetting;
- (id)initWithManualPasswordOption:(unsigned long long)a0;
- (unsigned long long)paidAppPasswordPromptSetting;

@end
