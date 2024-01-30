@class UILabel, SKUICellImageView;

@interface _SKUIItemBrowseCellContentView : UIView

@property (retain, nonatomic) UILabel *indexNumberLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *userRatingLabel;
@property (retain, nonatomic) SKUICellImageView *userRatingImageView;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
