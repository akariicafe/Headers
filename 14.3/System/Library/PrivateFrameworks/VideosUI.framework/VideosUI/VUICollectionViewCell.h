@class UIView;

@interface VUICollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *childView;

- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
