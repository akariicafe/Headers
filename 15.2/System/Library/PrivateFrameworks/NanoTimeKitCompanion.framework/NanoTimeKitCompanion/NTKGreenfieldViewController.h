@class UINavigationController, NTKGreenfieldAddWatchFaceManager, NTKGreenfieldCompanionLoadingViewController, NSURL, NSString, UILabel;

@interface NTKGreenfieldViewController : UIViewController <NTKGreenfieldCompanionContentViewControllerDelegate, NTKGreenfieldAddWatchFaceManagerDelegate> {
    BOOL _hasLoadedURL;
    UILabel *_complicationsCounterLabel;
    NSString *_sourceApplicationBundleIdentifier;
}

@property (retain, nonatomic) NSURL *faceURL;
@property (retain, nonatomic) NTKGreenfieldAddWatchFaceManager *addWatchFaceManager;
@property (retain, nonatomic) UINavigationController *hiddenNavigationController;
@property (retain, nonatomic) NTKGreenfieldCompanionLoadingViewController *loadingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_didTapCancelButton;
- (void)_toggleRightCounterLabel:(BOOL)a0;
- (void)_toggleCancelButton:(BOOL)a0;
- (void)companionContentViewController:(id)a0 didStartInstallingAppWithItemId:(id)a1;
- (void)companionContentViewController:(id)a0 handleButtonEvent:(long long)a1;
- (void)didStartLoadingInAddWatchFaceManager:(id)a0;
- (void)addWatchFaceManager:(id)a0 updateStateToWelcomeWithCanAddFaceDirectly:(BOOL)a1;
- (void)addWatchFaceManager:(id)a0 updateStateToComplicationsNotAvailableWithSlots:(id)a1 unavailableTitle:(id)a2 unavailableDescription:(id)a3;
- (void)addWatchFaceManager:(id)a0 updateStateToAddComplicationWithItemId:(id)a1 installMode:(long long)a2 skippedComplicationSlots:(id)a3;
- (void)addWatchFaceManager:(id)a0 updateStateToRevisitComplicationWithItemId:(id)a1 installMode:(long long)a2 skippedComplicationSlots:(id)a3;
- (void)addWatchFaceManager:(id)a0 updateStateToCompletedWithSkippedComplicationSlots:(id)a1 canRevisit:(BOOL)a2;
- (void)addWatchFaceManager:(id)a0 didFinishAddingFaceWithError:(id)a1;
- (id)initWithUrl:(id)a0 sourceApplicationBundleIdentifier:(id)a1;

@end
