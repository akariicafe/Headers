@class SXContainerComponentView;

@interface SXParallaxScaleSceneAnimationHandler : SXSceneComponentAnimationHandler

@property (weak, nonatomic) SXContainerComponentView *headerComponent;
@property (nonatomic) unsigned long long attachmentType;

- (void).cxx_destruct;
- (void)prepareAnimation;
- (void)updateAnimationWithFactor:(double)a0;
- (BOOL)shouldFinishAtEndOfScrollView;
- (double)factorForVisibileBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andAbsoluteComponentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)ensureScalabilityOfHeaderComponentFill;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fillContentFrameForScale:(double)a0 andTranslation:(double)a1;

@end
