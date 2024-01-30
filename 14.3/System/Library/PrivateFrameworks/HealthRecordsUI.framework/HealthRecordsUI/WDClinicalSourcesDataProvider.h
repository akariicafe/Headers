@class HKHealthRecordsStore, HKHealthStore;

@interface WDClinicalSourcesDataProvider : NSObject

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore;

+ (id /* block */)_objectCompletionOnMainQueue:(id /* block */)a0 cancellationToken:(id)a1;
+ (id /* block */)_logoCompletionOnMainQueue:(id /* block */)a0 cancellationToken:(id)a1;

- (id)fetchAccountForSource:(id)a0;
- (id)fetchAccountOwnerForSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)fetchAccountForSource:(id)a0 completion:(id /* block */)a1;
- (void)beginInitialLoginSessionForGateway:(id)a0 completion:(id /* block */)a1;
- (void)beginReloginSessionForAccount:(id)a0 completion:(id /* block */)a1;
- (id)_orderAccountsForDisplay:(id)a0;
- (id)accountsForDisplay;
- (id)_accountsForGateways:(id)a0;
- (void)_fetchAccountsForDisplayWithCompletion:(id /* block */)a0;
- (id)_fetchLogoForBrand:(id)a0 fallback:(id)a1 size:(double)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)_logoForFallback:(id)a0 size:(double)a1;
- (void)fetchAccountOwnerForSource:(id)a0 completion:(id /* block */)a1;
- (id)nameAndFormattedBirthDateForAccountOwner:(id)a0 useMultipleLines:(BOOL)a1;
- (id)_createLoginSafariViewControllerForURL:(id)a0 error:(id *)a1;
- (id)sourcesRequestingAuthorizationForClinicalTypes;
- (id)initWithHealthRecordsStore:(id)a0;
- (BOOL)anyRegisteredAccounts;
- (id)fetchAccessedAccountsForDisplayWithCompletion:(id /* block */)a0;
- (id)accountsForDisplayForGateways:(id)a0;
- (void)fetchLogoForAccount:(id)a0 completion:(id /* block */)a1;
- (void)fetchCachedLogoForAccount:(id)a0 completion:(id /* block */)a1;
- (id)fetchLogoForBrand:(id)a0 fallback:(id)a1 size:(double)a2 completion:(id /* block */)a3;
- (id)gatewaysWithExistingAccountsFromGateways:(id)a0;
- (id)appSourceRequestingAuthorizationForClinicalTypeWithBundleIdentifier:(id)a0;
- (id)fetchAccountsForDisplayWithCompletion:(id /* block */)a0;
- (id)nameAndFormattedBirthDateForAccountOwner:(id)a0;

@end
