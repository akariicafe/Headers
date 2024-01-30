@class UIStackView, UIImageView, UIView, UILabel, NSLayoutConstraint;

@interface OBBulletedListItem : UIView

@property (retain, nonatomic) UIView *imageContainer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraintVertical;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraintHorizontal;

- (id)_titleFont;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 description:(id)a1 image:(id)a2;
- (BOOL)shouldLayoutVertically;
- (double)leadingMargins;
- (double)trailingMargins;
- (id)_textStyle;
- (id)_descriptionFont;
- (void)_updateImageViewLayout;
- (double)_horizontalMargins;
- (void)traitCollectionDidChange:(id)a0;
- (double)imageSizeForImage:(id)a0;

@end
