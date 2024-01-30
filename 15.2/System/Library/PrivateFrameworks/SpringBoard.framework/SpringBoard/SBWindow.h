@class NSMutableSet, NSString, SBFTraitsParticipant, UIView, SBRecycledViewsContainer, SBUICoronaAnimationController;
@protocol SBWindowLayoutStrategy;

@interface SBWindow : SBFWindow <PTSettingsKeyObserver, SBMainDisplayInterfaceOrientationSource, SBRecycledViewsContainerProviding, SBWindowLayoutStrategyObserving> {
    SBUICoronaAnimationController *_coronaAnimationController;
    SBRecycledViewsContainer *_recycledViewsContainerView;
    BOOL _requestedHiddenValue;
    NSMutableSet *_additionalHiddenReasons;
}

@property (readonly, nonatomic) id<SBWindowLayoutStrategy> layoutStrategy;
@property (readonly, nonatomic) SBFTraitsParticipant *traitsParticipant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long activeInterfaceOrientation;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) double orientationSourceLevel;
@property (readonly, copy, nonatomic) NSString *orientationSourceDescription;
@property (readonly, nonatomic) UIView *recycledViewsContainer;

+ (BOOL)sb_autorotates;
+ (id)defaultLayoutStrategy;
+ (BOOL)sb_disableStatusBarHeightChanges;

- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)handleStatusBarChangeFromHeight:(double)a0 toHeight:(double)a1;
- (id)initWithDebugName:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)makeKeyAndVisible;
- (void)setHidden:(BOOL)a0;
- (id)initWithScreen:(id)a0 scene:(id)a1 rootViewController:(id)a2 layoutStrategy:(id)a3 role:(id)a4 debugName:(id)a5;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setAutorotates:(BOOL)a0 forceUpdateInterfaceOrientation:(BOOL)a1;
- (void)dealloc;
- (BOOL)_shouldResizeWithScene;
- (id)sb_coronaAnimationController;
- (id)initWithScreen:(id)a0 role:(id)a1 debugName:(id)a2;
- (id)initWithScreen:(id)a0 rootViewController:(id)a1 role:(id)a2 debugName:(id)a3;
- (void)_setTraitsParticipant:(id)a0;
- (id)initWithScreen:(id)a0 scene:(id)a1 layoutStrategy:(id)a2 role:(id)a3 debugName:(id)a4;
- (id)initWithScreen:(id)a0 layoutStrategy:(id)a1 role:(id)a2 debugName:(id)a3;
- (void)_willEnableSecureRendering:(id)a0;
- (void)_didDisableSecureRendering:(id)a0;
- (void)_updateHidingForSecureRendering:(BOOL)a0;
- (void)_listenForTraitsArbiterPreferenceChangesIfNeeded;
- (void)_updateRealIsHidden;
- (void)_sb_updateAutorotatesFlagAndForceInterfaceOrientationUpdate:(BOOL)a0;
- (void)sb_updateAutorotatesFlag;
- (void)_addHiddenReason:(id)a0;
- (void)_removeHiddenReason:(id)a0;
- (void)layoutStrategyFrameOnScreenDidChange:(id)a0;
- (id)_traitsParticipant;
- (void)setAlphaAndObeyBecauseIAmTheWindowManager:(double)a0;

@end
