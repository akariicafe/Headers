@class SBFolderController, NSString, NSArray, UIView, SBHCenterZoomSettings;
@protocol SBDockOffscreenFractionModifying;

@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate, SBIconListModelObserver> {
    UIView *_folderView;
    double _iconZoomedZ;
    NSArray *_extraViewsContainers;
    NSArray *_extraViews;
}

@property (retain, nonatomic) id<SBDockOffscreenFractionModifying> dockOffscreenFractionModifier;
@property (readonly, nonatomic) UIView *zoomView;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } cameraPosition;
@property (readonly, nonatomic) double centerRow;
@property (readonly, nonatomic) double centerCol;
@property (readonly, nonatomic) BOOL animatingIcons;
@property (readonly, nonatomic) SBFolderController *folderController;
@property (retain, nonatomic) SBHCenterZoomSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)_iconZoomDelay;
- (void)_prepareAnimation;
- (id)_animationFactoryForFolderView;
- (id)_animationFactoryForIcon:(id)a0;
- (void)_cleanupAnimationIncludingDock:(BOOL)a0;
- (id)initWithFolderController:(id)a0;
- (void)_positionView:(id)a0 forIcon:(id)a1;
- (void)iconList:(id)a0 didAddIcon:(id)a1;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (void)_updateDockForFraction:(double)a0;
- (void)_setAnimationFraction:(double)a0;
- (void)iconList:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;
- (struct CGPoint { double x0; double x1; })iconListView:(id)a0 originForIconCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a1 metrics:(id)a2 proposedOrigin:(struct CGPoint { double x0; double x1; })a3;
- (void)_calculateCentersAndCameraPosition;
- (void)_calculateCenters;
- (id)_animationFactoryForDock;
- (double)_zPositionForView:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 andFraction:(double)a2;
- (void)setFraction:(double)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (void)_setAnimationFraction:(double)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)_numberOfSignificantAnimations;

@end
