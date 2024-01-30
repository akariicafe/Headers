@class NSArray, ACAccountStore, CNResult;
@protocol CNDelegateAccountSink, CNDelegateAccountSource;

@interface CNFamilyCircleConfigurationUpdateTask : CNTask

@property (readonly, nonatomic) id<CNDelegateAccountSource> accountSource;
@property (readonly, nonatomic) id<CNDelegateAccountSink> accountSink;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, nonatomic) NSArray *delegateAccounts;
@property (retain, nonatomic) CNResult *result;

+ (id)os_log;

- (id)initWithName:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)run:(id *)a0;
- (id)initWithAccountSource:(id)a0 accountSink:(id)a1 accountStore:(id)a2;
- (void)loadDefaultSinkIfNecessary;
- (void)loadDefaultSourceIfNecessary;
- (void)loadDelegateAccountsFromSource;
- (void)updateDelegateAccounts;

@end
