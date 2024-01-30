@class UICollectionView, UIView;

@interface VUIShelfView : UIView

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UICollectionView *collectionView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
