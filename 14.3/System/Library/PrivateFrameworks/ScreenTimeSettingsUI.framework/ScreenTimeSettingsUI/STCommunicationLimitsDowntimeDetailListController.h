@class CNUIFamilyMemberWhitelistedContactsController, PSSpecifier, NSString, STCommunicationLimits, NSMutableArray;

@interface STCommunicationLimitsDowntimeDetailListController : PSListController <CNUIFamilyMemberContactsPresentation>

@property (retain) PSSpecifier *allowedCommunicationGroupSpecifier;
@property (retain) PSSpecifier *allowEveryoneSpecifier;
@property (retain) PSSpecifier *allowContactsOnlySpecifier;
@property (retain) PSSpecifier *allowGroupsWithOneContactSpecifier;
@property (retain) PSSpecifier *allowSpecificContactsSpecifier;
@property (retain) PSSpecifier *allowedContactsGroupSpecifier;
@property (retain) PSSpecifier *addContactsSpecifier;
@property (retain) NSMutableArray *allowedContactsSpecifiers;
@property (retain) STCommunicationLimits *communicationLimits;
@property (retain) CNUIFamilyMemberWhitelistedContactsController *whitelistedContactsController;
@property BOOL syncingWhitelistedContacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willResignActive;
- (void)dismissPresentedViewController:(id)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)familyMemberContactsDidChange;
- (void)presentViewController:(id)a0;
- (void)viewDidLoad;
- (void)_selectLeastRestrictiveOptionIfNecessary;
- (void)_didFinishEditingCommunicationLimit;
- (long long)_downtimeCommunicationLimitForSpecifier:(id)a0;
- (id)_allowedContactsSpecifiers;
- (id)_allowedCommunicationGroupFooterText:(id)a0;
- (id)_allowedContactDetailLabelText:(id)a0;
- (void)_didFinishSyncingWhitelistedContacts;
- (void)_updateAllowedCommunicationGroupFooterText;
- (void)_startSyncingWhitelistedContacts;

@end
