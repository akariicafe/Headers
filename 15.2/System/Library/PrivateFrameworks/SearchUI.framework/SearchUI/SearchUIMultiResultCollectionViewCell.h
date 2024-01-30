@class TLKAuxilliaryTextView, SearchUIMultiResultCollectionView;

@interface SearchUIMultiResultCollectionViewCell : SearchUICollectionViewCell

@property (retain) SearchUIMultiResultCollectionView *multiCollectionView;
@property (retain) TLKAuxilliaryTextView *folderLabelView;

- (void)returnKeyPressed;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)viewForForcedFocus;
- (BOOL)isExpandable;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupManualFocus;
- (BOOL)needsInternalFocus;
- (void)setDelegate:(id)a0;
- (void)updateWithRowModel:(id)a0;
- (void)updateExpanded:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)visibleResults;
- (struct CGSize { double x0; double x1; })sizeCollectionViewWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)removeManualFocus;

@end
