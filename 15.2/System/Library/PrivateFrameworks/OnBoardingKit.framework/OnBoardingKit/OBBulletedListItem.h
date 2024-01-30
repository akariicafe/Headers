@class UIStackView, UIImageView, UILabel, NSLayoutConstraint;

@interface OBBulletedListItem : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraintVertical;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraintHorizontal;

- (id)_descriptionFont;
- (double)leadingMargins;
- (id)_textStyle;
- (id)_titleFont;
- (double)imageSizeForImage:(id)a0;
- (double)_horizontalMargins;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithTitle:(id)a0 description:(id)a1 image:(id)a2 tintColor:(id)a3;
- (BOOL)shouldLayoutVertically;
- (void)_updateImageViewLayout;
- (double)trailingMargins;

@end
