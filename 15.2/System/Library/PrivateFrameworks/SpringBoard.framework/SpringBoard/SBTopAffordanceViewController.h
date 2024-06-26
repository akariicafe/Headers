@class UIImageView, BSSpringAnimationSettings, UILabel, SBFHomeGrabberSettings, UIView, SBDeviceApplicationSceneHandle, NSString, NSLayoutConstraint, SBTopAffordanceDotsView, MTMaterialView, SBAppSwitcherSettings, NSMutableSet, SBFFluidBehaviorSettings, SBTopAffordanceButton, SBAttentionAwarenessClient;
@protocol SBTopAffordanceViewControllerDelegate;

@interface SBTopAffordanceViewController : UIViewController <PTSettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, SBTransientUITapToDismissParticipant, SBTransientUITapToUnhideParticipant, SBTransientUIIndirectPanToDismissParticipant> {
    BOOL _isSystemPointerInteractionEnabled;
    SBAppSwitcherSettings *_appSwitcherSettings;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
    long long _touchState;
    long long _presence;
    unsigned long long _lastActivatingToken;
    unsigned long long _lastInitialHideToken;
    NSMutableSet *_hiddenOverrides;
    unsigned long long _lastVisibilityTransitionToken;
    NSMutableSet *_outstandingVisibilityTransitionTokens;
    BOOL _isAnimating;
    NSLayoutConstraint *_dotsViewCenterXConstraint;
    NSLayoutConstraint *_dotsViewCenterYConstraint;
    UIView *_pillButtonsView;
    NSLayoutConstraint *_pillButtonsViewWidthConstraint;
    NSLayoutConstraint *_fullScreenButtonCenterXConstraint;
    NSLayoutConstraint *_splitViewButtonCenterXConstraint;
    NSLayoutConstraint *_slideOverButtonCenterXConstraint;
    NSLayoutConstraint *_centerWindowButtonCenterXConstraint;
    NSLayoutConstraint *_splitViewLeftButtonCenterXConstraint;
    NSLayoutConstraint *_splitViewRightButtonCenterXConstraint;
    NSLayoutConstraint *_dividerViewHeightConstraint;
    UIView *_pillMessageView;
    UIImageView *_messageImageView;
    UILabel *_messageTitleLabel;
    UILabel *_messageSubtitleLabel;
    SBFFluidBehaviorSettings *_expandAnimationSettings;
    SBFFluidBehaviorSettings *_collapseAnimationSettings;
    SBFFluidBehaviorSettings *_fastHideSplitViewButtonAnimationSettings;
    SBFFluidBehaviorSettings *_fastHideCenterWindowButtonAnimationSettings;
    long long _animationCount;
}

@property (class, readonly, nonatomic) double collapsedHitTestWidth;

