@class UIView, SBHCrossfadeZoomSettings;

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator {
    UIView *_crossfadeView;
}

@property (retain, nonatomic) SBHCrossfadeZoomSettings *settings;
@property (nonatomic) BOOL performsTrueCrossfade;
@property (nonatomic) BOOL masksCorners;

- (void)_prepareAnimation;
- (void)_delayedForRotation;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (double)maxHomeScreenZoomScale;
- (double)_appSnapshotCornerRadiusForFraction:(double)a0;
- (BOOL)fadesHomeScreen;
- (void)_setAnimationFraction:(double)a0;
- (void)_assertCrossfadeViewSizeIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomedFrame;
- (struct CGPoint { double x0; double x1; })_zoomedIconCenter;
- (void)_cleanupZoom;
- (id)initWithFolderController:(id)a0 crossfadeView:(id)a1 icon:(id)a2;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (unsigned long long)_numberOfSignificantAnimations;

@end
