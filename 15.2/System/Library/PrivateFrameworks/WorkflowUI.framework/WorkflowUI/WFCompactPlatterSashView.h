@class NSString, UIImageView, UIVisualEffectView, UILabel, UIImage;

@interface WFCompactPlatterSashView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *icon;
@property (readonly, nonatomic) double contentBaseline;

+ (id)font;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
