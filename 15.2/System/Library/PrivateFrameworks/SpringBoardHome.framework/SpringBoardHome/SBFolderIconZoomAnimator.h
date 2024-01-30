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
- (BOOL)_forceSquareZoomDimension;
- (id)initWithAnimationContainer:(id)a0 innerFolderController:(id)a1 folderIcon:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomedFrame;
- (BOOL)shouldMatchMoveWithDock;
- (void)_setupMatchMoveWithDock;
- (void)_setupCounterDockMatchMoveAnimationWithOffset:(double)a0 layer:(id)a1 additive:(BOOL)a2;
- (void)searchGesture:(id)a0 startedShowing:(BOOL)a1;
- (void)_setupMatchMoveWithDockWithTargetIconCenter:(struct CGPoint { double x0; double x1; })a0 targetIconAnchor:(struct CGPoint { double x0; double x1; })a1;
- (id)_referenceFolderIconView;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (id)defaultTargetIconContainerView;
- (void)_setupMatchMoveAnimation;
- (void)_updateDockMatchMoveWithFraction:(double)a0;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (void)_prepareAnimation;
- (id)targetIconView;
- (void)_setAnimationFraction:(double)a0;

@end
