@class CNManagedConfiguration, NSString, CNContactsProviderManager, CNiOSAddressBookDataMapper;

@interface CNContactsProviderDataMapper : NSObject <CNiOSAddressBookDataMapper> {
    CNiOSAddressBookDataMapper *_dataMapper;
    CNContactsProviderManager *_contactsProviderManager;
    CNManagedConfiguration *_managedConfiguration;
}

@property (readonly) BOOL shouldLogContactsAccess;
@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
@property (readonly, nonatomic) BOOL shouldLogPrivacyAccountingAccessEvents;
@property (readonly, nonatomic) BOOL shouldCaptureMetricsForQueries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contactObservableForFetchRequest:(id)a0;
- (BOOL)executeSaveRequest:(id)a0 error:(id *)a1;
- (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;
- (id)contactCountForFetchRequest:(id)a0 error:(id *)a1;
- (id)containersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)groupsMatchingPredicate:(id)a0 error:(id *)a1;
- (BOOL)executeSaveRequest:(id)a0 response:(id *)a1 authorizationContext:(id)a2 error:(id *)a3;
- (id)serverSearchContainersMatchingPredicate:(id)a0 error:(id *)a1;
- (id)meContactIdentifiers:(id *)a0;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (id)accountsMatchingPredicate:(id)a0 error:(id *)a1;
- (id)policyForContainerWithIdentifier:(id)a0 error:(id *)a1;
- (id)policyWithDescription:(id)a0 error:(id *)a1;
- (id)defaultContainerIdentifier;
- (id)subgroupsOfGroupWithIdentifier:(id)a0 error:(id *)a1;
- (BOOL)fetchEncodedContactsForFetchRequest:(id)a0 error:(id *)a1 cancelationToken:(id)a2 batchHandler:(id /* block */)a3;
- (id)initWithConfiguration:(id)a0 addressBook:(id)a1;
- (BOOL)fetchContactsForFetchRequest:(id)a0 error:(id *)a1 batchHandler:(id /* block */)a2;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)encodedContactsCursorForFetchRequest:(id)a0 cursorCleanupBlock:(id /* block */)a1 error:(id *)a2;
- (id)authorizedKeysForContactKeys:(id)a0 error:(id *)a1;

@end
