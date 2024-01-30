@class NSString, _SWCServiceDetails, reason;

@interface _LSSharedWebCredentialsAppLink : LSAppLink

@property (retain, nonatomic) _SWCServiceDetails *serviceDetails;
@property (readonly) struct LSBinding { unsigned int bundle; struct LSBundleData *bundleData; unsigned int claim; struct *claimData; reason *userInfo; NSString *x0; } binding;

+ (void)initialize;
+ (BOOL)_areAppLinksEnabledForServiceDetails:(id)a0 cachedSettings:(id *)a1;
+ (BOOL)_setSWCSetting:(id)a0 forKey:(id)a1 withApplicationIdentifier:(id)a2 error:(id *)a3;
+ (id)_SWCSpecifierForSettingsWithApplicationIdentifier:(id)a0;
+ (id)_SWCSettingsWithApplicationIdentifier:(id)a0 error:(id *)a1;
+ (BOOL)setSettingsSwitchState:(long long)a0 forApplicationIdentifier:(id)a1 error:(id *)a2;
+ (long long)settingsSwitchStateForApplicationIdentifier:(id)a0;
+ (BOOL)removeAllSettingsReturningError:(id *)a0;
+ (BOOL)supportsSecureCoding;

- (id)_SWCSpecifierForSettings;
- (id)browserSettings;
- (BOOL)_setSWCSetting:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)_SWCSettingsReturningError:(id *)a0;
- (BOOL)setBrowserSettings:(id)a0 error:(id *)a1;
- (BOOL)setEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)removeSettingsReturningError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)isEnabled;
- (void)encodeWithCoder:(id)a0;

@end
