@class _CDBatterySaver;

@interface CCUILowPowerModule : CCUIToggleModule {
    _CDBatterySaver *_batterySaver;
}

- (id)glyphPackageDescription;
- (id)init;
- (id)glyphState;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSelected:(BOOL)a0;
- (void)_updateState;
- (void)_observeSystemNotifications;
- (void)_unobserveSystemNotifications;
- (void)_updateForDarkerSystemColorsChange;

@end
