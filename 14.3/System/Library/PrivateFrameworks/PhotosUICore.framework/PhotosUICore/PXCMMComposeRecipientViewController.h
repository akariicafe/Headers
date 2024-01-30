@class PXCMMComposeRecipientSelectionManager, PXUpdater, UILabel, UITableView, UIVisualEffectView, PXCMMSession, UIButton, PXCMMComposeRecipientValidationManager, PXCMMComposeRecipientDataSource, PXPhotoRecipientViewController, PXCMMComposeRecipientDataSourceManager, NSString, NSMutableSet, PXCMMPeopleSuggestionsMediaProvider, PXCMMSpecManager, NSProgress;
@protocol PXCMMComposeRecipientViewControllerDelegate, PXCMMActionControllerDelegate, PXCMMPersonSuggestion;

@interface PXCMMComposeRecipientViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, PXPhotoRecipientViewControllerDelegate, PXCMMComposeRecipientDataSourceManagerDelegate, PXCMMComposeRecipientSelectionManagerDelegate, PXCMMComposeRecipientValidationManagerDelegate, CNContactViewControllerDelegate, PXSettingsKeyObserver, PXDiagnosticsEnvironment>

@property (readonly, nonatomic) PXCMMSpecManager *specManager;
@property (readonly, nonatomic) PXUpdater *updater;
@property (retain, nonatomic) UITableView *composeRecipientTableView;
@property (retain, nonatomic) UIVisualEffectView *footerVisualEffectView;
@property (retain, nonatomic) UILabel *privacyMessageLabel;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) NSProgress *actionProgress;
@property (retain, nonatomic) PXCMMComposeRecipientDataSourceManager *recipientManager;
@property (retain, nonatomic) PXCMMComposeRecipientDataSource *recipientsDataSource;
@property (retain, nonatomic) PXCMMComposeRecipientSelectionManager *recipientsSelectionManager;
@property (retain, nonatomic) PXCMMComposeRecipientValidationManager *recipientsValidationManager;
@property (readonly, nonatomic) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider;
@property (retain, nonatomic) PXPhotoRecipientViewController *bootstrapRecipientViewController;
@property (retain, nonatomic) id<PXCMMPersonSuggestion> personSuggestionForBootstrapping;
@property (retain, nonatomic) PXPhotoRecipientViewController *addPeopleRecipientViewController;
@property (nonatomic) double maximumContentWidth;
@property (retain, nonatomic) NSMutableSet *transientRecipientSelection;
@property (retain, nonatomic) UIButton *tapToRadarButton;
@property (readonly, nonatomic) PXCMMSession *session;
@property (weak, nonatomic) id<PXCMMComposeRecipientViewControllerDelegate> delegate;
@property (weak, nonatomic) id<PXCMMActionControllerDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(id)a0;
- (void)composeRecipientSelectionManager:(id)a0 didUpdateSelectionSnapshotWithChangeDetails:(id)a1;
- (void)composeRecipientDataSourceManager:(id)a0 didUpdateDataSourceWithChangeDetails:(id)a1;
- (void)photoRecipientViewController:(id)a0 didCompleteWithRecipients:(id)a1;
- (void)_handleAddRecipient:(id)a0;
- (void)_handleActionButton:(id)a0;
- (void)_tapToRadarTapped:(id)a0;
- (void)_updateTableView;
- (void)_updateUserInteraction;
- (id)_validationTextColorForComposeRecipient:(id)a0;
- (void)_dismissRecipientViewController:(id)a0;
- (void)_bootstrapPersonSuggestion:(id)a0 withContact:(id)a1;
- (void)_contactViewController:(id)a0 didSelectContact:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (double)_headerHeight;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)contactViewController:(id)a0 didCompleteWithContact:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_updateFooter;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)composeRecipientValidationManager:(id)a0 didUpdateValidationWithChangedIndexes:(id)a1;
- (void)photoRecipientViewControllerDidCancel:(id)a0;

@end
