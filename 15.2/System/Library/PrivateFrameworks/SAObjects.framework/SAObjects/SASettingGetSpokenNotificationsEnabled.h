@class NSString;

@interface SASettingGetSpokenNotificationsEnabled : SASettingGetBool

@property (copy, nonatomic) NSString *appBundleId;

+ (id)getSpokenNotificationsEnabled;
+ (id)getSpokenNotificationsEnabledWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
