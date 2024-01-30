@class UILabel;

@interface GKStatusCell : GKCollectionViewCell

@property (retain, nonatomic) UILabel *statusLabel;

- (void)setStatus:(id)a0;
- (void)dealloc;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canRemoveItem;

@end
