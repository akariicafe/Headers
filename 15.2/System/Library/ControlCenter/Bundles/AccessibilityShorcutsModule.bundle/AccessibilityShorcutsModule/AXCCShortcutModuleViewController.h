@class CCUIContentModuleContext, CCUIToggleModule;
@protocol AXCCShortcutModuleViewControllerDelegate;

@interface AXCCShortcutModuleViewController : CCUIMenuModuleViewController {
    BOOL _suppressGuidedAccess;
    BOOL _moduleNeedsLiveUpdates;
    CCUIContentModuleContext *_contentModuleContext;
}

@property (weak, nonatomic) CCUIToggleModule *module;
@property (weak, nonatomic) id<AXCCShortcutModuleViewControllerDelegate> shortcutDelegate;

- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)setContentModuleContext:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)contentModuleContext;
- (void)dealloc;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_hasScreenSwitch;
- (void)_updateShortcutActions;
- (void)_updateShortcutActionsIfVisible;
- (void)_updateShortcutActions:(BOOL)a0;
- (id)visibleShortcuts;
- (id)_menuItemOpenAccessibilityShortcutSettings;
- (id)_menuItemForOption:(id)a0;
- (void)_toggleOption:(long long)a0;
- (id)_titlesForVisibleShortcuts;
- (BOOL)switchControlRendersDeviceUnusable;

@end
