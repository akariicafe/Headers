@class VMVoicemailManager;

@interface VMServiceClient : NSObject

@property (retain, nonatomic) VMVoicemailManager *voicemailManager;

+ (id)sharedClient;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (void)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (id)sharedAccount;
- (void)handleVoicemailsChangedNotification:(id)a0;
- (void)handleSubscriptionStatusChangedNotification:(id)a0;
- (void)handleOnlineStatusChangedNotification:(id)a0;
- (BOOL)sharedServiceIsSubscribed;

@end
