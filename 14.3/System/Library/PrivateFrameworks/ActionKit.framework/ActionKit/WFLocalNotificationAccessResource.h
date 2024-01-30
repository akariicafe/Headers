@interface WFLocalNotificationAccessResource : WFAccessResource

@property (nonatomic) unsigned long long globalLevelStatus;

+ (void)initialize;
+ (BOOL)isSystemResource;
+ (void)requestLocalNotificationsAuthorizationWithCompletionHandler:(id /* block */)a0;

- (id)icon;
- (id)name;
- (void)refreshAvailability;
- (id)protectedResourceDescription;
- (void)makeAvailableAtGlobalLevelWithUserInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)a0;

@end
