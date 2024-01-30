@class NSCountedSet, NSString, SBAppStatusBarSettingsAssertion, SBMainStatusBarContentAssertion, SBMainStatusBarStateProvider, NSNumber, _UILegibilitySettings;

@interface SBDashBoardStatusBarController : NSObject <CSStatusBarControlling> {
    NSCountedSet *_statusBarHiddenReasons;
    SBAppStatusBarSettingsAssertion *_hideStatusBarAssertion;
    SBAppStatusBarSettingsAssertion *_statusBarParametersAssertion;
    SBMainStatusBarContentAssertion *_statusBarContentAssertion;
    SBMainStatusBarStateProvider *_lazy_stateProvider;
}

@property (readonly, nonatomic) NSNumber *statusBarAlpha;
@property (readonly, nonatomic) long long statusBarStyle;
@property (readonly, nonatomic) _UILegibilitySettings *statusBarLegibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setStatusBarAlpha:(id)a0 style:(long long)a1 legibilitySettings:(id)a2;
- (void)destroyFakeStatusBar:(id)a0;
- (id)effectiveStatusBarStyleRequestForAlpha:(id)a0 style:(long long)a1 legibilitySettings:(id)a2;
- (void)clearStatusBarParameters;
- (void)enableStatusBarItem:(int)a0 requestor:(id)a1;
- (id)createFakeStatusBarWithReason:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setStatusBarHidden:(BOOL)a0 forReason:(id)a1;
- (id)_stateProvider;
- (void)enableStatusBarTime:(BOOL)a0 crossfade:(BOOL)a1 crossfadeDuration:(double)a2;
- (void)updateStatusBarTimeEnabled;
- (void)disableStatusBarItem:(int)a0 requestor:(id)a1;

@end
