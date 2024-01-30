@class _TVImageView, VUILabel, VUIConfirmationCardLayout, UIView, UIVisualEffectView;

@interface VUIConfirmationCardView : UIView

@property (retain, nonatomic) VUIConfirmationCardLayout *layout;
@property (retain, nonatomic) VUILabel *textLabel;
@property (retain, nonatomic) _TVImageView *badgeView;
@property (retain, nonatomic) UIView *cardView;
@property (readonly, nonatomic) UIVisualEffectView *backdropView;

- (void).cxx_destruct;
- (void)_configureSubviews;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
