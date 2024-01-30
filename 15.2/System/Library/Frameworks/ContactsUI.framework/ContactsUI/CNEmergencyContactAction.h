@class CNUINavigationListViewController, CNContactStore, UIAlertController, NSString, CNContactProperty, CNHealthStoreManager;
@protocol CNScheduler;

@interface CNEmergencyContactAction : CNPropertyAction <CNUINavigationListViewControllerDelegate, CNPickerControllerDelegate, HKMedicalIDViewControllerDelegate>

@property (retain, nonatomic) CNHealthStoreManager *healthStoreManager;
@property (retain, nonatomic) CNContactProperty *contactProperty;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) CNUINavigationListViewController *listController;
@property (retain, nonatomic) id<CNScheduler> mainThreadScheduler;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (nonatomic) BOOL addingToEmergency;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 healthStoreManager:(id)a1 propertyItems:(id)a2;
- (void)performActionWithContactProperty:(id)a0 relationship:(id)a1;
- (void)createMedicalIDWithEmergencyContact:(id)a0;
- (void)showHKMedicalIDViewControllerForMedicalID:(id)a0;
- (void)showConfirmRemoveAlertWithSender:(id)a0 completion:(id /* block */)a1;
- (void)showRelationshipPickerForContactProperty:(id)a0 sender:(id)a1;
- (void)picker:(id)a0 didPickItem:(id)a1;
- (void)pickerDidCancel:(id)a0;
- (void)performActionWithSender:(id)a0;
- (void)performActionForItem:(id)a0 sender:(id)a1;
- (void)presentDisambiguationAlertWithSender:(id)a0;
- (void).cxx_destruct;
- (void)navigationListController:(id)a0 didSelectItem:(id)a1;
- (void)medicalIDViewControllerDidCancel:(id)a0;
- (void)medicalIDViewControllerDidSave:(id)a0;
- (void)medicalIDViewControllerDidFinish:(id)a0;

@end
