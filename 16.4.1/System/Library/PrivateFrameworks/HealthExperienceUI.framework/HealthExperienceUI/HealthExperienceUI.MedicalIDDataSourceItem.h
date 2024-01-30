@interface HealthExperienceUI.MedicalIDDataSourceItem : NSObject <HKMedicalIDViewControllerDelegate> {
    void /* unknown type, empty encoding */ uniqueIdentifier;
    void /* unknown type, empty encoding */ text;
    void /* unknown type, empty encoding */ detailText;
    void /* unknown type, empty encoding */ showDisclosureIndicator;
    void /* unknown type, empty encoding */ reuseIdentifier;
    void /* unknown type, empty encoding */ medicalIDViewController;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ medicalIDCache;
    void /* unknown type, empty encoding */ presentingViewController;
    void /* unknown type, empty encoding */ currentMedicalIDDataResultCancellable;
    void /* unknown type, empty encoding */ currentMedicalIDDataResultPresented;
}

- (void)medicalIDViewControllerDidSave:(id)a0;
- (void)medicalIDViewControllerDidCancel:(id)a0;
- (void)medicalIDViewControllerDidDelete:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)medicalIDUpdatedWithNotification:(id)a0;

@end
