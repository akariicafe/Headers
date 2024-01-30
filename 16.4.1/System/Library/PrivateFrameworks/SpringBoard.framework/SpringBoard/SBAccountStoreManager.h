@class NSObject, ACAccount, ACAccountStore;
@protocol OS_dispatch_queue;

@interface SBAccountStoreManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) ACAccount *primaryAppleAccount;
@property (readonly, nonatomic) ACAccountStore *accountStore;

- (void)_accountStoreDidChange:(id)a0;
- (void)_updatePrimaryAppleAccount;
- (id)init;
- (void)_queue_updatePrimaryAppleAccount;
- (void).cxx_destruct;

@end
