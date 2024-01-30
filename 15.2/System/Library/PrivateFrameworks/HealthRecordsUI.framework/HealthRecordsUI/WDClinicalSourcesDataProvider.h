@class HKHealthRecordsStore, HKHealthStore, HKClinicalAccountStore;

@interface WDClinicalSourcesDataProvider : NSObject

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (readonly, nonatomic) HKClinicalAccountStore *clinicalAccountStore;

+ (id /* block */)_objectCompletionOnMainQueue:(id /* block */)a0 cancellationToken:(id)a1;
+ (id /* block */)_logoCompletionOnMainQueue:(id /* block */)a0 cancellationToken:(id)a1;

- (void)beginReloginSessionForAccount:(id)a0 completion:(id /* block */)a1;
- (void)beginInitialLoginSessionForGateway:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)fetchAccountForSource:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (id)fetchAccountsForDisplayWithCompletion:(id /* block */)a0;
- (id)fetchAccountForSource:(id)a0;
- (id)fetchAccountOwnerForSource:(id)a0;
- (id)nameAndFormattedBirthDateForAccountOwner:(id)a0;
- (id)_orderAccountsForDisplay:(id)a0;
- (id)accountsForDisplay;
- (void)_fetchAccountsForDisplayWithCompletion:(id /* block */)a0;
- (id)_accountsForGateways:(id)a0;
- (id)_fetchLogoForBrand:(id)a0 fallback:(id)a1 size:(double)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (id)_logoForFallback:(id)a0 size:(double)a1;
- (void)fetchAccountOwnerForSource:(id)a0 completion:(id /* block */)a1;
- (id)nameAndFormattedBirthDateForAccountOwner:(id)a0 useMultipleLines:(BOOL)a1;
- (id)formattedFullName:(id)a0 birthDate:(id)a1 useMultipleLines:(BOOL)a2;
- (id)nameAndFormattedBirthDateForSignedClinicalDataSubject:(id)a0 useMultipleLines:(BOOL)a1;
- (id)_createLoginSafariViewControllerForURL:(id)a0 error:(id *)a1;
- (id)sourcesRequestingAuthorizationForClinicalTypes;
- (id)initWithHealthRecordsStore:(id)a0;
- (BOOL)anyRegisteredAccounts;
- (id)fetchAccessedAccountsForDisplayWithCompletion:(id /* block */)a0;
- (id)accountsForDisplayForGateways:(id)a0;
- (id)fetchLogoForBrand:(id)a0 fallback:(id)a1 size:(double)a2 completion:(id /* block */)a3;
- (id)nameAndFormattedBirthDateForSignedClinicalDataSubject:(id)a0;
- (id)gatewaysWithExistingAccountsFromGateways:(id)a0;
- (id)appSourceRequestingAuthorizationForClinicalTypeWithBundleIdentifier:(id)a0;

@end
