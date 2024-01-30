@interface HealthRecordsUI.UserDomainConceptChangeProvider : NSObject <HKUserDomainConceptStoreDelegate> {
    void /* unknown type, empty encoding */ udcStore;
    void /* unknown type, empty encoding */ _udcChanges;
}

- (void)userDomainConceptStore:(id)a0 didDeleteUserDomainConcepts:(id)a1;
- (void)userDomainConceptStore:(id)a0 didUpdateUserDomainConcepts:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)userDomainConceptStore:(id)a0 didAddUserDomainConcepts:(id)a1;

@end
