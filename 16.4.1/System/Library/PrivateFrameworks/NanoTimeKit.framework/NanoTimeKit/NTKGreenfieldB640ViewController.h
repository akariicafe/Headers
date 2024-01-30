@class NTKGreenfieldCompanionLoadingViewController, NSString, UINavigationController, NSURL, NTKGreenfieldB640Manager, NTKGreenfieldB640ContentViewController;
@protocol NTKGreenfieldB640ViewControllerDelegate;

@interface NTKGreenfieldB640ViewController : UIViewController <NTKGreenfieldB640ContentViewControllerDelegate, NTKGreenfieldB640WatchFacesManagerDelegate> {
    NSString *_sourceApplicationBundleIdentifier;
    NSURL *_url;
    NTKGreenfieldCompanionLoadingViewController *_loadingViewController;
    NTKGreenfieldB640ContentViewController *_contentViewController;
    UINavigationController *_hiddenNavigationController;
    NTKGreenfieldB640Manager *_b640Manager;
}

@property (weak, nonatomic) id<NTKGreenfieldB640ViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_didTapCancelButton;
- (void)didFinishAddingWatchFaceToLibrary:(id)a0;
- (void)didStartDecodingWatchFaces:(id)a0;
- (void)greenfieldB640ContentViewController:(id)a0 handleButtonActionEvent:(long long)a1;
- (void)greenfieldB640ContentViewController:(id)a0 handleWatchFaceSelectedEventAtIndex:(long long)a1;
- (void)greenfieldB640WatchFacesManager:(id)a0 didSelectWatchFaceAtIndex:(long long)a1;
- (void)greenfieldB640WatchFacesManager:(id)a0 didSelectWatchFaceWithError:(id)a1;
- (void)greenfieldB640WatchFacesManager:(id)a0 updateStateToError:(id)a1;
- (void)greenfieldB640WatchFacesManager:(id)a0 updateStateToSelectWatchFacesState:(id)a1;
- (id)initWithUrl:(id)a0 sourceApplicationBundleIdentifier:(id)a1;

@end
