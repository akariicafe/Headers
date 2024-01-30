@class UIView;

@interface VUICollectionViewWrapperCell : UICollectionViewCell

@property (retain, nonatomic) UIView *childView;

- (void)layoutSubviews;
- (BOOL)canBecomeFocused;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
