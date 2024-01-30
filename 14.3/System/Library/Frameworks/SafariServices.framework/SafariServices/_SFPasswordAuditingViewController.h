@class SFHighPriorityRecommendationData, _SFTableViewDiffableDataSource, NSObject, WBSPasswordWarningManager, WBSAutoFillQuirksManager, SFSafariViewController, ASAccountAuthenticationModificationController, NSString, UIActivityIndicatorView, WBSSavedPassword, NSArray, WBSPasswordGenerationManager, WBSSavedPasswordStore;
@protocol OS_dispatch_queue, _SFPasswordAuditingViewControllerDelegate;

@interface _SFPasswordAuditingViewController : _SFPasswordTableViewController <SFPasswordBreachToggleCellDelegate, SFHighPriorityRecommendationDataDelegate, SFPasswordDetailViewControllerDelegate, _SFTableViewDiffableDataSourceDelegate, _ASAccountAuthenticationModificationExtensionManagerObserver, ASAccountAuthenticationModificationControllerDelegate, ASAccountAuthenticationModificationControllerPresentationContextProviding, PSStateRestoration> {
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSSavedPasswordStore *_savedPasswordStore;
    _SFTableViewDiffableDataSource *_tableViewDiffableDataSource;
    WBSPasswordWarningManager *_passwordWarningManager;
    NSArray *_highPriorityRecommendationData;
    NSArray *_flaggedPasswordData;
    NSObject<OS_dispatch_queue> *_diffableDataSourceQueue;
    unsigned long long _numberOfWarnings;
    UIActivityIndicatorView *_spinner;
    SFSafariViewController *_changePasswordOnWebsiteSafariViewController;
    SFHighPriorityRecommendationData *_recommendationForMostRecentSafariViewController;
    WBSPasswordGenerationManager *_passwordGenerator;
    SFHighPriorityRecommendationData *_passwordDataForCurrentUpgrade;
    ASAccountAuthenticationModificationController *_accountAuthenticationModificationController;
}

@property (weak, nonatomic) id<_SFPasswordAuditingViewControllerDelegate> delegate;
@property (retain, nonatomic) WBSSavedPassword *passwordToRemoveAfterCompletedUpgradeInDetailView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_completedSignInWithAppleUpgrade;
- (void)_completedStrongPasswordUpgrade;
- (void)accountAuthenticationModificationController:(id)a0 didSuccessfullyCompleteRequest:(id)a1 withUserInfo:(id)a2;
- (void)accountAuthenticationModificationController:(id)a0 didFailRequest:(id)a1 withError:(id)a2;
- (id)presentationAnchorForAccountAuthenticationModificationController:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)passwordWarningManagerForPasswordDetailViewController:(id)a0;
- (id)passwordGeneratorForPasswordDetailViewController:(id)a0;
- (void)accountModificationExtensionManagerExtensionListDidChange:(id)a0;
- (id)dataSource:(id)a0 headerTextForSection:(long long)a1;
- (id)dataSource:(id)a0 footerTextForSection:(long long)a1;
- (void)didSetPasswordBreachDetectionState:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_passwordGenerationManager;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_reloadSavedPasswordsForceUpdate:(BOOL)a0;
- (void)_reloadTableViewDiffableDataSource;
- (void)_reloadTableViewDiffableDataSourceOnInternalQueue;
- (void)_configureHighPriorityInformationCell:(id)a0 withHighPriorityRecommendationData:(id)a1;
- (id)_standardRecommendationCellWithPasswordCellData:(id)a0;
- (id)_passwordBreachToggleCell;
- (void)_changePasswordOnWebsiteForHighPriorityRecommendation:(id)a0;
- (void)_initiateChangeToStrongPasswordForHighPriorityRecommendation:(id)a0;
- (void)_upgradeToSignInWithAppleForHighPriorityRecommendation:(id)a0;
- (void)_removeHighPriorityRecommendation:(id)a0;
- (id)_warningStringForPasswordCellData:(id)a0;
- (void)highPriorityRecommendationDataDidUpdate:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_shouldUseInsetGroupedStyle;
- (void)_findAndRemoveEntryForCompletedDetailViewUpgrade;
- (id)initWithSiteMetadataManager:(id)a0 autoFillQuirksManager:(id)a1 passwordWarningManager:(id)a2;
- (void)_passwordStoreDidUpdate;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewDidLoad;
- (id)_cellForIdentifier:(id)a0 indexPath:(id)a1;

@end
