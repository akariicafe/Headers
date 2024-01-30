@class RMUIConfigurationInterface;

@interface RMConfigurationsSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) RMUIConfigurationInterface *rmuiConfigInterface;

- (id)initWithAccount:(id)a0;
- (id)_accountSpecifiers;
- (id)_passcodeSpecifier;
- (id)_isActivatedProfileText:(id)a0;
- (id)_profileSpecifiers;
- (id)specifiers;
- (id)specifiersReloadedNotificationName;
- (id)initWithMDMProfileIdentifier:(id)a0;
- (void).cxx_destruct;

@end
