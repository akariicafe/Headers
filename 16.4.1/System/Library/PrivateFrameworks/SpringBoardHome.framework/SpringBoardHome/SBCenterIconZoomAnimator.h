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

- (void)_updateDockForFraction:(double)a0;
- (id)_animationFactoryForIcon:(id)a0;
- (void)_calculateCenters;
- (void)_cleanupAnimationIncludingDock:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })iconListView:(id)a0 centerForIconCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a1 metrics:(id)a2 proposedCenter:(struct CGPoint { double x0; double x1; })a3;
- (id)initWithFolderController:(id)a0;
- (id)_animationFactoryForFolderView;
- (void)_setAnimationFraction:(double)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)setFraction:(double)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;
- (double)_iconZoomDelay;
- (void)_positionView:(id)a0 forIcon:(id)a1;
- (double)_zPositionForView:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 andFraction:(double)a2;
- (void)_calculateCentersAndCameraPosition;
- (id)_animationFactoryForDock;
- (struct CGPoint { double x0; double x1; })iconListView:(id)a0 originForIconCoordinate:(struct SBIconCoordinate { long long x0; long long x1; })a1 metrics:(id)a2 proposedOrigin:(struct CGPoint { double x0; double x1; })a3;
- (void)iconList:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;
- (void)iconList:(id)a0 didAddIcon:(id)a1;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)a0;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_cleanupAnimation;

@end
