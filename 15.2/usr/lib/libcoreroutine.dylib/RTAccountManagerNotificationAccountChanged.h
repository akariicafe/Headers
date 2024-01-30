@class RTAccount;

@interface RTAccountManagerNotificationAccountChanged : RTNotification

@property (readonly, nonatomic) RTAccount *latestAccount;
@property (readonly, nonatomic) RTAccount *oldAccount;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLatestAccount:(id)a0 oldAccount:(id)a1;

@end
