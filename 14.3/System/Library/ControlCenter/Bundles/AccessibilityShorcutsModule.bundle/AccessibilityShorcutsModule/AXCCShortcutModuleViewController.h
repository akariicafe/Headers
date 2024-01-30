@class CCUIContentModuleContext, CCUIToggleModule;
@protocol AXCCShortcutModuleViewControllerDelegate;

@interface AXCCShortcutModuleViewController : CCUIMenuModuleViewController {
    BOOL _suppressGuidedAccess;
    BOOL _moduleNeedsLiveUpdates;
    CCUIContentModuleContext *_contentModuleContext;
}

@property (weak, nonatomic) CCUIToggleModule *module;
@property (weak, nonatomic) id<AXCCShortcutModuleViewControllerDelegate> shortcutDelegate;

- (id)contentModuleContext;
- (void).cxx_destruct;
- (void)setContentModuleContext:(id)a0;
- (void)dealloc;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (BOOL)_hasScreenSwitch;
- (void)_toggleAssistiveTouch;
- (void)_toggleVoiceOver;
- (void)_toggleClassicInvertColors;
- (void)_toggleZoom;
- (void)_toggleFullKeyboardAccess;
- (void)_updateShortcutActions;
- (void)_updateShortcutActionsIfVisible;
- (void)_updateShortcutActions:(BOOL)a0;
- (id)visibleShortcuts;
- (id)_menuItemOpenAccessibilityShortcutSettings;
- (id)_menuItemForOption:(id)a0;
- (void)_toggleOption:(long long)a0;
- (BOOL)_shouldShowOption:(int)a0;
- (void)_toggleWhiteOnBlack;
- (void)_toggleReduceWhitePoint;
- (void)_toggleColorFilter;
- (void)_toggleGrayscale;
- (void)_toggleSwitchOver;
- (void)_toggleTouchAccommodations;
- (void)_toggleGuidedAccess;
- (void)_toggleIncreaseContrast;
- (void)_toggleReduceTransparency;
- (void)_toggleCommandAndControl;
- (void)_toggleWhiteOnBlackOffMainThread;
- (id)_titlesForVisibleShortcuts;
- (void)_toggleDisplayAppearance;
- (BOOL)switchControlRendersDeviceUnusable;
- (void)_promptToDisableBrightnessFilters:(id /* block */)a0 data:(id)a1;

@end
