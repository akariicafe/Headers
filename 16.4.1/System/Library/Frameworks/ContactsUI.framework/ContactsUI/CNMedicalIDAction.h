@class NSString, CNHealthStoreManager, CNContact;

@interface CNMedicalIDAction : CNPropertyAction <HKMedicalIDViewControllerDelegate>

@property (nonatomic) long long medicalIDActionType;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNHealthStoreManager *healthStoreManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)medicalIDViewControllerDidSave:(id)a0;
- (void)medicalIDViewControllerDidCancel:(id)a0;
- (void)medicalIDViewControllerDidDelete:(id)a0;
- (void)medicalIDViewControllerDidFinish:(id)a0;
- (void)performActionWithSender:(id)a0;

@end
