@interface Safety.EmergencySOSContactsSpecifierDataSource : NSObject <HKMedicalIDViewControllerDelegate> {
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ medicalIDCache;
    void /* unknown type, empty encoding */ contacts;
    void /* unknown type, empty encoding */ emergencyContactsSpecifiers;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ presentationContext;
}

- (void)medicalIDViewControllerDidCancel:(id)a0;
- (void)medicalIDViewControllerDidSave:(id)a0;
- (void)medicalIDViewControllerDidFinish:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didSelectEmergencyContacts;
- (void)openEmergencyContactsFooterLink;
- (id)getContactNumberForContactSpecifier:(id)a0;
- (void)medicalIDDidUpdate;

@end
