@class TLKAuxilliaryTextView, SearchUIMultiResultCollectionView;

@interface SearchUIMultiResultCollectionViewCell : SearchUICollectionViewCell

@property (retain) SearchUIMultiResultCollectionView *multiCollectionView;
@property (retain) TLKAuxilliaryTextView *folderLabelView;

- (BOOL)isExpandable;
- (void)setSelected:(BOOL)a0;
- (void)returnKeyPressed;
- (id)viewForForcedFocus;
- (BOOL)setupManualFocus;
- (void)updateExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)updateWithRowModel:(id)a0;
- (void)removeManualFocus;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (struct CGSize { double x0; double x1; })sizeCollectionViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (BOOL)needsInternalFocus;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)visibleResults;
- (void).cxx_destruct;

@end
