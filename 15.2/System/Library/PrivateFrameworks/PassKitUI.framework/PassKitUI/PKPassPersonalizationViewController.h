@class PKPass, NSString, NSArray, UIButton, OBPrivacyLinkController, PKContact, PKPassPersonalizationHeaderView, UIBarButtonItem;
@protocol PKPassPersonalizationViewControllerDelegate;

@interface PKPassPersonalizationViewController : UITableViewController <PKPassPersonalizationCellDelegate, PKPassPersonalizationTermsViewControllerDelegate, PKPaymentSetupViewControllerDelegate> {
    PKPassPersonalizationHeaderView *_headerView;
    UIBarButtonItem *_personalizeNowButton;
    UIButton *_personalizeLaterButton;
    PKPass *_pass;
    NSString *_personalizationToken;
    PKContact *_contact;
    NSArray *_cellContexts;
    unsigned long long _personalizationSource;
    BOOL _hasScrolledToCells;
    BOOL _termsAndConditionsAccepted;
    OBPrivacyLinkController *_privacyController;
}

@property (weak, nonatomic) id<PKPassPersonalizationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (BOOL)personalizationCellShouldBeginEditing:(id)a0;
- (BOOL)personalizationCellShouldReturn:(id)a0;
- (void)personalizationCellDidChangeValue:(id)a0;
- (void)_personalizeNowButtonPressed:(id)a0;
- (void)_personalizeLaterButtonPressed:(id)a0;
- (BOOL)_contactReadyForPersonalization;
- (void)_configureHeaderViewForState:(unsigned long long)a0;
- (void)_positionFooterView;
- (void)_scrollToCellsIfNeeded;
- (id)_nextCellForIndexPath:(id)a0;
- (void)_personalizePass;
- (void)_presentPersonalizationErrorAlert;
- (void)passPersonalizationTermsViewControllerDidAcceptTerms:(id)a0;
- (void)passPersonalizationTermsViewControllerDidDeclineTerms:(id)a0;
- (id)initWithPass:(id)a0 personalizationToken:(id)a1 personalizationSource:(unsigned long long)a2;

@end
