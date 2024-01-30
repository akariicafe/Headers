@class NSSet, NSString;
@protocol REMChangeTrackingClientIdentifying, REMDaemonController;

@interface REMChangeTracking : NSObject

@property (readonly, nonatomic) NSSet *transactionAuthorKeysToExclude;
@property (readonly, nonatomic) id<REMChangeTrackingClientIdentifying> changeTrackingClientID;
@property (readonly, nonatomic) id<REMDaemonController> daemonController;
@property (retain, nonatomic) NSString *entityName;
@property (nonatomic) unsigned long long transactionFetchLimit;

+ (id)internalTransactionAuthorKeysToExclude;
+ (id)defaultTransactionAuthorKeysToExclude;
+ (id)entityNamesToIncludeFromTrackingWithOptionProvider:(Class)a0;

- (void).cxx_destruct;
- (id)initWithClientID:(id)a0 daemonController:(id)a1 transactionAuthorKeysToExclude:(id)a2;
- (id)initWithClientID:(id)a0 daemonController:(id)a1;
- (void)_performChangeTrackingWithReason:(id)a0 block:(id /* block */)a1 xpcErrorHandler:(id /* block */)a2;
- (id)currentChangeTokenForAllAccountsWithError:(id *)a0;
- (id)currentChangeTokenForAccountTypes:(long long)a0 error:(id *)a1;
- (id)currentChangeTokenWithError:(id *)a0;
- (id)earliestChangeTokenWithError:(id *)a0;
- (id)getTrackingStateWithError:(id *)a0;
- (void)saveTrackingState:(id)a0 error:(id *)a1;
- (id)fetchHistoryAfterToken:(id)a0 error:(id *)a1;
- (id)fetchHistoryAfterDate:(id)a0 error:(id *)a1;
- (void)deleteHistoryBeforeToken:(id)a0 error:(id *)a1;
- (void)deleteHistoryBeforeDate:(id)a0 error:(id *)a1;
- (id)persistenceStoreIDForAccountID:(id)a0 error:(id *)a1;
- (id)fetchAuxiliaryChangeInfosOfType:(Class)a0 withChangeObject:(id)a1 error:(id *)a2;

@end
