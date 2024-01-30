@class UIView, NSString, SBIconListView, CADisplayLink, SBHRippleSimulation, _UIPortalView, SBHWidgetSettings, SBIconView, NSMapTable, SBWidgetIcon;

@interface SBHWidgetInsertionRippleIconAnimator : NSObject <SBIconViewObserver> {
    SBIconListView *_iconListView;
    SBIconView *_referenceIconView;
    struct CGPoint { double x; double y; } _referenceIconViewOriginInWindow;
    SBWidgetIcon *_widgetIcon;
    SBIconView *_widgetIconView;
    BOOL _widgetIconSizeIsLarge;
    SBIconListView *_additionalIconListView;
    UIView *_rippleIconsPortalContainerView;
    UIView *_rippleIconsPortalContainerViewForAdditionalIconListView;
    NSMapTable *_portalViewsForIconViews;
    NSMapTable *_gridCoordinateForIcons;
    UIView *_portalContainerView;
    _UIPortalView *_widgetIconPortalView;
    SBHWidgetSettings *_settings;
    BOOL _startedAnimation;
    SBHRippleSimulation *_rippleSimulation;
    unsigned long long _rowOffset;
    CADisplayLink *_displayLink;
    id /* block */ _animationCompletion;
    id /* block */ _preludeBlock;
}

@property (nonatomic) BOOL keepsJumpingIconAboveListViewAsLongAsPossible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iconViewWasRecycled:(id)a0;
- (void)_displayLinkFired:(id)a0;
- (void)iconViewWasDiscarded:(id)a0;
- (void)iconViewDidBecomeWindowless:(id)a0;
- (void).cxx_destruct;
- (void)animateWithCompletion:(id /* block */)a0;
- (id)initWithIconListView:(id)a0 widgetIcon:(id)a1 referenceLayout:(id)a2 referenceIconView:(id)a3 additionalIconListView:(id)a4 preludeBlock:(id /* block */)a5;
- (void)_performJumpAnimationWithCompletion:(id /* block */)a0;
- (void)_performWidgetIconScaleOvershootAnimation;
- (void)_playImpactHapticAfterDelay:(double)a0;
- (void)_startRippleAnimationWithDelay:(double)a0;
- (void)_finishRippleAnimationEarlyForIconView:(id)a0;
- (struct CGPoint { double x0; double x1; })_centerOfIconViewAssumingCenteredAnchorPoint:(id)a0;
- (void)_createPortalViewsForIconViewsInIconListView:(id)a0 dropIconListView:(id)a1 withPortalContainerView:(id)a2 widgetIconCenter:(struct CGPoint { double x0; double x1; })a3;
- (void)_startRippleAnimationNow;
- (void)_createPortalViewsForIconViews;
- (void)_layoutRippleIconViews;
- (void)_finishRippleAnimation;
- (void)_reparentPortalViewIntoIconListViewAfterDelay:(double)a0;
- (void)_reparentPortalViewIntoIconListViewNow;

@end
