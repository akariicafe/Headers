@class SBHFolderZoomSettings, NSString, SBFolderController, SBFloatyFolderView, SBFFluidBehaviorSettings, SBFolderIcon, SBSearchGesture, _SBInnerFolderIconZoomAnimator, SBIconView;

@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator <SBSearchGestureObserver> {
    SBFolderController *_innerFolderController;
    SBFloatyFolderView *_innerFolderView;
    _SBInnerFolderIconZoomAnimator *_innerZoomAnimator;
}

@property (retain, nonatomic) SBSearchGesture *searchGesture;
@property (nonatomic) BOOL isAnimatingInFloatingDock;
@property (retain, nonatomic) SBHFolderZoomSettings *settings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *dockAnimationSettings;
@property (readonly, nonatomic) SBFolderIcon *targetIcon;
@property (readonly, nonatomic) SBIconView *targetIconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchGesture:(id)a0 changedPercentComplete:(double)a1;
- (void)_prepareAnimation;
- (BOOL)shouldMatchMoveWithDock;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (id)_referenceFolderIconView;
- (void)_setupMatchMoveWithDock;
- (void)_setupMatchMoveWithDockWithTargetIconCenter:(struct CGPoint { double x0; double x1; })a0 targetIconAnchor:(struct CGPoint { double x0; double x1; })a1;
- (void)_setAnimationFraction:(double)a0;
- (void)_setupMatchMoveAnimation;
- (BOOL)_forceSquareZoomDimension;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomedFrame;
- (id)targetIconView;
- (id)defaultTargetIconContainerView;
- (void)_setupCounterDockMatchMoveAnimationWithOffset:(double)a0 layer:(id)a1 additive:(BOOL)a2;
- (void)searchGesture:(id)a0 startedShowing:(BOOL)a1;
- (void)_updateDockMatchMoveWithFraction:(double)a0;
- (id)initWithAnimationContainer:(id)a0 innerFolderController:(id)a1 folderIcon:(id)a2;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (unsigned long long)_numberOfSignificantAnimations;

@end
