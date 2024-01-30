@interface SURemoteNotificationController : NSObject

@property (readonly, nonatomic) unsigned long long enabledNotificationTypes;

+ (id)sharedInstance;

- (id)init;
- (void)handleRegistrationFailureWithError:(id)a0;
- (void)handleRegistrationSuccessWithToken:(id)a0;
- (void)handleNotificationDictionary:(id)a0;

@end
