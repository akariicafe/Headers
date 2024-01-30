@class RLMRealm;

@interface RLMRealmNotificationToken : RLMNotificationToken

@property (retain, nonatomic) RLMRealm *realm;
@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (void)suppressNextNotification;

@end
