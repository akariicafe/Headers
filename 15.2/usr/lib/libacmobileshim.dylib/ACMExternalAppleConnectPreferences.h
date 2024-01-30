@class NSData;

@interface ACMExternalAppleConnectPreferences : ACMAppleConnectPreferences

@property (retain, nonatomic) NSData *secret;

- (id)createEnvironmentWithRealm:(id)a0;

@end
