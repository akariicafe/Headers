@class STCommunicationLimits, PSSpecifier;

@interface STCommunicationLimitsScreenTimeDetailListController : PSListController

@property (retain) PSSpecifier *allowedCommunicationGroupSpecifier;
@property (retain) PSSpecifier *allowEveryoneSpecifier;
@property (retain) PSSpecifier *allowContactsOnlySpecifier;
@property (retain) PSSpecifier *allowGroupsWithOneContactSpecifier;
@property (retain) STCommunicationLimits *communicationLimits;

+ (void)showCompatibilityAlertIfNeededWithCoordinator:(id)a0 presentingViewController:(id)a1 okHandler:(id /* block */)a2;

- (void)willResignActive;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)_didFinishEditingCommunicationLimit;
- (id)_allowedCommunicationGroupFooterText:(id)a0;
- (void)_updateAllowedCommunicationGroupFooterText;

@end
