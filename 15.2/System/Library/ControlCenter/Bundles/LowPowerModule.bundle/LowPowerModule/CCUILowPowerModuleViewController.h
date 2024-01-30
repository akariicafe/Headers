@class PowerUISmartChargeClient, _PMLowPowerMode;

@interface CCUILowPowerModuleViewController : CCUIMenuModuleViewController {
    _PMLowPowerMode *_lowPowerMode;
    PowerUISmartChargeClient *_smartChargeClient;
}

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (void)_observeSystemNotifications;
- (void)refreshState;
- (void)_updateForDarkerSystemColorsChange;
- (void)viewDidLoad;
- (void)reconfigureView;
- (void)_unobserveSystemNotifications;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (id)glyphState;
- (void)setLowPowerMode:(BOOL)a0;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)glyphPackageDescription;
- (BOOL)isSelected;
- (void)dealloc;
- (void)_updateState;
- (void)_configureMenu;
- (void)toggleLowPowerMode;
- (id)_makeLocalizedMenuItem:(id)a0 handler:(id /* block */)a1;
- (BOOL)isEAconnected;
- (void)toggleMobileChargeMode;
- (void)setMobileChargeMode:(BOOL)a0;

@end
