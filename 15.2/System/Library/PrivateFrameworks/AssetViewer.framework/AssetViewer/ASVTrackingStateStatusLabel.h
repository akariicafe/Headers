@class ASVBlurredBackgroundView, NSString, UILabel, NSLayoutConstraint;

@interface ASVTrackingStateStatusLabel : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) ASVBlurredBackgroundView *blurredBackgroundView;
@property (retain, nonatomic) NSLayoutConstraint *viewWidthConstraint;
@property (nonatomic) long long controlStyle;
@property (retain, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 controlStyle:(long long)a1;

@end
