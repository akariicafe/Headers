@class NSString, ACAccountStore, NSObject;
@protocol OS_os_log;

@interface ECAccountsObserver : NSObject <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)observedAccountTypes;

- (id)initWithAccountStore:(id)a0;
- (void)_accountStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_credentialsDidChange:(id)a0;
- (void)_mailAccountsChanged:(id)a0;
- (BOOL)_shouldNotifyOnAccountChangeForNotification:(id)a0;
- (void)handleAccountStoreChangeForAccountIdentifier:(id)a0;
- (void)handleCredentialChangeForAccountIdentifier:(id)a0;
- (void)handleMailAccountsHaveChanged:(id)a0 accountsNeedInitialization:(BOOL)a1;

@end
