@interface CCUIConnectivityBluetoothDefaults : BSAbstractDefaultDomain

@property (nonatomic) BOOL didPresentDisconnectBehaviorAlert;

+ (id)standardDefaults;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
