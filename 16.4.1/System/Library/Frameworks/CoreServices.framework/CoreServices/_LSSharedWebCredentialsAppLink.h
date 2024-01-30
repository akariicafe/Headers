@class NSString, _SWCServiceDetails, reason;

@interface _LSSharedWebCredentialsAppLink : LSAppLink

@property (retain, nonatomic) _SWCServiceDetails *serviceDetails;
@property (readonly) struct LSBinding { unsigned int bundle; struct LSBundleData *bundleData; unsigned int claim; struct *claimData; reason *userInfo; NSString *x0; } binding;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)_SWCSettingsWithApplicationIdentifier:(id)a0 error:(id *)a1;
+ (id)_SWCSpecifierForSettingsWithApplicationIdentifier:(id)a0;
+ (BOOL)_areAppLinksEnabledForServiceDetails:(id)a0 cachedSettings:(id *)a1;
+ (BOOL)_setSWCSetting:(id)a0 forKey:(id)a1 withApplicationIdentifier:(id)a2 error:(id *)a3;
+ (void)afterAppLinksBecomeAvailableForURL:(id)a0 limit:(unsigned long long)a1 performBlock:(id /* block */)a2;
+ (BOOL)removeAllSettingsReturningError:(id *)a0;
+ (BOOL)setSettingsSwitchState:(long long)a0 forApplicationIdentifier:(id)a1 error:(id *)a2;
+ (long long)settingsSwitchStateForApplicationIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (BOOL)isAlwaysEnabled;
- (id)browserSettings;
- (id)_SWCSettingsReturningError:(id *)a0;
- (id)_SWCSpecifierForSettings;
- (BOOL)_setSWCSetting:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)removeSettingsReturningError:(id *)a0;
- (BOOL)setBrowserSettings:(id)a0 error:(id *)a1;
- (BOOL)setEnabled:(BOOL)a0 error:(id *)a1;

@end
