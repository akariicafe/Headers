@class CCUIAppLauncherModule, SCUIAssetProvider;

@interface CCUIAppLauncherViewController : CCUIMenuModuleViewController {
    SCUIAssetProvider *_assetProvider;
}

@property (weak, nonatomic) CCUIAppLauncherModule *module;

- (void)_updateApplicationShortcutsActions;
- (void).cxx_destruct;
- (void)_activateApplicationForShortcutItem:(id)a0;
- (void)buttonTapped:(id)a0 forEvent:(id)a1;
- (void)buttonTouchDown:(id)a0 forEvent:(id)a1;
- (id)_assetProvider;
- (id)_menuItemForShortcutItem:(id)a0;
- (id)leadingImageForMenuItem:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (BOOL)shouldBeginTransitionToExpandedContentModule;

@end
