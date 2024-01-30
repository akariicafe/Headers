@class _TVShelfViewLayout;

@interface _TVShelfView : _TVCollectionView

@property (retain, nonatomic) _TVShelfViewLayout *shelfFlowLayout;

- (struct CGPoint { double x0; double x1; })_contentOffsetForNewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 oldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 newContentSize:(struct CGSize { double x0; double x1; })a2 andOldContentSize:(struct CGSize { double x0; double x1; })a3;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 collectionViewLayout:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shelfViewLayout:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_selectionMarginsForCell:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })selectionMarginsForCellAtIndexPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tv_augmentedSelectionFrameForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })tv_sizeThatFits:(struct CGSize { double x0; double x1; })a0 withContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)_updateLayoutForFocusedView:(id)a0 withAnimationCoordinator:(id)a1;
- (void)updateLayoutForFocusedView:(id)a0;

@end
