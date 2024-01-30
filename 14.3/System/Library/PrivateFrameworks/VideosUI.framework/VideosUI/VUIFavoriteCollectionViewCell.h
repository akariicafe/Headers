@class VUIFavoriteView, IKViewElement;

@interface VUIFavoriteCollectionViewCell : VUIListCollectionViewCell

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIFavoriteView *favoriteView;

+ (id)configureWithElement:(id)a0 existingView:(id)a1;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
