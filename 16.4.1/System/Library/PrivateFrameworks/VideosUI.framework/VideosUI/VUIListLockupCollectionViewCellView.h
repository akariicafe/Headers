@class FocusableTextView, VUIButton, VUILabel, UIView, VUISeparatorView;

@interface VUIListLockupCollectionViewCellView : VUIBaseView

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) UIView *imageView;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUILabel *subTitleLabel;
@property (retain, nonatomic) FocusableTextView *descriptionTextView;
@property (retain, nonatomic) VUIButton *primaryButton;
@property (retain, nonatomic) VUIButton *secondaryButton;
@property (nonatomic) long long imagePosition;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_prepareForReuse;
- (void)vui_setHighlighted:(BOOL)a0;

@end
