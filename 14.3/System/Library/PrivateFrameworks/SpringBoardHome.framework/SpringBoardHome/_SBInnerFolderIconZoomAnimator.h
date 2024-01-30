@class SBIconView, SBHFolderZoomSettings, SBFloatyFolderView;

@interface _SBInnerFolderIconZoomAnimator : SBIconZoomAnimator {
    SBFloatyFolderView *_folderView;
    SBIconView *_folderIconView;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _folderIconViewScaleTransform;
}

@property (retain, nonatomic) SBHFolderZoomSettings *settings;

- (void)_prepareAnimation;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (void)_animateToFraction:(double)a0 afterDelay:(double)a1 withSharedCompletion:(id /* block */)a2;
- (void)_applyIconCrossfadeForZoomFraction:(double)a0;
- (void)_setAnimationFraction:(double)a0;
- (void)_calculateZoomedOffset:(struct CGPoint { double x0; double x1; } *)a0 scale:(struct CGPoint { double x0; double x1; } *)a1 forIcon:(id)a2 withView:(id)a3;
- (id)initWithFolderController:(id)a0 iconView:(id)a1 iconZoomScaleDimension:(struct CGPoint { double x0; double x1; })a2;
- (void)_applyIconTransformForZoomFraction:(double)a0;
- (unsigned long long)_numberOfSignificantAnimations;

@end
