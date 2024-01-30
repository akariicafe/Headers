@class UIView;

@interface VUICollectionViewWrapperCell : UICollectionViewCell

@property (retain, nonatomic) UIView *childView;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
