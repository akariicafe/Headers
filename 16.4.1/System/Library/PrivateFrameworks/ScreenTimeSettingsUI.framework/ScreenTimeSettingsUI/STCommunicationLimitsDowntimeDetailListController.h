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
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)presentViewController:(id)a0;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;
- (void)dismissPresentedViewController:(id)a0;
- (void)familyMemberContactsDidChange;
- (id)_allowedContactDetailLabelText:(id)a0;
- (id)_allowedCommunicationGroupFooterText:(id)a0;
- (id)_allowedContactsSpecifiers;
- (void)_didFinishEditingCommunicationLimit;
- (void)_didFinishSyncingWhitelistedContacts;
- (long long)_downtimeCommunicationLimitForSpecifier:(id)a0;
- (void)_selectLeastRestrictiveOptionIfNecessary;
- (void)_startSyncingWhitelistedContacts;
- (void)_updateAllowedCommunicationGroupFooterText;

@end
