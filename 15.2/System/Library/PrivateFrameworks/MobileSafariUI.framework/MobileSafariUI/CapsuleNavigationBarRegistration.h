@class SFMoreMenuButton, NSString, NSArray, SFCapsuleNavigationBar, NSMutableDictionary, SFBadgeContainerView, SFNavigationBarToggleButton, _SFBarManager;

@interface CapsuleNavigationBarRegistration : NSObject <SFCapsuleNavigationBarButtonProvider, _SFBarRegistrationToken> {
    _SFBarManager *_manager;
    NSArray *_leadingBarItems;
    NSArray *_trailingBarItems;
    NSMutableDictionary *_buttonsByBarItem;
    NSMutableDictionary *_menuProvidersByBarItem;
    BOOL _hiddenBarItems[16];
    BOOL _disabledBarItems[16];
    SFNavigationBarToggleButton *_formatMenuButton;
    SFMoreMenuButton *_progressView;
    SFMoreMenuButton *_shareButton;
    SFBadgeContainerView *_shareBadgeContainer;
}

@property (readonly, weak) SFCapsuleNavigationBar *bar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long contentMode;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long pageFormatItemState;

- (BOOL)containsBarItem:(long long)a0;
- (void)updateBarAnimated:(BOOL)a0;
- (id)popoverSourceInfoForItem:(long long)a0;
- (void)setBadge:(long long)a0 forBarItem:(long long)a1;
- (void)setProgress:(double)a0 forBarItem:(long long)a1;
- (void).cxx_destruct;
- (void)setBarItem:(long long)a0 hidden:(BOOL)a1;
- (void)setMenuProvider:(id /* block */)a0 forBarItem:(long long)a1;
- (void)setBarItem:(long long)a0 enabled:(BOOL)a1;
- (void)setBarItem:(long long)a0 selected:(BOOL)a1;
- (id)_progressView;
- (void)pulseBarItem:(long long)a0;
- (id)viewForBarItem:(long long)a0;
- (BOOL)_isBarItemHidden:(long long)a0;
- (void)capsuleNavigationBarDidUpdateUsesSingleButtonRow:(id)a0;
- (id)initWithBar:(id)a0 barManager:(id)a1;
- (void)_updateFormatMenuButtonCornerRadius;
- (id)_touchDownActionForBarItem:(long long)a0;
- (id)_actionForBarItem:(long long)a0;
- (id)_longPressActionForBarItem:(long long)a0;
- (void)_updateDownloadState;

@end
