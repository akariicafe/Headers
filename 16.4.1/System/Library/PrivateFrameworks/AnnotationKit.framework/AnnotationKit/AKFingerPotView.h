@class UIImageView, UIImage;

@interface AKFingerPotView : UIButton

@property (retain, nonatomic) UIImageView *selectedOutline;
@property (retain, nonatomic) UIImageView *highlight;
@property (retain, nonatomic) UIImage *menuImage;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
