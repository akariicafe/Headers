@class MediaControlsRouteView, NSTimer, MediaControlsExpandableButton, MediaControlsVolumeController, NSString, MediaControlsBluetoothListeningModeButton;

@interface MediaControlsVolumeBackgroundViewController : CCUISliderModuleBackgroundViewController <UIGestureRecognizerDelegate, MediaControlsVolumeControllerObserver>

@property (retain, nonatomic) MediaControlsRouteView *primaryRouteView;
@property (retain, nonatomic) MediaControlsRouteView *secondaryRouteView;
@property (retain, nonatomic) MediaControlsBluetoothListeningModeButton *primaryBluetoothListeningModeButton;
@property (retain, nonatomic) MediaControlsBluetoothListeningModeButton *secondaryBluetoothListeningModeButton;
@property (retain, nonatomic) MediaControlsExpandableButton *spatialExpandableButton;
@property (retain, nonatomic) NSTimer *primaryUpdateTimer;
@property (retain, nonatomic) NSTimer *secondaryUpdateTimer;
@property (retain, nonatomic) MediaControlsVolumeController *volumeController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)_verticalPadding;
- (void)collapseBluetoothListeningModeButtons;
- (void).cxx_destruct;
- (void)didTapSecondaryBluetoothListeningModeButton:(id)a0;
- (void)primaryBluetoothListeningModeButtonDidChangeValue:(id)a0;
- (void)_configureOptionsButton:(id)a0 forRouteType:(long long)a1;
- (void)didTapPrimaryBluetoothListeningModeButton:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)_configurePrimaryOptionsButtonIfNeeded;
- (void)_updateButton:(id)a0 routeType:(long long)a1;
- (void)secondaryBluetoothListeningModeButtonDidChangeValue:(id)a0;
- (void)mediaControlsVolumeController:(id)a0 didUpdateSplitRoute:(BOOL)a1;
- (void)_configureSecondaryOptionsButtonIfNeeded;
- (void)_performLayoutWithAnimation:(id /* block */)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)mediaControlsVolumeController:(id)a0 didChangeHeadTrackedSpatialAudioEnabled:(BOOL)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_configureRouteViews;
- (double)_horizontalPadding;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateVisibility;
- (void)spatialExpandableButtonDidChangeValue:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)mediaControlsVolumeController:(id)a0 didChangeVolumeAvailable:(BOOL)a1 effectiveVolume:(float)a2 forRoute:(long long)a3;
- (void)_updateButtonAxis;
- (void)_springAnimate:(id /* block */)a0;
- (BOOL)_canShowWhileLocked;
- (void)_configureSpacialButtonIfNeeded;
- (void)_configureRouteView:(id)a0 forRouteType:(long long)a1;
- (void)viewDidLoad;

@end
