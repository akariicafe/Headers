@class TVImageLayout, _TVMonogramView, VUILabel, UIView, VUIFocusableTextView, VUISeparatorView;

@interface VUIListLockupCollectionViewCellView : UIView

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) UIView *imageView;
@property (retain, nonatomic) _TVMonogramView *monogramView;
@property (retain, nonatomic) TVImageLayout *imageLayout;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subTitleLabel;
@property (retain, nonatomic) VUIFocusableTextView *descriptionTextView;
@property (retain, nonatomic) UIView *primaryButton;
@property (retain, nonatomic) UIView *secondaryButton;
@property (nonatomic) long long imagePosition;
@property (retain, nonatomic) TVImageLayout *monogramImageLayout;

- (void).cxx_destruct;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForCellReuse;
- (struct CGSize { double x0; double x1; })_layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
