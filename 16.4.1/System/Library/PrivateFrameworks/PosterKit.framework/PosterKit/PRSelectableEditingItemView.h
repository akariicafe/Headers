@class PREditingPickerShapeView;

@interface PRSelectableEditingItemView : UIButton

@property (readonly, nonatomic) PREditingPickerShapeView *selectionView;

- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)updateForSelectedColor:(id)a0;

@end
