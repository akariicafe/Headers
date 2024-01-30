@class UIImageView, UIVisualEffectView;
@protocol SiriUIAcousticIDSpinnerDelegate;

@interface SiriUIAcousticIDSpinner : UIView {
    UIImageView *_musicNoteView;
    UIImageView *_spinnerView;
    UIVisualEffectView *_vibrancyView;
}

@property (weak, nonatomic) id<SiriUIAcousticIDSpinnerDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)isShowing;
- (void)animateIn;
- (void)animateOut;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_imageForSpinner;
- (id)_spinningAnimation;

@end
