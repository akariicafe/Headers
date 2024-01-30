@class UIMenu, NSString, SBDeviceApplicationSceneHandle, UIAction, BSSpringAnimationSettings, SBTopAffordanceDotsView, UIImageSymbolConfiguration, SBAffordancePresenceController;
@protocol SBTopAffordanceViewControllerDelegate;

@interface SBTopAffordanceViewController : UIViewController <SBAffordancePresenceControllerDelegate, SBTopAffordanceDotsViewDelegate, SBTransientUITapToDismissParticipant, SBTransientUIIndirectPanToDismissParticipant> {
    BOOL _override_multipleSwitcherControllersAvailable;
    BOOL _override_layoutStatePrimaryApplicationSupportsMedusa;
    BOOL _isSystemPointerInteractionEnabled;
    SBAffordancePresenceController *_affordancePresenceController;
}

@property (class, readonly, nonatomic) UIImageSymbolConfiguration *symbolConfiguration;

@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (readonly, nonatomic) SBTopAffordanceDotsView *dotsView;
@property (readonly, nonatomic) UIAction *maximizationAction;
@property (readonly, nonatomic) UIAction *addToSetAction;
@property (readonly, nonatomic) UIAction *removeFromSetAction;
@property (readonly, nonatomic) UIAction *moveToDisplayAction;
@property (readonly, nonatomic) UIAction *closeAction;
@property (readonly, nonatomic) UIAction *fullScreenAction;
@property (readonly, nonatomic) UIAction *splitViewAction;
@property (readonly, nonatomic) UIMenu *splitViewMenu;
@property (readonly, nonatomic) UIAction *slideOverAction;
@property (readonly, nonatomic) UIAction *primarySplitAction;
@property (readonly, nonatomic) UIAction *sideSplitAction;
@property (readonly, nonatomic) UIMenu *menu;
@property (retain, nonatomic) BSSpringAnimationSettings *styleSettings;
@property (nonatomic) double additionalTopInset;
@property (weak, nonatomic) id<SBTopAffordanceViewControllerDelegate> delegate;
@property (nonatomic) BOOL autoHides;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (readonly, nonatomic, getter=isExpanded) BOOL expanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageForAction:(long long)a0 interfaceOrientation:(long long)a1;
+ (id)landscapeImageNameForAction:(long long)a0;
+ (id)portraitImageNameForAction:(long long)a0;

- (id)_switcherController;
- (BOOL)shouldAutorotate;
- (void)affordancePresenceController:(id)a0 didChangeToPresence:(long long)a1;
- (void)dismissAnimated:(BOOL)a0;
- (void)setOverrideUserInterfaceStyle:(long long)a0;
- (void)setHidden:(BOOL)a0;
- (BOOL)isHidden;
- (id)initWithDeviceApplicationSceneHandle:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_setSystemPointerInteractionEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)_applicationIsInOrCanMoveToSplitViewFromLayoutRole:(long long)a0;
- (BOOL)_applicationSupportsAnyAffordanceActions;
- (BOOL)_applicationSupportsMedusa;
- (double)_defaultCenterYOffset;
- (BOOL)_dismissIfNeededWithLocation:(struct CGPoint { double x0; double x1; })a0 window:(id)a1;
- (void)_emitAnalyticsEventForMenuInteraction:(long long)a0;
- (BOOL)_isChamoisWindowingUIEnabled;
- (BOOL)_layoutStatePrimaryApplicationSupportsMedusa;
- (id)_localizedMenuTitleForKey:(id)a0;
- (void)_lockScreenUIDidLock:(id)a0;
- (id)_makeDotsView;
- (id)_makePillBackgroundContainerView;
- (id)_makePillContentsView;
- (BOOL)_multipleSwitcherControllersAvailable;
- (void)_setLayoutStatePrimaryApplicationSupportsMedusa:(BOOL)a0;
- (void)_setMultipleSwitcherControllersAvailable:(BOOL)a0;
- (void)_updateStyleForOverrideUserInterfaceStyle;
- (void)setHidden:(BOOL)a0 forReason:(id)a1 animated:(BOOL)a2;
- (void)topAffordanceDotsViewWillDismissMenu:(id)a0;
- (void)topAffordanceDotsViewWillPresentMenu:(id)a0;
- (void)transientUI:(id)a0 wasIndirectPannedToDismissFromGestureRecognizer:(id)a1;
- (BOOL)transientUIHandledTouch:(id)a0 withSystemGestureRecognizer:(id)a1;
- (void)updateContextMenuWithLayoutRole:(long long)a0 spaceConfiguration:(long long)a1 floatingConfiguration:(long long)a2 interfaceOrientation:(long long)a3 isZoomed:(BOOL)a4;

@end
