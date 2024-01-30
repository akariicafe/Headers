@class MRUSpatialAudioPreferencesController, MRUVolumeBackgroundView, MRNowPlayingAudioFormatController, NSTimer, NSString, MRUSystemOutputDeviceRouteController;
@protocol MRUVolumeBackgroundViewControllerDelegate;

@interface MRUVolumeBackgroundViewController : UIViewController <MRUSystemOutputDeviceRouteControllerObserver, MRUSpatialAudioPreferencesControllerDelegate, MRNowPlayingAudioFormatControllerDelegate, UIGestureRecognizerDelegate, CCUIContentModuleBackgroundViewController>

@property (retain, nonatomic) MRUVolumeBackgroundView *view;
@property (retain, nonatomic) MRUVolumeBackgroundView *viewIfLoaded;
@property (retain, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (retain, nonatomic) MRUSpatialAudioPreferencesController *spatialAudioPreferencesController;
@property (retain, nonatomic) MRNowPlayingAudioFormatController *audioFormatController;
@property (retain, nonatomic) NSTimer *primaryUpdateTimer;
@property (retain, nonatomic) NSTimer *secondaryUpdateTimer;
@property (retain, nonatomic) NSTimer *spatialUpdateTimer;
@property (nonatomic) BOOL optimisticSpatialized;
@property (weak, nonatomic) id<MRUVolumeBackgroundViewControllerDelegate> delegate;
@property (nonatomic) float systemVolumeValue;
@property (readonly, nonatomic) BOOL hasExpandedButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (BOOL)_canShowWhileLocked;
- (void)updateVisibility;
- (void)loadView;
- (void)nowPlayingAudioFormatController:(id)a0 didChangeBundleID:(id)a1 displayName:(id)a2;
- (void)nowPlayingAudioFormatController:(id)a0 didChangeAudioFormatContentInfo:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })effectiveContentFrameForContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a0;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a0;
- (id)initWithOutputDeviceRouteController:(id)a0;
- (void)collapseExpandableButtons;
- (void)spatialAudioPreferencesController:(id)a0 didSpatialAudioSupported:(BOOL)a1;
- (void)spatialAudioPreferencesController:(id)a0 didChangeHeadTrackingSupported:(BOOL)a1;
- (void)spatialAudioPreferencesControllerDidChangePreferences:(id)a0;
- (void)didTapPrimaryListeningModeButton:(id)a0;
- (void)primaryListeningModeButtonDidChangeValue:(id)a0;
- (void)didTapSecondaryListeningModeButton:(id)a0;
- (void)secondaryListeningModeButtonDidChangeValue:(id)a0;
- (void)didTapSpatialAudioModeButton:(id)a0;
- (void)spatialAudioModeButtonDidChangeValue:(id)a0;
- (void)updatePrimaryRouteView;
- (void)updateSecondaryRouteView;
- (void)updateNowPlayingIcon;
- (void)updateNowPlayingAudioFormat;
- (void)updatePrimaryListeningModeButton;
- (void)updateSecondaryListeningModeButton;
- (void)updateListeningModeButton:(id)a0 forOutputDeviceRoute:(id)a1;
- (void)setListeningMode:(id)a0 forButton:(id)a1 outputDeviceRoute:(id)a2 completion:(id /* block */)a3;
- (id)listeningModeErrorMessageForOutputDevice:(id)a0;
- (void)updateSpatialAudioModeButton;
- (void)updateOptimisticSpatializedForSelectedPreferences:(id)a0 previousPreferences:(id)a1 audioFormatContentInfo:(id)a2;
- (void)resetOptimisticSpatialized;
- (void)performLayoutWithAnimation:(id /* block */)a0;

@end
