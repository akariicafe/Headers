@class UILabel;

@interface GKStatusCell : GKCollectionViewCell

@property (retain, nonatomic) UILabel *statusLabel;

- (void)prepareForReuse;
- (void)setStatus:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)canRemoveItem;

@end
