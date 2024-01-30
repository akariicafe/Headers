@class CNContactStore, CNContactFormatter, NSArray, CNContactViewController, FAFamilyMember, NSString;
@protocol CNUICoreContactManagementConsentCheck, CNUICoreFamilyMemberWhitelistedContactsDataSource, CNUIFamilyMemberWhitelistedContactsControllerDelegate, CNDowntimeWhitelistContainerFetching, CNSchedulerProvider, CNUIFamilyMemberContactsPresentation;

@interface CNUIFamilyMemberWhitelistedContactsController : NSObject <CNContactViewControllerPrivateDelegate, CNContactPickerDelegate, CNFamilyMemberAddContactsToWhitelistOptionSheetDelegate, CNUIFamilyMemberDowntimeContactPickerControllerDelegate, CNUICoreFamilyMemberContactsObserver>

@property (readonly, nonatomic) CNContactStore *familyMemberScopedContactStore;
@property (readonly, nonatomic) CNContactFormatter *contactCardWarningFormatter;
@property (readonly, nonatomic) id<CNUIFamilyMemberContactsPresentation> familyMemberContactsPresentation;
@property (readonly, nonatomic) id<CNUICoreFamilyMemberWhitelistedContactsDataSource> dataSource;
@property (readonly, nonatomic) id<CNUICoreContactManagementConsentCheck> contactManagentConsentCheck;
@property (readonly, nonatomic) id<CNDowntimeWhitelistContainerFetching> downtimeContaienerFetcher;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (weak, nonatomic) CNContactViewController *contactViewControllerPresentingItemDetails;
@property (readonly, nonatomic) FAFamilyMember *familyMember;
@property (readonly, nonatomic) NSArray *familyMemberContactItems;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) long long fetchStatus;
@property (weak, nonatomic) id<CNUIFamilyMemberWhitelistedContactsControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contactPickerWithDelegate:(id)a0 familyMember:(id)a1 parentContainer:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)warningMessageForContact:(id)a0;
- (void)contactPicker:(id)a0 didSelectContacts:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (BOOL)contactManagementEnabled;
- (void)familyMemberContactItemsDidChange;
- (void)downtimePickerController:(id)a0 didFinishWithContacts:(id)a1;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddFromMainContacts:(id)a0;
- (void)performInteraction:(long long)a0;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddFromFamilyMemberContacts:(id)a0;
- (void)addContactsToWhitelistOptionsSheetDidSelectAddNewContact:(id)a0;
- (void)addContactsToWhitelistOptionsSheetDidCancel:(id)a0;
- (void)deleteFamilyMemberContactItem:(id)a0;
- (void)performAddNewContact;
- (void)performDefaultInteraction;
- (void)contactViewControllerDidExecuteDeleteFromDowntimeWhitelistAction:(id)a0;
- (id)initWithFamilyMember:(id)a0 familyMemberContactsPresentation:(id)a1;
- (void)performAddFromMainContacts;
- (void)presentDetailsOfFamilyMemberContactItem:(id)a0;
- (id)generateContactSourceOptionSheet;
- (void)cancelPresentationOfDetailsOfFamilyMemberContactItem:(id)a0;
- (void)addContactsToWhitelist:(id)a0;
- (id)anchorViewForDefaultInteraction;
- (void)performAddFromMainContactsForFamilyMember;
- (void)performAddFromMainContactsForThisDevice;
- (void)performAddFromFamilyMemberContacts;
- (void)contactViewController:(id)a0 didDeleteContact:(id)a1;

@end
