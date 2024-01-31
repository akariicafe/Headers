@class CNContactStore, NSString, FAFamilyMember, CNContactPickerViewController;
@protocol CNUIFamilyMemberContactsControllerDelegate, CNUICoreFamilyMemberContactsDataSource, CNSchedulerProvider, CNUIFamilyMemberContactsPresentation;

@interface CNUIFamilyMemberContactsController : NSObject <CNContactViewControllerDelegate, CNContactPickerPrivateDelegate, CNFamilyMemberAddContactsOptionsSheetDelegate, CNUIFamilyMemberDowntimeContactPickerControllerDelegate, CNUICoreFamilyMemberContactsObserver>

@property (readonly, nonatomic) CNContactStore *familyMemberScopedContactStore;
@property (readonly, nonatomic) id<CNUIFamilyMemberContactsPresentation> familyMemberContactsPresentation;
@property (readonly, nonatomic) id<CNUICoreFamilyMemberContactsDataSource> dataSource;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (weak, nonatomic) CNContactPickerViewController *contactPickerViewController;
@property (readonly, nonatomic) FAFamilyMember *familyMember;
@property (readonly, nonatomic) long long countOfFamilyMemberContacts;
@property (readonly, nonatomic) long long fetchStatus;
@property (weak, nonatomic) id<CNUIFamilyMemberContactsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isViewController:(id)a0 presentedByContactPicker:(id)a1;

- (id)init;
- (void)presentViewController:(id)a0;
- (void).cxx_destruct;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void)dismissPresentedViewController:(id)a0;
- (void)addContactsOptionsSheetViewControllerDidCancel:(id)a0;
- (void)addContactsOptionsSheetViewControllerDidSelectAddFromLocalContacts:(id)a0;
- (void)addContactsOptionsSheetViewControllerDidSelectAddNewContact:(id)a0;
- (id)anchorViewForAddContactsInteraction;
- (void)cancelPresentationOfViewController:(id)a0;
- (void)contactPickerDidCancel:(id)a0;
- (void)downtimePickerController:(id)a0 didFinishWithContacts:(id)a1;
- (void)familyMemberContactItemsDidChange;
- (id)initWithFamilyMember:(id)a0 familyMemberContactsPresentation:(id)a1;
- (void)performAddContactsInteraction;
- (void)performAddFromMainContactsInteraction;
- (void)performDefaultInteraction;
- (void)performDisplayContactsInteraction;
- (void)performInteraction:(long long)a0;
- (void)pickerDidSelectAddNewContact:(id)a0;

@end
