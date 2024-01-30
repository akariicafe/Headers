@class IKViewElement, VUILabel, VUIRoomBannerLayout, VUIFocusableTextView, _TVImageView, VUISeparatorView;

@interface VUIRoomBannerView : UIView

@property (retain, nonatomic) VUISeparatorView *separatorView;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) VUIFocusableTextView *descriptionLabel;
@property (retain, nonatomic) VUIRoomBannerLayout *layout;
@property (retain, nonatomic) _TVImageView *backgroundImage;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;

@end
