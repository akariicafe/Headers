@class NSString, NSMutableDictionary;

@interface DABabysitter : NSObject

@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSMutableDictionary *refreshingWaiters;
@property (retain, nonatomic) NSMutableDictionary *failedWaiters;
@property (retain, nonatomic) NSMutableDictionary *restrictedWaiters;

+ (id)sharedBabysitter;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (void)dealloc;
- (void)giveAccountWithIDAnotherChance:(id)a0;
- (BOOL)accountWithIDShouldContinue:(id)a0;
- (void)_reloadBabysitterProperties;
- (void)_decrementRefreshCountForWaiter:(id)a0 forOperationWithName:(id)a1;
- (BOOL)accountShouldContinue:(id)a0;
- (void)_incrementRefreshCountForWaiterID:(id)a0 operationName:(id)a1;
- (void)_decrementRefreshCountForWaiterID:(id)a0 operationName:(id)a1;
- (BOOL)registerAccount:(id)a0 forOperationWithName:(id)a1;
- (void)unregisterAccount:(id)a0 forOperationWithName:(id)a1;

@end
