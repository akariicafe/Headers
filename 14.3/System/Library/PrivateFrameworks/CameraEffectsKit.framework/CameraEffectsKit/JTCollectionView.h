@interface JTCollectionView : UICollectionView

@property (nonatomic) struct CGSize { double width; double height; } lastCollectionViewSize;
@property (nonatomic) BOOL inLayout;

- (void)layoutIfNeeded;
- (BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
- (void)layoutSubviews;
- (id)firstVisibleIndexPath;
- (long long)selectedItem;
- (id)sortedIndexPathsForVisibleItems;
- (id)visibleSections;

@end
