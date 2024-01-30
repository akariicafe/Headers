@class UIView;

@interface CKGroupCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *avatarView;

+ (id)reuseIdentifier;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (BOOL)shouldHighlight;

@end
