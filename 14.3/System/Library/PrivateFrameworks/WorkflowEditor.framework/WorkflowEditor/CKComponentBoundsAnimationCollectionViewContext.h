@class NSDictionary, UICollectionView;

@interface CKComponentBoundsAnimationCollectionViewContext : NSObject {
    UICollectionView *_collectionView;
    long long _numberOfSections;
    struct vector<unsigned long, std::__1::allocator<unsigned long> > { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { unsigned long long *__value_; } __end_cap_; } _numberOfItemsInSection;
    NSDictionary *_indexPathsToSnapshotViews;
    NSDictionary *_supplementaryElementIndexPathsToSnapshotViews;
    NSDictionary *_decorationElementIndexPathsToSnapshotViews;
    NSDictionary *_indexPathsToOriginalLayoutAttributes;
    NSDictionary *_supplementaryElementIndexPathsToOriginalLayoutAttributes;
    NSDictionary *_decorationElementIndexPathsToOriginalLayoutAttributes;
}

- (id)initWithCollectionView:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)applyBoundsAnimationToCollectionView:(const struct CKComponentBoundsAnimation { double x0; double x1; unsigned long long x2; unsigned long long x3; double x4; double x5; } *)a0;

@end
