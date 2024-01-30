@class ACAccountStore, ACAccount, NSObject;
@protocol OS_dispatch_queue;

@interface NMSAccountInfo : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ACAccountStore *_accountStore;
    ACAccount *_activeAccount;
}

@property (class, readonly) NMSAccountInfo *activeStoreAccountInfo;

@property (readonly, nonatomic) ACAccount *activeAccount;

- (void)_updateActiveAccount;
- (void)dealloc;
- (void)_handleAccountStoreDidChangeNotification:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)preloadActiveAccount;

@end