@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) SBTopAffordanceDotsView *dotsView;
@property (readonly, nonatomic) UIView *pillContentsView;
@property (readonly, nonatomic) UIView *pillBackgroundContainerView;
@property (readonly, nonatomic) MTMaterialView *pillBackgroundView;
@property (readonly, nonatomic) MTMaterialView *captureOnlyPillBackgroundView;
@property (readonly, nonatomic) UIView *pillShadowView;
@property (readonly, nonatomic) SBTopAffordanceButton *fullScreenButton;
@property (readonly, nonatomic) SBTopAffordanceButton *slideOverButton;
@property (readonly, nonatomic) SBTopAffordanceButton *splitViewButton;
@property (readonly, nonatomic) SBTopAffordanceButton *centerWindowButton;
@property (readonly, nonatomic) SBTopAffordanceButton *splitViewLeftButton;
@property (readonly, nonatomic) SBTopAffordanceButton *splitViewRightButton;
@property (readonly, nonatomic) UIView *dividerView;
@property (retain, nonatomic) BSSpringAnimationSettings *styleSettings;
@property (nonatomic) double additionalTopInset;
@property (weak, nonatomic) id<SBTopAffordanceViewControllerDelegate> delegate;
@property (nonatomic) BOOL autoHides;
@property (nonatomic) long long topAffordanceMode;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAnimated:(BOOL)a0;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (void)viewDidLoad;
- (void)loadView;
- (void)setHidden:(BOOL)a0;
- (void)setOverrideUserInterfaceStyle:(long long)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)client:(id)a0 attentionLostTimeoutDidExpire:(double)a1 forConfigurationGeneration:(unsigned long long)a2 withAssociatedObject:(id)a3;
- (void)clientDidResetForUserAttention:(id)a0;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (BOOL)isHidden;
- (id)initWithDeviceApplicationSceneHandle:(id)a0;
- (void)transientUI:(id)a0 wasTappedToUnhideFromGestureRecognizer:(id)a1;
- (void)transientUI:(id)a0 wasIndirectPannedToDismissFromGestureRecognizer:(id)a1;
- (BOOL)transientUIHandledTouch:(id)a0 withSystemGestureRecognizer:(id)a1;
- (void)_setSystemPointerInteractionEnabled:(BOOL)a0;
- (void)_updateIdleTouchAwarenessClient;
- (long long)_calculatePresence;
- (void)_invalidateInitialAutoHideTime;
- (void)setHidden:(BOOL)a0 forReason:(id)a1 animated:(BOOL)a2;
- (void)_emitAnalyticsEventForMenuInteraction:(long long)a0;
- (void)setTopAffordanceMode:(long long)a0 animated:(BOOL)a1;
- (void)configureButtonsWithLayoutRole:(long long)a0 spaceConfiguration:(long long)a1 floatingConfiguration:(long long)a2 interfaceOrientation:(long long)a3 duration:(double)a4;
- (void)presentButtonsWithSelectedButtonType:(long long)a0 animated:(BOOL)a1;
- (void)presentTransientMessageWithImage:(id)a0 title:(id)a1 subtitle:(id)a2 duration:(double)a3 animated:(BOOL)a4;
- (void)_lockScreenUIDidLock:(id)a0;
- (id)_makeDotsView;
- (void)_updateDotsForTopAffordanceMode:(long long)a0 animated:(BOOL)a1;
- (void)_updateStyleForOverrideUserInterfaceStyle;
- (void)_loadPillSubviewsIfNeeded;
- (BOOL)_sceneSupportsCenterWindow;
- (void)_setTopAffordanceMode:(long long)a0 withSelectedButtonType:(long long)a1 animated:(BOOL)a2;
- (BOOL)_applicationIsInOrCanMoveToSplitViewFromLayoutRole:(long long)a0;
- (BOOL)_dismissIfNeededWithLocation:(struct CGPoint { double x0; double x1; })a0 window:(id)a1;
- (void)_unhideIfAutoHidden;
- (BOOL)_hasLoadedPillSubviews;
- (BOOL)_applicationSupportsMedusa;
- (BOOL)_primaryApplicationSupportsMedusa;
- (id)_makePillBackgroundViewCaptureOnly:(BOOL)a0;
- (id)_makePillShadowView;
- (id)_makePillBackgroundContainerView;
- (id)_makePillContentsView;
- (void)_topAffordanceButtonTapped:(id)a0;
- (id)_makeDividerView;
- (void)_loadPillBackgroundAndContentViews;
- (void)_loadPillButtonsView;
- (void)_loadPillMessageView;
- (void)_updatePillContentsIfNeededForCurrentTopAffordanceMode:(long long)a0 previousTopAffordanceMode:(long long)a1;
- (void)_updatePillForTopAffordanceMode:(long long)a0 animated:(BOOL)a1;
- (void)_updatePrimaryButtonsForTopAffordanceMode:(long long)a0 selectedButtonType:(long long)a1 animated:(BOOL)a2;
- (void)_updateChooseSplitButtonsForTopAffordanceMode:(long long)a0 animated:(BOOL)a1;
- (id)_animationSettingsForTopAffordanceMode:(long long)a0;
- (double)_dotsViewHorizontalOffsetForShowingCenterWindow;
- (void)_animateWithSettings:(id)a0 mode:(long long)a1 animations:(id /* block */)a2;
- (id)_animationSettingsForTransitionFromPresence:(long long)a0 toPresence:(long long)a1;
- (void)_updatePresence:(long long)a0 withAnimationSettings:(id)a1;
- (void)_updatePresence;

@end
