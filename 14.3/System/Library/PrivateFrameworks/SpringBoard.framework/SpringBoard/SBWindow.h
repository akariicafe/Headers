@class NSString, NSMutableSet, UIView, SBRecycledViewsContainer, SBUICoronaAnimationController;
@protocol SBWindowLayoutStrategy;

@interface SBWindow : SBFWindow <SBMainDisplayInterfaceOrientationSource, SBRecycledViewsContainerProviding, SBWindowLayoutStrategyObserving> {
    SBUICoronaAnimationController *_coronaAnimationController;
    SBRecycledViewsContainer *_recycledViewsContainerView;
    BOOL _requestedHiddenValue;
    NSMutableSet *_additionalHiddenReasons;
}

@property (readonly, nonatomic) id<SBWindowLayoutStrategy> layoutStrategy;
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

- (BOOL)_shouldResizeWithScene;
- (void)handleStatusBarChangeFromHeight:(double)a0 toHeight:(double)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setAutorotates:(BOOL)a0 forceUpdateInterfaceOrientation:(BOOL)a1;
- (void)setHidden:(BOOL)a0;
- (id)sb_coronaAnimationController;
- (void)makeKeyAndVisible;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_initWithScreen:(id)a0 layoutStrategy:(id)a1 debugName:(id)a2 rootViewController:(id)a3 scene:(id)a4;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithScreen:(id)a0 debugName:(id)a1;
- (id)initWithScreen:(id)a0 debugName:(id)a1 rootViewController:(id)a2;
- (id)initWithScreen:(id)a0 layoutStrategy:(id)a1 debugName:(id)a2 scene:(id)a3;
- (id)initWithScreen:(id)a0 layoutStrategy:(id)a1 debugName:(id)a2;
- (void)_willEnableSecureRendering:(id)a0;
- (void)_didDisableSecureRendering:(id)a0;
- (void)_updateHidingForSecureRendering:(BOOL)a0;
- (void)_updateRealIsHidden;
- (void)_addHiddenReason:(id)a0;
- (void)_removeHiddenReason:(id)a0;
- (void)layoutStrategyFrameOnScreenDidChange:(id)a0;
- (void)setAlphaAndObeyBecauseIAmTheWindowManager:(double)a0;

@end
