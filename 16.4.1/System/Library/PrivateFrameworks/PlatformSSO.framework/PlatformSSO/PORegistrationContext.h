@class NSString, POExtension;

@interface PORegistrationContext : NSObject

@property (getter=isRepair) BOOL repair;
@property BOOL userNotified;
@property BOOL resetKeys;
@property (getter=isRetry) BOOL retry;
@property int failureCount;
@property long long state;
@property int authMethod;
@property unsigned long long options;
@property (retain) NSString *extensionIdentifier;
@property (retain) NSString *containerAppBundleIdentifier;
@property (retain) NSString *registrationToken;
@property (retain) NSString *loginUserName;
@property (retain) NSString *userName;
@property (retain) POExtension *ssoExtension;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isUserNotification;

@end
