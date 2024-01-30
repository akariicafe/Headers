@class UICollectionView;

@interface _UIFocusCollectionViewSectionContainerGuide : UIFocusContainerGuide

@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long section;

- (id)initWithCollectionView:(id)a0;
- (void)_searchForFocusRegionsInContext:(id)a0;
- (void).cxx_destruct;

@end
