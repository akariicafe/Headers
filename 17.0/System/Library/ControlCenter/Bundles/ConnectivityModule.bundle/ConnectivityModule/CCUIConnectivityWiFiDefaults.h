@interface CCUIConnectivityWiFiDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL didPresentDisconnectBehaviorAlert;

+ (id)standardDefaults;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
