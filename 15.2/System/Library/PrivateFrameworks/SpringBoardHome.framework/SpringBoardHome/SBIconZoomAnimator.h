@class SBHIconZoomSettings, NSSet, NSString, NSMapTable, SBIconListModel, SBIconListView, SBHIconModel;
@protocol SBIconZoomAnimationContaining;

@interface SBIconZoomAnimator : SBIconAnimator <SBIconIndexNodeObserver> {
    NSMapTable *_listIconToViewMap;
    NSMapTable *_dockIconToViewMap;
    SBIconListModel *_iconListModel;
    SBHIconModel *_iconModel;
    double _startTime;
}

@property (readonly, nonatomic) id<SBIconZoomAnimationContaining> animationContainer;
@property (readonly, nonatomic) SBIconListView *iconListView;
@property (readonly, nonatomic) SBIconListView *dockListView;
@property (retain, nonatomic) NSSet *criticalIconNodeIdentifiers;
@property (readonly, nonatomic) double startTime;
@property (retain, nonatomic) SBHIconZoomSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_animateToFraction:(double)a0 afterDelay:(double)a1 withSharedCompletion:(id /* block */)a2;
- (void)enumerateIconsAndIconViewsWithHandler:(id /* block */)a0;
- (void)_setDockListView:(id)a0;
- (void)_iconModelDidReload:(id)a0;
- (void)_clearObservers;
- (BOOL)isPastPointOfNoReturn;
- (void)_iconModelDidRelayout:(id)a0;
- (void)cleanupZoom;
- (unsigned long long)listIconCount;
- (void)node:(id)a0 didRemoveContainedNodeIdentifiers:(id)a1;
- (void)_cleanupAnimation;
- (unsigned long long)dockIconCount;
- (void)_setIconListView:(id)a0;
- (id)iconViewForIcon:(id)a0;
- (void).cxx_destruct;
- (void)_applyLabelAlphaFraction:(double)a0;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)nodeDidMoveContainedNodes:(id)a0;
- (void)_cleanupZoom;
- (id)initWithAnimationContainer:(id)a0;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (void)dealloc;
- (void)_prepareAnimation;
- (void)node:(id)a0 didAddContainedNodeIdentifiers:(id)a1;
- (void)_invalidateAnimationForSignificantIconModelChangesForReason:(id)a0;
- (void)_setAnimationFraction:(double)a0;

@end
