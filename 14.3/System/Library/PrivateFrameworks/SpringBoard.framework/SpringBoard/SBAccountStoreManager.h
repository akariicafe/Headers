@class NSObject, ACAccount, ACAccountStore;
@protocol OS_dispatch_queue;

@interface SBAccountStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain) ACAccount *primaryAppleAccount;
@property (readonly, nonatomic) ACAccountStore *accountStore;

- (void)_accountStoreDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_queue_updatePrimaryAppleAccountAndNotify:(BOOL)a0;
- (void)_updatePrimaryAppleAccount;

@end
