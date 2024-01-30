@class MPAVOutputDeviceDiscoverySessionController, AVOutputDevice, MPAVOutputContextController, NSMutableSet, UILabel;

@interface MPAVAirPlayMirroringMenuModuleViewController : CCUIMenuModuleViewController {
    AVOutputDevice *_selectedOutputDevice;
    MPAVOutputContextController *_outputContextController;
    MPAVOutputDeviceDiscoverySessionController *_outputDeviceDiscoverySessionController;
    NSMutableSet *_busyIdentifiers;
    UILabel *_unexpandedTitleLabel;
    unsigned long long _numberOfWordsInUnexpandedText;
    BOOL _observersAreActive;
    BOOL _tetheredDisplayPortModeEnabled;
}

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)_updateSelectedOutputDevice;
- (void).cxx_destruct;
- (void)_updateScreenMirroringFooter;
- (id)leadingImageForMenuItem:(id)a0;
- (void)_outputDeviceChangedNotification:(id)a0;
- (void)_layoutScreenMirroringSubviews;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)_unexpandedTitleFont;
- (void)_updateScreenMirroringMenuItems;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)_updateStateWithSelected:(BOOL)a0 expanded:(BOOL)a1;
- (void)_updateState;

@end
