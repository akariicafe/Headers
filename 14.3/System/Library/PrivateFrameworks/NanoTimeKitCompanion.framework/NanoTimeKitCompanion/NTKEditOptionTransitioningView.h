@class NTKEditOption, UIImageView, UIView;
@protocol NTKEditOptionTransitioningViewDelegate;

@interface NTKEditOptionTransitioningView : UIView {
    UIView *_transitionContainer;
    UIView *_transitionDimmingView;
    double _breathScaleModifier;
    double _rubberBandScaleModifier;
    UIImageView *_toTransitionImageView;
    UIImageView *_fromTransitionImageView;
}

@property (retain, nonatomic) NTKEditOption *toEditOption;
@property (retain, nonatomic) NTKEditOption *fromEditOption;
@property (weak, nonatomic) id<NTKEditOptionTransitioningViewDelegate> delegate;

- (void).cxx_destruct;
- (void)didAddSubview:(id)a0;
- (void)setOption:(id)a0;
- (void)setDimmingAlpha:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateUnifiedScaleTransform;
- (void)_resetTransitionImageView:(id)a0;
- (void)setBreatheFraction:(double)a0;
- (void)setRubberBandingFraction:(double)a0;
- (void)setTransitionFraction:(double)a0 fromOption:(id)a1 toOption:(id)a2;

@end
