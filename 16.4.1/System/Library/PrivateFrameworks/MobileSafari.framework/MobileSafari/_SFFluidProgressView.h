@class UIColor, NSString, WBSFluidProgressState, UIView;
@protocol _SFFluidProgressViewDelegate;

@interface _SFFluidProgressView : UIView <WBSFluidProgressControllerDelegate> {
    UIView *_progressBar;
    UIView *_clippingView;
    WBSFluidProgressState *_state;
}

@property (nonatomic) BOOL progressAnimationSuppressed;
@property (weak, nonatomic) id<_SFFluidProgressViewDelegate> delegate;
@property (readonly, nonatomic, getter=isShowingProgress) BOOL showingProgress;
@property (retain, nonatomic) UIColor *progressBarFillColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL alignsToTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight;

- (void)setProgressAnimationSuppressed:(BOOL)a0 duringFluidProgressState:(id)a1 animated:(BOOL)a2;
- (void)fluidProgressController:(id)a0 setProgressToCurrentPosition:(id)a1;
- (void)setProgressToCurrentPositionForState:(id)a0;
- (void)fluidProgressControllerFinishProgressBar:(id)a0 animateFillFade:(BOOL)a1;
- (void)fluidProgressController:(id)a0 startFluidProgressBar:(id)a1 animateFillFade:(BOOL)a2;
- (void)_animateUsingDefaultTiming:(BOOL)a0 stepAnimationTime:(double)a1 options:(unsigned long long)a2 animations:(id /* block */)a3 completion:(id /* block */)a4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)fluidProgressController:(id)a0 suppressProgressAnimation:(BOOL)a1 duringFluidProgressState:(id)a2 animated:(BOOL)a3;
- (void)_finishProgressBarWithDuration:(double)a0;
- (void)layoutSubviews;
- (void)fluidProgressController:(id)a0 updateFluidProgressBar:(id)a1 completion:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_progressBarBoundsForValue:(double)a0;
- (void).cxx_destruct;
- (void)setAlignToTop:(BOOL)a0;

@end
