@interface WFLocalNotificationAccessResource : WFAccessResource

@property (nonatomic) unsigned long long status;

+ (void)initialize;
+ (BOOL)isSystemResource;
+ (void)requestLocalNotificationsAuthorizationWithCompletionHandler:(id /* block */)a0;

- (id)icon;
- (id)name;
- (void)refreshAvailability;
- (id)protectedResourceDescription;
- (void)makeAvailableWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)errorRecoveryOptionsForStatus:(unsigned long long)a0;

@end
