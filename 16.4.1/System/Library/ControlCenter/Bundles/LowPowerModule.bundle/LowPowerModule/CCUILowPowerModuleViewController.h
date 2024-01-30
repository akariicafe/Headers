@class PowerUISmartChargeClient, _PMLowPowerMode;

@interface CCUILowPowerModuleViewController : CCUIMenuModuleViewController {
    _PMLowPowerMode *_lowPowerMode;
    PowerUISmartChargeClient *_smartChargeClient;
}

- (BOOL)isSelected;
- (void)_updateState;
- (id)glyphPackageDescription;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (id)glyphState;
- (BOOL)_canShowWhileLocked;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)reconfigureView;
- (void)_unobserveSystemNotifications;
- (id)init;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (void)_observeSystemNotifications;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void).cxx_destruct;
- (void)_updateForDarkerSystemColorsChange;
- (void)refreshState;
- (void)setLowPowerMode:(BOOL)a0;
- (id)_makeLocalizedMenuItem:(id)a0 handler:(id /* block */)a1;
- (void)_configureMenu;
- (BOOL)isEAconnected;
- (void)setMobileChargeMode:(BOOL)a0;
- (void)toggleLowPowerMode;
- (void)toggleMobileChargeMode;

@end
