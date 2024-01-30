@class NSString, NSMutableDictionary;

@interface DABabysitter : NSObject

@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSMutableDictionary *l_refreshingWaiters;
@property (retain, nonatomic) NSMutableDictionary *l_failedWaiters;
@property (retain, nonatomic) NSMutableDictionary *l_restrictedWaiters;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)sharedBabysitter;

- (id)_init;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)giveAccountWithIDAnotherChance:(id)a0;
- (void)_incrementRefreshCountForWaiterID:(id)a0 operationName:(id)a1;
- (void)_reloadBabysitterProperties;
- (BOOL)accountShouldContinue:(id)a0;
- (BOOL)accountWithIDShouldContinue:(id)a0;
- (BOOL)registerAccount:(id)a0 forOperationWithName:(id)a1;
- (void)unregisterAccount:(id)a0 forOperationWithName:(id)a1;
- (void)_diagnosticReportWithWaiterID:(id)a0 failureCount:(int)a1;
- (void)_l_decrementRefreshCountForWaiter:(id)a0 forOperationWithName:(id)a1;
- (void)_l_decrementRefreshCountForWaiterID:(id)a0 operationName:(id)a1;
- (void)_l_giveAccountWithIDAnotherChance:(id)a0;
- (void)_l_incrementRefreshCountForWaiterID:(id)a0 operationName:(id)a1;
- (void)_l_reloadBabysitterWaitersWithRefreshingWaitersPrefs:(id)a0 failedWaitersPrefs:(id)a1 restrictedWaitersPrefs:(id)a2;
- (id)_populatedStringDictionaryWithWaitersDictionary:(id)a0;
- (void)statusReportWithCompletionBlock:(id /* block */)a0;
- (id)tokenByRegisteringAccount:(id)a0 forOperationWithName:(id)a1;

@end
