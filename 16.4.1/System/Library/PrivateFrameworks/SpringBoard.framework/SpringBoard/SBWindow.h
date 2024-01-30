@class NSMutableSet, NSString, SBFTraitsParticipant, UIView, SBRecycledViewsContainer, SBUICoronaAnimationController;
@protocol SBWindowLayoutStrategy;

@interface SBWindow : SBFWindow <SBMainDisplayInterfaceOrientationSource, SBRecycledViewsContainerProviding, SBWindowLayoutStrategyObserving> {
    SBUICoronaAnimationController *_coronaAnimationController;
    SBRecycledViewsContainer *_recycledViewsContainerView;
    BOOL _requestedHiddenValue;
    NSMutableSet *_additionalHiddenReasons;
}

@property (readonly, nonatomic) id<SBWindowLayoutStrategy> layoutStrategy;
@property (readonly, nonatomic) SBFTraitsParticipant *traitsParticipant;
@property (readonly, nonatomic) long long activeInterfaceOrientation;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) double orientationSourceLevel;
@property (readonly, copy, nonatomic) NSString *orientationSourceDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *recycledViewsContainer;

+ (BOOL)sb_autorotates;
+ (id)defaultLayoutStrategy;
+ (BOOL)sb_disableStatusBarHeightChanges;

- (void)handleStatusBarChangeFromHeight:(double)a0 toHeight:(double)a1;
- (BOOL)_shouldResizeWithScene;
- (id)initWithWindowScene:(id)a0 rootViewController:(id)a1 layoutStrategy:(id)a2 role:(id)a3 debugName:(id)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)makeKeyAndVisible;
- (void)setAutorotates:(BOOL)a0 forceUpdateInterfaceOrientation:(BOOL)a1;
- (id)initWithWindowScene:(id)a0 role:(id)a1 debugName:(id)a2;
- (id)sb_coronaAnimationController;
- (void)_addHiddenReason:(id)a0;
- (void)_didDisableSecureRendering:(id)a0;
- (void)_removeHiddenReason:(id)a0;
- (void)_sb_updateAutorotatesFlagAndForceInterfaceOrientationUpdate:(BOOL)a0;
- (void)_setTraitsParticipant:(id)a0;
- (id)_traitsParticipant;
- (void)_updateHidingForSecureRendering:(BOOL)a0;
- (void)_updateRealIsHidden;
- (void)_willEnableSecureRendering:(id)a0;
- (id)initWithWindowScene:(id)a0 layoutStrategy:(id)a1 role:(id)a2 debugName:(id)a3;
- (id)initWithWindowScene:(id)a0 rootViewController:(id)a1 role:(id)a2 debugName:(id)a3;
- (void)layoutStrategyFrameOnScreenDidChange:(id)a0;
- (void)moveToWindowSceneIfNeeded:(id)a0;
- (void)sb_updateAutorotatesFlag;
- (void)setAlphaAndObeyBecauseIAmTheWindowManager:(double)a0;

@end
