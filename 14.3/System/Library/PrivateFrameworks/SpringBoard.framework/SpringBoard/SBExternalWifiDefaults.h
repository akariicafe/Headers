@interface SBExternalWifiDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL wifiEnabled;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
