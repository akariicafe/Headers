@class SBHCenterAppZoomSettings, UIView, NSMutableArray, SBReversibleLayerPropertyAnimator;

@interface SBCenterAppIconZoomAnimator : SBCenterIconZoomAnimator {
    UIView *_appView;
    UIView *_appZoomView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _destinationFrame;
    unsigned char _testCompletionCount;
}

@property (retain, nonatomic) SBReversibleLayerPropertyAnimator *appZoomAnimator;
@property (retain, nonatomic) NSMutableArray *animationCompletions;
@property (retain, nonatomic) SBHCenterAppZoomSettings *settings;
@property double distantScale;

- (void)_delayedForRotation;
- (double)_iconZoomDelay;
- (struct CGPoint { double x0; double x1; })cameraPosition;
- (id)initWithFolderController:(id)a0 appView:(id)a1;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_translateAppForZoomFraction:(double)a0;
- (double)_appZoomDelay;
- (void)_prepareAnimation;
- (double)_appZPositionForZoomFraction:(double)a0;
- (void)_fadeAppForZoomFraction:(double)a0;
- (void)_zoomAppForZoomFraction:(double)a0;
- (void)_setAnimationFraction:(double)a0;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (void).cxx_destruct;
- (void)_cleanupAnimation;

@end
