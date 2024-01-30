@class NTKGreenfieldCompanionLoadingViewController, NSString, UINavigationController, NSURL, NTKGreenfieldB640Manager;
@protocol NTKGreenfieldB640ViewControllerDelegate;

@interface NTKGreenfieldB640ViewController : UIViewController <NTKGreenfieldB640ContentViewControllerDelegate, NTKGreenfieldB640WatchFacesManagerDelegate> {
    NSString *_sourceApplicationBundleIdentifier;
    NSURL *_url;
    NTKGreenfieldCompanionLoadingViewController *_loadingViewController;
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
- (void)greenfieldB640ContentViewController:(id)a0 handleActionEvent:(long long)a1 selectedDecodedRecipe:(id)a2;
- (void)_didTapCancelButton;
- (id)initWithUrl:(id)a0 sourceApplicationBundleIdentifier:(id)a1;
- (void)didStartDecodingWatchFaces:(id)a0;
- (void)greenfieldB640WatchFacesManager:(id)a0 updateStateToSelectWatchFacesWithGreenfieldB640Model:(id)a1;
- (void)greenfieldB640WatchFacesManager:(id)a0 updateStateToError:(id)a1;
- (void)didFinishAddingWatchFaceToLibrary:(id)a0;

@end
