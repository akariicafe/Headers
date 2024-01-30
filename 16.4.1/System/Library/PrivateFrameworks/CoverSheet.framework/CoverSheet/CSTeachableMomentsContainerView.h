@class UIView, CABackdropLayer, CSPropertyAnimatingTouchPassThroughView, NSString, _UILegibilitySettings, UIImageView, SBLockScreenDefaults, UIStatusBar, SBUILegibilityLabel;

@interface CSTeachableMomentsContainerView : CSCoverSheetViewBase <SBFStatusBarManagerObserver, SBUIOptionalLegibility>

@property (retain, nonatomic) CABackdropLayer *controlCenterGrabberBackdropLayer;
@property (retain, nonatomic) SBLockScreenDefaults *lockScreenDefaults;
@property (readonly, nonatomic) BOOL usesStatusBarRelativeLayoutForControlCenterTutorsY;
@property (readonly, nonatomic) BOOL adjustsControlCenterTutorsVisibilityForAvailableSpace;
@property (retain, nonatomic) UIView *controlCenterTutorsContainerView;
@property (retain, nonatomic) UIView *controlCenterGlyphContainerView;
@property (retain, nonatomic) UIView *callToActionLabelContainerView;
@property (retain, nonatomic) UIView *homeAffordanceContainerView;
@property (retain, nonatomic) UIView *homeAffordanceView;
@property (retain, nonatomic) UIView *controlCenterGrabberView;
@property (retain, nonatomic) CSPropertyAnimatingTouchPassThroughView *controlCenterGrabberContainerView;
@property (retain, nonatomic) UIView *controlCenterGrabberPositionPlaceholderView;
@property (retain, nonatomic) UIImageView *controlCenterGlyphView;
@property (retain, nonatomic) SBUILegibilityLabel *callToActionLabel;
@property (retain, nonatomic) UIView *callToActionLabelPositionPlaceholderView;
@property (weak, nonatomic) UIStatusBar *statusBarToFollow;
@property (readonly, nonatomic) BOOL usesStatusBarRelativeLayoutForControlCenterTutors;
@property (readonly, nonatomic, getter=isStatusBarLayoutReady) BOOL statusBarLayoutIsReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)presentationRegions;
- (void)_layoutControlCenterGrabberAndGlyph;
- (void)_updateViewsForLegibilitySettings;
- (id)createCallToActionLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })_grabberCenterForContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 grabberTop:(double)a1 grabberTopIsRelative:(BOOL)a2 grabberSize:(struct CGSize { double x0; double x1; })a3 isSpaceConstrained:(out BOOL *)a4;
- (void)layoutSubviews;
- (void)_addControlCenterTutors;
- (id)_callToActionLabelFont;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)statusBarManager:(id)a0 didUpdateAvoidanceFrameForStatusBar:(id)a1 withAnimationSettings:(id)a2;
- (void)_layoutHomeAffordanceContainer;
- (void)_preferredTextSizeChanged:(id)a0;
- (void)_addCallToActionLabel;
- (void)_layoutCallToActionLabel;
- (void).cxx_destruct;

@end
