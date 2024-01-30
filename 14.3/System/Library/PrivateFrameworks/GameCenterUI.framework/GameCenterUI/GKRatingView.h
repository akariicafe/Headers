@class UIImageView, NSLayoutConstraint;

@interface GKRatingView : UIView

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *foregroundImageView;
@property (retain, nonatomic) NSLayoutConstraint *foregroundWidthConstraint;
@property (nonatomic) double value;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)dealloc;
- (void)awakeFromNib;
- (void)commonSetup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
