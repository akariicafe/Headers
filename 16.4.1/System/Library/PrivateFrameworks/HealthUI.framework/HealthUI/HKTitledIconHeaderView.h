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

- (id)_titleFont;
- (void)_updateFont;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_healthIconImage;
- (void)_positionSubtitleLabel;
- (struct CGSize { double x0; double x1; })_sizeThatFitsLabel:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (double)_verticalOffsetForSubtitle;
- (double)_verticalOffsetForTitle;
- (void)setLayoutMarginsWithTableView:(id)a0;

@end
