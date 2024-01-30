@class _TVImageView, VUILabel, IKViewElement, VUIFavoriteViewLayout, VUISeparatorView;

@interface VUIFavoriteView : UIView

@property (retain, nonatomic) VUIFavoriteViewLayout *layout;
@property (retain, nonatomic) VUILabel *titleLabel;
@property (retain, nonatomic) _TVImageView *logoImageView;
@property (retain, nonatomic) _TVImageView *accessoryImageView;
@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUISeparatorView *topSeparatorView;
@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView;

- (void).cxx_destruct;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForCellReuse;

@end
