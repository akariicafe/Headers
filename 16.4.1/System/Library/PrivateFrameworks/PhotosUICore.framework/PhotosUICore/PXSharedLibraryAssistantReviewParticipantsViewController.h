@class PXSharedLibraryAssistantParticipantViewModel, NSString, NSArray, UIActivityIndicatorView, OBLinkTrayButton, PXSharedLibraryAssistantViewModel, NSProgress, OBBoldTrayButton, PXRoundProgressView, PXSharedLibraryParticipantTableViewController;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantReviewParticipantsViewController : OBTableWelcomeController <PXAssistantViewController, PXSharedLibraryParticipantTableViewControllerDelegate, PXChangeObserver> {
    PXSharedLibraryAssistantParticipantViewModel *_participantViewModel;
    PXSharedLibraryParticipantTableViewController *_tableViewController;
    NSArray *_tableViewLayoutConstraints;
    UIActivityIndicatorView *_spinnerView;
    PXRoundProgressView *_progressView;
    OBBoldTrayButton *_shareInMessagesButton;
    OBLinkTrayButton *_shareButton;
    long long _shareButtonTransport;
    NSProgress *_shareProgress;
}

@property (readonly, nonatomic) BOOL shouldHideBackButton;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateProgress;
- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateIcon;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateNavigationItem;
- (void)_updateActionButtons;
- (void)_updateTableViewInteractability;
- (void)_cancelShareIfInProgress;
- (void)_finishAssistantWithInvitationTransport:(long long)a0 sourceItem:(id)a1;
- (void)_setIsProcessing:(BOOL)a0;
- (void)_updateCaptionText;
- (void)_updateHeaderDetailText;
- (void)_updateTableViewLayoutConstraints;
- (void)dismissPresentedViewControllerAnimated:(BOOL)a0 forSharedLibraryParticipantTableViewController:(id)a1;
- (id)initWithViewModel:(id)a0 participantViewModel:(id)a1;
- (void)inviteButtonTapped:(id)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 forSharedLibraryParticipantTableViewController:(id)a2;
- (void)shareButtonTapped:(id)a0;
- (void)sharedLibraryParticipantTableViewControllerDidChangeHeight:(id)a0;

@end
