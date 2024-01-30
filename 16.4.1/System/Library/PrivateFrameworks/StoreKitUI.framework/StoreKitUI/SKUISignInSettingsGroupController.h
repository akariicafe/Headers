@class NSString, NSMapTable;

@interface SKUISignInSettingsGroupController : SKUISettingsGroupController {
    NSString *_accountName;
    BOOL _authenticating;
    NSMapTable *_keyMapping;
    NSString *_password;
    BOOL _valid;
}

- (void).cxx_destruct;
- (void)_resignFirstResponder;
- (BOOL)isAuthenticating;
- (void)setValue:(id)a0 forSettingDescription:(id)a1;
- (void)_signInSuccess:(id)a0;
- (void)_attemptSignInWithAccountName:(id)a0 password:(id)a1;
- (void)_becomeFirstResponderWithKey:(id)a0;
- (id)_keyForSettingDescription:(id)a0;
- (id)_settingDescriptionForKey:(id)a0;
- (void)_signInFailed:(id)a0 error:(id)a1;
- (id)_submitSettingDescription;
- (void)_updateFieldsAuthenticating:(BOOL)a0;
- (void)_updateValidation;
- (void)returnInSettingDescription:(id)a0;
- (void)submitSettingDescription:(id)a0;
- (id)valueForSettingDescription:(id)a0;

@end
