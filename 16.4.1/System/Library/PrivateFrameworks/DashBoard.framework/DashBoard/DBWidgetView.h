@class _TtC9DashBoard22DBDashboardPlatterView, DBWidgetFocusRingView, NSTimer, NSString, UIView, DBEnvironmentConfiguration, MTShadowView;
@protocol DBWidgetViewFocusEnabledProviding;

@interface DBWidgetView : UIView <CARSessionCommandObserving>

@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration;
@property (retain, nonatomic) DBWidgetFocusRingView *focusRingView;
@property (retain, nonatomic) _TtC9DashBoard22DBDashboardPlatterView *platterView;
@property (retain, nonatomic) UIView *highContrastBackgroundColorView;
@property (retain, nonatomic) MTShadowView *shadowView;
@property (retain, nonatomic) UIView *contentView;
@property (weak, nonatomic) id<DBWidgetViewFocusEnabledProviding> focusEnabledProvider;
@property (retain, nonatomic) NSTimer *focusFadeTimer;
@property (nonatomic) BOOL focusFaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_wheelChangedWithEvent:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)canBecomeFocused;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)session:(id)a0 didUpdateNightMode:(BOOL)a1;
- (BOOL)_canFade;
- (void)_evaluateFocusFade;
- (void)_fadeFocusRing;
- (void)_startFadeTimerIfNecessary;
- (void)_unfadeFocusRing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 focusEnabledProvider:(id)a1 environmentConfiguration:(id)a2;
- (void)updateAppearanceForWallpaper;

@end
