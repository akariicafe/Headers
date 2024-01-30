@class AAInheritanceContactsViewModel, AAContactsManager, AACustodianController;

@interface AAContactsProvider : NSObject {
    AACustodianController *_custodianController;
    AAContactsManager *_contactsManager;
    AAInheritanceContactsViewModel *_inheritanceViewModelProvider;
}

- (id)init;
- (void).cxx_destruct;
- (id)_localContactForHandle:(id)a0;
- (id)_localContactsForCustodians:(id)a0;
- (id)_localContactsForCustodianshipOwners:(id)a0;
- (void)fetchCustodiansAndBeneficiaries:(id /* block */)a0;
- (void)fetchCustodianshipsAndBenefactors:(id /* block */)a0;
- (void)fetchMyBenefactors:(id /* block */)a0;
- (void)fetchMyBeneficiaries:(id /* block */)a0;
- (void)fetchMyCustodians:(id /* block */)a0;
- (void)fetchMyCustodianshipOwners:(id /* block */)a0;
- (void)fetchMyHealthyCustodians:(id /* block */)a0;
- (void)fetchMyWalrusEligibleCustodians:(id /* block */)a0;
- (void)fetchSuggestedBeneficiaries:(id /* block */)a0;
- (void)fetchSuggestedCustodians:(id /* block */)a0;

@end
