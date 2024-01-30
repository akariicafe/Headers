@class UIView, UIImageView, PGBackdropView;

@interface PGStashView : UIView {
    PGBackdropView *_backdropView;
    UIView *_lightTintView;
    UIView *_darkTintView;
    UIImageView *_leftChevron;
    UIImageView *_rightChevron;
    BOOL _chevronsHidden;
    BOOL _isChevronShownLeft;
}

@property (nonatomic) double blurProgress;
@property (nonatomic) double stashedTabWidth;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)setChevronHidden:(BOOL)a0 left:(BOOL)a1;
- (void)resetChevronState;
- (void)layoutStashChevrons;

@end
