@class NSString, NSTimer;

@interface SafariWebExtensionsSettingsController : SafariSettingsListController <SFContentBlockerManagerObserver, WBSExtensionsControllerObserver> {
    NSTimer *_reloadSpecifiersTimer;
    BOOL _showingContentBlockers;
    BOOL _showingExtensions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_managedConfigurationSettingsDidChange:(id)a0;
- (void)contentBlockerManagerExtensionListDidChange:(id)a0;
- (void)extensionsControllerExtensionListDidChange:(id)a0;
- (BOOL)isContentBlockersAvailable:(id)a0;
- (void)_reloadSpecifiersSoon:(BOOL)a0;
- (void)_setContentBlockerValue:(id)a0 forSpecifier:(id)a1;
- (id)_valueOfContentBlockerSpecifier:(id)a0;
- (id)_valueOfWebExtensionSpecifier:(id)a0;
- (void)_moreExtensionsButtonTapped:(id)a0;

@end
