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

- (void)addContactsOptionsSheetViewControllerDidSelectAddFromLocalContacts:(id)a0;
- (void)addContactsOptionsSheetViewControllerDidSelectAddNewContact:(id)a0;
- (void)addContactsOptionsSheetViewControllerDidCancel:(id)a0;
- (void)performDisplayContactsInteraction;
- (void)performAddFromMainContactsInteraction;
- (void)performAddContactsInteraction;
- (id)anchorViewForAddContactsInteraction;
- (void)dismissPresentedViewController:(id)a0;
- (void)cancelPresentationOfViewController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)pickerDidSelectAddNewContact:(id)a0;
- (void)contactPickerDidCancel:(id)a0;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void)familyMemberContactItemsDidChange;
- (void)downtimePickerController:(id)a0 didFinishWithContacts:(id)a1;
- (void)performInteraction:(long long)a0;
- (void)performDefaultInteraction;
- (id)initWithFamilyMember:(id)a0 familyMemberContactsPresentation:(id)a1;
- (void)presentViewController:(id)a0;

@end
