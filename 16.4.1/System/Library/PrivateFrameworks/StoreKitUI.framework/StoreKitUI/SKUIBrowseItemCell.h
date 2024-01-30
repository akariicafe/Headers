@class NSString, UIImageView, UIImage, UILabel, UIView;

@interface SKUIBrowseItemCell : UICollectionViewCell {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_borderView;
    UIView *_topBorderView;
    UIImageView *_decorationImageView;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *decorationImage;
@property (nonatomic) BOOL showTopBorder;
@property (nonatomic) BOOL hasBlueBackgroundWhenSelected;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_reloadHighlightState;

@end
