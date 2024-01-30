@class UICollectionView;

@interface _UIFocusCollectionViewSectionContainerGuideRegion : _UIFocusContainerGuideRegion

@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long section;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sectionFrame;

- (id)_fallbackFocusItemForMovementRequest:(id)a0 inFocusMap:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
