@class SXComponentView, UIView;

@interface SXParallaxFadeSceneAnimationHandler : SXSceneComponentAnimationHandler

@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) SXComponentView *headerComponentView;
@property (nonatomic) double scrollDistance;
@property (nonatomic) double alphaDistance;
@property (nonatomic) unsigned long long attachmentType;

- (void)startAnimation;
- (void).cxx_destruct;
- (void)prepareAnimation;
- (void)updateAnimationWithFactor:(double)a0;
- (void)finishAnimation;
- (id)componentViewToAnimate;
- (BOOL)shouldFinishAtEndOfScrollView;
- (double)factorForVisibileBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andAbsoluteComponentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
