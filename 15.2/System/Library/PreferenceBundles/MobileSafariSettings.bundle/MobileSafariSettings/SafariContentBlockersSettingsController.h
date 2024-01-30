@class NSString, _UIContentUnavailableView, NSTimer;

@interface SafariContentBlockersSettingsController : SafariSettingsListController <SFContentBlockerManagerObserver> {
    _UIContentUnavailableView *_contentUnavailableView;
    NSTimer *_reloadSpecifiersTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)contentBlockerManagerExtensionListDidChange:(id)a0;
- (void)_setValue:(id)a0 forSpecifier:(id)a1;
- (id)_valueOfSpecifier:(id)a0;
- (void)_showContentUnavailableView;
- (void)_hideContentUnavailableView;

@end
