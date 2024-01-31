@class PowerUISmartChargeClient, _PMLowPowerMode;

@interface CCUILowPowerModuleViewController : CCUIMenuModuleViewController {
    _PMLowPowerMode *_lowPowerMode;
    PowerUISmartChargeClient *_smartChargeClient;
}

- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)refreshStateAnimated:(BOOL)a0;
- (id)init;
- (void)dealloc;
- (BOOL)isSelected;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (void)_updateState;
- (void)viewDidLoad;
- (void)_observeSystemNotifications;
- (id)glyphPackageDescription;
- (void)_unobserveSystemNotifications;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)glyphState;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)_updateForDarkerSystemColorsChange;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)reconfigureView;
- (void)setLowPowerMode:(BOOL)a0;
- (id)_makeLocalizedMenuItem:(id)a0 handler:(id /* block */)a1;
- (void)_configureMenu;
- (BOOL)isEAconnected;
- (void)setMobileChargeMode:(BOOL)a0;
- (void)toggleLowPowerMode;
- (void)toggleMobileChargeMode;

@end
