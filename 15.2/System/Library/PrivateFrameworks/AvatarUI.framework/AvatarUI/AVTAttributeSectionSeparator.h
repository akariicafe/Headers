@class UIView;

@interface AVTAttributeSectionSeparator : UICollectionReusableView

@property (retain, nonatomic) UIView *separatorView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
