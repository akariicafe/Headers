@class NAFuture, HUMediaSystemEditorGridViewController, HFMediaSystemBuilder, NSString, HUMediaSystemEditorItemManager;
@protocol HUMediaSystemEditorViewControllerDelegate, HUPresentationDelegate;

@interface HUMediaSystemEditorViewController : HUItemTableViewController <HUNameAndIconEditorCellDelegate, HUMediaSystemEditorGridViewControllerDelegate, HUPresentationDelegateHost>

@property (retain, nonatomic) HUMediaSystemEditorItemManager *itemManager;
@property (readonly, nonatomic) HUMediaSystemEditorGridViewController *serviceGridViewController;
@property (nonatomic) BOOL hasViewEverAppeared;
@property (retain, nonatomic) NAFuture *createNewMediaSystemFuture;
@property (retain, nonatomic) NAFuture *accountArbitrationFuture;
@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder;
@property (weak, nonatomic) id<HUMediaSystemEditorViewControllerDelegate> mediaSystemEditorDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

+ (BOOL)adoptsDefaultGridLayoutMargins;
+ (BOOL)wouldPairingAccessoriesNecessitateConfiguration:(id)a0;

- (void).cxx_destruct;
- (void)_cancel:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (BOOL)shouldManageTextFieldForItem:(id)a0;
- (id)childViewControllersToPreload;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (id)savedName;
- (id)mediaSystemBuilder;
- (id)mediaSystemEditorGrid:(id)a0 didUpdateMediaSystemBuilder:(id)a1;
- (id)initForCreatingNewMediaSystemFromMediaAccessories:(id)a0 home:(id)a1;
- (void)createMediaSystemWithAccessory:(id)a0;
- (id)initForEditingExistingMediaSystemBuilder:(id)a0;
- (id)createMediaSystem;
- (id)_checkIfAccessoriesNeedSoftwareUpdateToSupportPairing;
- (id)_promptForRoomChange;
- (id)_executeAppleMusicAccountReconcilationForMediaSystemBuilder:(id)a0;
- (id)_executePreferredMediaUserReconcilationForMediaSystemBuilder:(id)a0;
- (void)_configureMediaSystemBuilderToMoveHomePodsToRoom:(id)a0;
- (id /* block */)_authKitContextGenerator;

@end
