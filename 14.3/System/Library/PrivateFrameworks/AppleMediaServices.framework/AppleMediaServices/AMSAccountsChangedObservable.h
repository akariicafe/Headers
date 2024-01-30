@class NSString, NSPointerArray, ACAccount, NSObject, AMSObservable;
@protocol OS_dispatch_queue;

@interface AMSAccountsChangedObservable : NSObject

@property (class, readonly, nonatomic) NSPointerArray *createdObservables;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *createdObservablesAccessQueue;
@property (class, readonly, nonatomic) AMSAccountsChangedObservable *sharedInstance;
@property (class, readonly, nonatomic) AMSAccountsChangedObservable *sharedLocalAccountInstance;

@property (retain, nonatomic) AMSObservable *observable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationsQueue;
@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSString *accountTypeIdentifier;

+ (void)_processChangedAccount:(id)a0;

- (void)_accountStoreDidChange:(id)a0;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_initWithAccount:(id)a0 accountTypeIdentifier:(id)a1;
- (void)_processChangedAccount:(id)a0;
- (BOOL)_shouldNotifyObserversForChangedAccount:(id)a0;
- (id)initWithAccountTypeIdentifier:(id)a0;
- (id)initWithAccount:(id)a0;
- (void)unsubscribe:(id)a0;

@end
