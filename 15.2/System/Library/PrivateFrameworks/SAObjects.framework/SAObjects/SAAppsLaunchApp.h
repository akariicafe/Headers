@class NSString;

@interface SAAppsLaunchApp : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *applicationClientIdentifier;
@property (copy, nonatomic) NSString *executionEnvironment;
@property (copy, nonatomic) NSString *launchId;

+ (id)launchApp;
+ (id)launchAppWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
