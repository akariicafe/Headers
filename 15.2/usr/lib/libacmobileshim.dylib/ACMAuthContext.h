@class NSString;

@interface ACMAuthContext : ACCAuthContext

@property (retain) NSString *userPreferences;

- (void)dealloc;
- (id)parametersDictionary;
- (BOOL)isDevicePwnd;

@end
