@class MRUVolumeBackgroundView, MRUSystemOutputDeviceRouteController, MRUSpatialAudioPreferencesController, MRUAudioFormatController, NSString, MRUListeningModeController;
@protocol MRUVolumeBackgroundViewControllerDelegate;

@interface MRUVolumeBackgroundViewController : UIViewController <MRUSystemOutputDeviceRouteControllerObserver, MRUListeningModeControllerDelegate, MRUSpatialAudioPreferencesControllerDelegate, MRUAudioFormatControllerDelegate, UIGestureRecognizerDelegate, CCUIContentModuleBackgroundViewController>

@property (retain, nonatomic) MRUVolumeBackgroundView *view;
@property (retain, nonatomic) MRUVolumeBackgroundView *viewIfLoaded;
@property (retain, nonatomic) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (retain, nonatomic) MRUListeningModeController *listeningModeController;
@property (retain, nonatomic) MRUSpatialAudioPreferencesController *spatialAudioPreferencesController;
@property (retain, nonatomic) MRUAudioFormatController *audioFormatController;
@property (weak, nonatomic) id<MRUVolumeBackgroundViewControllerDelegate> delegate;
@property (nonatomic) float systemVolumeValue;
@property (readonly, nonatomic) BOOL hasExpandedButtons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateNowPlayingIcon;
- (void)updateSecondaryRouteView;
- (void)updateSecondaryListeningModeButton;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)a0;
- (void)primaryListeningModeButtonDidChangeValue:(id)a0;
- (void)updatePrimaryListeningModeButton;
- (id)initWithOutputDeviceRouteController:(id)a0;
- (void)didTapSpatialAudioModeButton:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)updateNowPlayingAudioFormat;
- (void)updateVisibility;
- (void)updatePrimaryRouteView;
- (void)audioFormatControllerDidChangeAudioFormat:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)collapseExpandableButtons;
- (void)didEndEditingPrimaryListeningModeButton:(id)a0;
- (void)didTapSecondaryListeningModeButton:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })effectiveContentFrameForContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)secondaryListeningModeButtonDidChangeValue:(id)a0;
- (void)viewDidLoad;
- (void)spatialAudioPreferencesController:(id)a0 didChangeHeadTrackingSupported:(BOOL)a1;
- (void)didEndEditingSecondartListeningModeButton:(id)a0;
- (void)listeningModeController:(id)a0 didChangePrimaryListeningMode:(id)a1;
- (void)audioFormatControllerDidChangeBundleID:(id)a0;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDevices:(id)a0;
- (void)spatialAudioPreferencesController:(id)a0 didChangeMonoAudioEnabled:(BOOL)a1;
- (void)spatialAudioModeButtonDidChangeValue:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)updateSpatialAudioModeButton;
- (void)spatialAudioPreferencesController:(id)a0 didSpatialAudioSupported:(BOOL)a1;
- (void)listeningModeController:(id)a0 didChangeSecondaryListeningMode:(id)a1;
- (void)spatialAudioPreferencesControllerDidChangePreferences:(id)a0;
- (void)performLayoutWithAnimation:(id /* block */)a0;
- (void).cxx_destruct;
- (void)didTapPrimaryListeningModeButton:(id)a0;
- (void)loadView;
- (void)spatialAudioPreferencesController:(id)a0 didChangeAccessoryStereoHFPStatus:(int)a1;
- (void)viewWillAppear:(BOOL)a0;

@end
