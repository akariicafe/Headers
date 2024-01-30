@interface JTCollectionView : UICollectionView

@property (nonatomic) struct CGSize { double width; double height; } lastCollectionViewSize;
@property (nonatomic) BOOL inLayout;

- (void)layoutIfNeeded;
- (void)layoutSubviews;
- (long long)selectedItem;
- (id)firstVisibleIndexPath;
- (BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
- (id)sortedIndexPathsForVisibleItems;
- (id)visibleSections;

@end
