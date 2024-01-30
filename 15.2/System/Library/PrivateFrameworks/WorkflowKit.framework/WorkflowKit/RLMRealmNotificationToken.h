@class RLMRealm;

@interface RLMRealmNotificationToken : RLMNotificationToken

@property (retain, nonatomic) RLMRealm *realm;
@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)suppressNextNotification;

@end
