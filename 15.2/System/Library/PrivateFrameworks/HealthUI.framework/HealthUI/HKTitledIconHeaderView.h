@class UIColor, NSString, UIImageView, UIImage, UILabel;

@interface HKTitledIconHeaderView : UIView {
    NSString *_titleTextStyle;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) UIColor *iconImageTint;
@property (nonatomic) BOOL centersSubtitle;
@property (nonatomic) BOOL prefersLargeTitle;

- (void)layoutSubviews;
- (id)_titleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateFont;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setLayoutMarginsWithTableView:(id)a0;
- (id)_healthIconImage;
- (struct CGSize { double x0; double x1; })_sizeThatFitsLabel:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (double)_verticalOffsetForTitle;
- (void)_positionSubtitleLabel;
- (double)_verticalOffsetForSubtitle;

@end
