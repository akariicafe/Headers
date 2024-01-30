@class PSSpecifier, CNUIFamilyMemberContactsController, NSString, STCommunicationLimits;

@interface STCommunicationLimitsListController : STPINListViewController <CNUIFamilyMemberContactsPresentation>

@property (retain) PSSpecifier *duringScreenTimeSpecifier;
@property (retain) PSSpecifier *duringDowntimeSpecifier;
@property (retain) PSSpecifier *manageContactsGroupSpecifier;
@property (retain) PSSpecifier *manageContactsSpecifier;
@property (retain) PSSpecifier *iCloudContactsSpecifier;
@property (retain) PSSpecifier *allowContactEditingSpecifier;
@property (retain) STCommunicationLimits *communicationLimits;
@property (retain) CNUIFamilyMemberContactsController *familyMemberContactsController;
@property BOOL syncingiCloudContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissPresentedViewController:(id)a0;
- (void)setCoordinator:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)specifiers;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)familyMemberContactsDidChange;
- (void)presentViewController:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;
- (void)_communicationLimitsDidChangeFrom:(id)a0 to:(id)a1;
- (id)initWithRootViewModelCoordinator:(id)a0;
- (void)_indicateiCloudContactsSyncingStatus;
- (void)_startSyncingiCloudContacts;
- (id)_manageContactsGroupFooterText;
- (void)_setManageContacts:(id)a0 specifier:(id)a1;
- (id)_manageContacts:(id)a0;
- (id)_statusPendingDetailText:(id)a0;
- (id)_totaliCloudContactsDetailText:(id)a0;
- (void)_setAllowContactEditing:(id)a0 specifier:(id)a1;
- (id)_allowContactEditing:(id)a0;
- (void)_didCancelSyncingiCloudContacts;
- (void)_updateAllowContactEditingWithAlertIfNeeded:(id)a0 forSpecifier:(id)a1;
- (void)_updateAllowContactEditing:(id)a0;
- (void)_didFinishSyncingiCloudContacts;
- (void)_didStartSyncingiCloudContacts;
- (void)_enableAllowContactEditingSwitch:(BOOL)a0;
- (void)_updateManageContactsGroupFooterView;

@end
