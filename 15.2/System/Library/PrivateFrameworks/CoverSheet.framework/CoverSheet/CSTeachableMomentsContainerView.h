@class _UILegibilitySettings, NSString, UIImageView, SBLockScreenDefaults, UIView, SBUILegibilityLabel, UIStatusBar;

@interface CSTeachableMomentsContainerView : CSCoverSheetViewBase <SBUIOptionalLegibility>

@property (retain, nonatomic) UIView *controlCenterGrabberEffectContainerView;
@property (retain, nonatomic) SBLockScreenDefaults *lockScreenDefaults;
@property (retain, nonatomic) UIView *controlCenterTutorsContainerView;
@property (retain, nonatomic) UIView *controlCenterGrabberContainerView;
@property (retain, nonatomic) UIView *controlCenterGlyphContainerView;
@property (retain, nonatomic) UIView *callToActionLabelContainerView;
@property (retain, nonatomic) UIView *homeAffordanceContainerView;
@property (retain, nonatomic) UIView *homeAffordanceView;
@property (retain, nonatomic) UIView *controlCenterGrabberView;
@property (retain, nonatomic) UIView *controlCenterGrabberPositionPlaceholderView;
@property (retain, nonatomic) UIImageView *controlCenterGlyphView;
@property (retain, nonatomic) SBUILegibilityLabel *callToActionLabel;
@property (retain, nonatomic) UIView *callToActionLabelPositionPlaceholderView;
@property (weak, nonatomic) UIStatusBar *statusBarToFollow;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)_preferredTextSizeChanged:(id)a0;
- (id)presentationRegions;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateViewsForLegibilitySettings;
- (void).cxx_destruct;
- (void)_layoutCallToActionLabel;
- (BOOL)statusBarIsReady;
- (id)createCallToActionLabel;
- (void)_addCallToActionLabel;
- (void)_addControlCenterTutors;
- (void)_layoutHomeAffordanceContainer;
- (void)_layoutControlCenterGrabberAndGlyph;
- (id)_callToActionLabelFont;
- (struct CGPoint { double x0; double x1; })_grabberCenterForCointainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 grabberTop:(double)a1 grabberSize:(struct CGSize { double x0; double x1; })a2;

@end
