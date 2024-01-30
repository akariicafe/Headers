@class UIView, NSString, NSArray, _PUWallpaperDebugRenderingEnvironment, PUWallpaperPosterController, UIButton, PUWallpaperPosterDateView, _PUWallpaperDebugMutablePreferences;

@interface PUWallpaperPlaygroundViewController : UIViewController <PUWallpaperRenderer>

@property (nonatomic) BOOL showsControls;
@property (retain, nonatomic) UIView *hostingView;
@property (readonly, nonatomic) _PUWallpaperDebugRenderingEnvironment *environment;
@property (readonly, nonatomic) _PUWallpaperDebugMutablePreferences *preferences;
@property (retain, nonatomic) PUWallpaperPosterController *posterController;
@property (retain, nonatomic) PUWallpaperPosterDateView *dateView;
@property (readonly, nonatomic) NSArray *assets;
@property (readonly, nonatomic) id shuffleTriggerObserver;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UIButton *settingsButton;
@property (nonatomic) BOOL useLowLuminance;
@property (retain, nonatomic) NSString *lowLuminanceFilterInputScaleKeyPath;
@property (retain, nonatomic) NSString *lowLuminanceFilterInputAmountKeyPath;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView *foregroundView;
@property (readonly, nonatomic) UIView *floatingView;
@property (readonly, nonatomic) double pu_backlightTransformAnimationDuration;
@property (readonly, nonatomic) double pu_lowLuminanceAlphaAnimationDuration;
@property (readonly, nonatomic) double pu_shuffleSleepTransformOutAnimationDuration;
@property (readonly, nonatomic) double pu_shuffleSleepFadeOutAnimationDuration;
@property (readonly, nonatomic) double pu_shuffleSleepFadeInAnimationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleTap:(id)a0;
- (void)_commonInit;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_dismiss;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithAssets:(id)a0;
- (void)_handleTwoFingerTap:(id)a0;
- (id)_renderingEnvironmentForAssets:(id)a0;
- (void)_handleShuffleTrigger;
- (void)_setupControls;
- (void)_setupLowLuminanceFilter;
- (void)_setupPosterController;
- (void)_setupRendererViews;
- (void)_updateLowLuminanceState;
- (id)initWithConfiguration:(id)a0 assetDirectory:(id)a1;
- (void)presentPlaygroundWithPresentingViewController:(id)a0;
- (void)pu_noteContentSignificantlyChanged;
- (void)pu_updatePreferences:(id /* block */)a0;

@end
