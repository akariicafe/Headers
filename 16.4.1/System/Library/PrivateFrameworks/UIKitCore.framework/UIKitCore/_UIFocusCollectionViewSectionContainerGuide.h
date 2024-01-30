@class UICollectionView;

@interface _UIFocusCollectionViewSectionContainerGuide : UIFocusContainerGuide

@property (weak, nonatomic) UICollectionView *collectionView;
@property (nonatomic) long long section;

- (void)_searchForFocusRegionsInContext:(id)a0;
- (id)initWithCollectionView:(id)a0;
- (void).cxx_destruct;

@end
