@class UIProgressView, _UIBackdropView, NSDateComponentsFormatter, UIView, UILabel, UIButton;

@interface PLProgressView : UIView {
    UIButton *_cancelButton;
    UILabel *_labelView;
    UIProgressView *_progressView;
    UIView *_topDivider;
    unsigned char _didLayout : 1;
    unsigned char _didSetPermanantTextOnLabelView : 1;
    NSDateComponentsFormatter *_timeRemainingFormatter;
}

@property (nonatomic) long long backgroundType;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *backgroundTintedView;
@property (retain, nonatomic) _UIBackdropView *backgroundBlurredView;
@property (nonatomic) float percentComplete;
@property (nonatomic) BOOL showsCancelButton;
@property (copy, nonatomic) id /* block */ cancelationHandler;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setLabelText:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_cancel:(id)a0;
- (void)updateUIForPublishingAgent:(id)a0;
- (void)_installBackgroundBlurredView;
- (void)_installBackgroundTintedView;
- (void)_installBackgroundView;
- (void)_removeBackgroundBlurredView;
- (void)_removeBackgroundTintedView;
- (void)_syncToBackgroundType;

@end
