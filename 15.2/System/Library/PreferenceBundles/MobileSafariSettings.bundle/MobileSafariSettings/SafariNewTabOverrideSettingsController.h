@class NSTimer, NSIndexPath;

@interface SafariNewTabOverrideSettingsController : SafariSettingsListController <WBSExtensionsControllerObserver> {
    NSTimer *_reloadSpecifiersTimer;
    BOOL _showingEnabledNewTabOverrideExtensions;
    NSIndexPath *_currentCheckmarkIndexPath;
}

+ (id)topLevelDetailString;
+ (BOOL)canUseCurrentNewTabOverrideSelection;
+ (id)_specifierTitleForExtensionNamed:(id)a0;
+ (id)_defaultStartPageTitleTopLevel;
+ (id)_defaultStartPageTitleDrillIn;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)extensionsControllerExtensionListDidChange:(id)a0;
- (void)_reloadSpecifiersSoon:(BOOL)a0;

@end
