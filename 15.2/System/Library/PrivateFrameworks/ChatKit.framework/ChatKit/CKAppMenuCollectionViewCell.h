@class UILabel, UIImageView, UIView;
@protocol CKAppMenuCollectionViewCellDelegate;

@interface CKAppMenuCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *selectionView;
@property (weak, nonatomic) id<CKAppMenuCollectionViewCellDelegate> delegate;

- (void)layoutSubviews;
- (void)didHoverOverCell:(id)a0;
- (void)handleTap:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
