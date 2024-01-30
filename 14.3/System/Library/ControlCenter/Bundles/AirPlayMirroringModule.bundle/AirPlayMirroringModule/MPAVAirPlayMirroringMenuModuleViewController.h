@class MPAVOutputDeviceDiscoverySessionController, AVOutputDevice, MPAVOutputContextController, NSMutableSet, UILabel, UIImage;

@interface MPAVAirPlayMirroringMenuModuleViewController : CCUIMenuModuleViewController {
    AVOutputDevice *_selectedOutputDevice;
    MPAVOutputContextController *_outputContextController;
    MPAVOutputDeviceDiscoverySessionController *_outputDeviceDiscoverySessionController;
    NSMutableSet *_busyIdentifiers;
    UILabel *_unexpandedTitleLabel;
    UIImage *_deviceMirroringGlyph;
    UIImage *_televisionMirroringDeviceGlyph;
    UIImage *_clusterMirroringDeviceGlyph;
    UIImage *_setTopBoxGlyph;
    UIImage *_tvStickGlyph;
    unsigned long long _numberOfWordsInUnexpandedText;
    BOOL _observersAreActive;
    BOOL _tetheredDisplayPortModeEnabled;
}

- (void).cxx_destruct;
- (void)_updateStateWithSelected:(BOOL)a0 expanded:(BOOL)a1;
- (void)_layoutScreenMirroringSubviews;
- (id)_setTopBoxGlyph;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_outputDeviceChangedNotification:(id)a0;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (id)leadingViewForMenuItem:(id)a0;
- (void)_updateState;
- (void)_updateScreenMirroringFooter;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (id)_unexpandedTitleFont;
- (id)_tvStickGlyph;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateScreenMirroringMenuItems;
- (void)_updateSelectedOutputDevice;
- (id)_televisionMirroringDeviceGlyph;
- (id)_deviceMirroringGlyph;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_clusterMirroringDeviceGlyph;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)leadingImageForMenuItem:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)viewWillLayoutSubviews;

@end
