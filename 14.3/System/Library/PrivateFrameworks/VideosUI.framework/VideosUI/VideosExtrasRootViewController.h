@class NSObject, VideosExtrasMainTemplateViewController, UIButton, UIView, NSLayoutConstraint, VideosExtrasContext, NSString, IKAppContext, UITraitCollection, UIStackView, VideosExtrasNavigationController, NSArray, VideosExtrasFeatureContainerViewController, VideosExtrasArtworkDataSource;
@protocol IKAppDataStoring, VideosExtrasRootViewControllerDelegate, IKAppUserDefaultsStoring, OS_dispatch_queue;

@interface VideosExtrasRootViewController : UIViewController <IKApplication, IKAppContextDelegate, UINavigationControllerDelegate, UICollectionViewDelegate, IKAppDeviceConfig, MPVideoOverlayDelegate> {
    NSLayoutConstraint *_bottomConstraint;
    NSObject<OS_dispatch_queue> *_imageRequestQueue;
    BOOL _didAttemptRestartAfterAppContextFailure;
}

@property (retain, nonatomic) VideosExtrasFeatureContainerViewController *featureContainer;
@property (retain, nonatomic) IKAppContext *applicationContext;
@property (retain, nonatomic) NSArray *lastSelectedSnapshotViewControllers;
@property (retain, nonatomic) UIView *extrasMenuBarView;
@property (retain, nonatomic) UIStackView *extrasMenuButtonsStackView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) NSLayoutConstraint *extrasScrollViewLeadingConstraint;
@property (retain, nonatomic) id<IKAppDataStoring> localStorage;
@property (retain, nonatomic) id<IKAppDataStoring> vendorStorage;
@property (retain, nonatomic) id<IKAppUserDefaultsStoring> userDefaultsStorage;
@property (retain, nonatomic) VideosExtrasArtworkDataSource *artworkDataSource;
@property (readonly, nonatomic) VideosExtrasNavigationController *navigationController;
@property (retain, nonatomic) VideosExtrasMainTemplateViewController *mainTemplateViewController;
@property (readonly, nonatomic) UIView *mainMenuBar;
@property (copy, nonatomic) UITraitCollection *overrideTraitCollection;
@property (readonly, weak, nonatomic) VideosExtrasContext *context;
@property (nonatomic) struct CGSize { double width; double height; } initialPresentationSize;
@property (weak, nonatomic) id<VideosExtrasRootViewControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *mainMenuItemElements;
@property (nonatomic) BOOL showsMenuBar;
@property (nonatomic) BOOL showsBuiltInNavigationControls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentController;

- (id)initWithContext:(id)a0;
- (BOOL)prefersStatusBarHidden;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })screenSize;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)appIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldAutorotate;
- (id)timeZone;
- (id)vendorIdentifier;
- (id)systemLanguage;
- (void)overlayTappedBackButton:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)start;
- (void)_backButtonPressed:(id)a0;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (unsigned long long)preferredVideoFormat;
- (void)traitCollectionDidChange:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (id)appJSURL;
- (void)viewDidLoad;
- (void)_setNavigationController:(id)a0;
- (void)showExtrasMenuBarInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setClearsStackOnNextPush;
- (void)_stopOldContextIfNeeded;
- (id)_createDataStorageForIdentifier:(id)a0;
- (void)_playbackWillEndNotification:(id)a0;
- (void)_setUpForApplication;
- (void)_attemptRestart;
- (void)_adjustExtrasVisibilityForViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldExtrasBeVisibleForViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_areExtrasVisible;
- (void)_showExtrasBar:(BOOL)a0;
- (void)_extrasMenuItemSelected:(id)a0;
- (id)_extrasMenuBarViewForElements:(id)a0;
- (BOOL)_setMainDocumentWithViewController:(id)a0;
- (BOOL)shouldIgnoreJSValidation;
- (BOOL)appIsTrusted;
- (id)appLaunchParams;
- (id)viewElementRegistry;
- (BOOL)appUsesDefaultStyleSheets;
- (id)deviceConfigForContext:(id)a0;
- (id)navigationControllerForContext:(id)a0;
- (void)appContext:(id)a0 evaluateAppJavaScriptInContext:(id)a1;
- (void)appContext:(id)a0 didStartWithOptions:(id)a1;
- (void)appContext:(id)a0 didFailWithError:(id)a1;
- (void)appContext:(id)a0 didStopWithOptions:(id)a1;
- (unsigned long long)preferredVideoPreviewFormat;
- (BOOL)isTimeZoneSet;
- (id)storeFrontCountryCode;
- (void)popToFeatureOrMain;
- (void)updateMenuButtonForSelectionAtIndex:(unsigned long long)a0 deselectedIndex:(unsigned long long)a1;
- (id)detectMainDocument:(id)a0;

@end
