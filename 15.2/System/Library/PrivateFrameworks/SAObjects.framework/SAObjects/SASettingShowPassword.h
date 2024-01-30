@class NSString, NSNumber;

@interface SASettingShowPassword : SASettingCommand

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *appOrWebsiteName;
@property (copy, nonatomic) NSNumber *shouldPromptForAuthentication;
@property (copy, nonatomic) NSString *spokenAppOrWebsiteName;

+ (id)showPassword;
+ (id)showPasswordWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
