@class NSString, ACAccount, ACAccountStore;

@interface CNChildDelegateAccountsStore : NSObject <CNDelegateAccountSource, CNDelegateAccountSink>

@property (readonly, nonatomic) ACAccount *parentAccount;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (void)configureChildAccount:(id)a0 withSettingsFromDelegateInfo:(id)a1 parent:(id)a2;

- (id)removeAccount:(id)a0;
- (id)primaryAccount;
- (id)addChildWithDelegateInfo:(id)a0;
- (id)updateAccount:(id)a0;
- (void).cxx_destruct;
- (id)delegateAccounts;
- (id)initWithParentAccount:(id)a0 accountStore:(id)a1;
- (BOOL)updateAccounts:(id)a0 error:(id *)a1;

@end
