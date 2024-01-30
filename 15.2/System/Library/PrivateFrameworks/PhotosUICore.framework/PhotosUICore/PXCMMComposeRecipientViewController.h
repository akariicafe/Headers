@class PXComposeRecipientTableViewController, PXCMMSession, NSString, PXUpdater, UIButton, PXComposeRecipientTableViewModel, NSProgress, UIVisualEffectView, PXCMMSpecManager, UILabel;
@protocol PXCMMActionControllerDelegate;

@interface PXCMMComposeRecipientViewController : UIViewController <PXChangeObserver, PXComposeRecipientTableViewControllerDelegate, PXDiagnosticsEnvironment>

@property (readonly, nonatomic) PXCMMSpecManager *specManager;
@property (readonly, nonatomic) PXUpdater *updater;
@property (retain, nonatomic) PXComposeRecipientTableViewModel *tableViewModel;
@property (retain, nonatomic) PXComposeRecipientTableViewController *tableViewController;
@property (retain, nonatomic) UIVisualEffectView *footerVisualEffectView;
@property (retain, nonatomic) UILabel *privacyMessageLabel;
@property (retain, nonatomic) UIButton *sendButton;
@property (retain, nonatomic) NSProgress *actionProgress;
@property (nonatomic) double maximumContentWidth;
@property (retain, nonatomic) UIButton *tapToRadarButton;
@property (readonly, nonatomic) PXCMMSession *session;
@property (weak, nonatomic) id<PXCMMActionControllerDelegate> actionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSession:(id)a0;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_updateFooter;
- (void)_setNeedsUpdate;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)composeRecipientTableViewControllerDidChangeHeight:(id)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 forComposeRecipientTableViewController:(id)a2;
- (void)dismissPresentedViewControllerAnimated:(BOOL)a0 forComposeRecipientTableViewController:(id)a1;
- (void)_handleActionButton:(id)a0;
- (void)_tapToRadarTapped:(id)a0;
- (void)_updateTableView;
- (void)_updateUserInteraction;

@end
