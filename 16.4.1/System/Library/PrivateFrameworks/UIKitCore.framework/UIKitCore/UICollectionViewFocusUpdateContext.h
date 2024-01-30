@class NSIndexPath, UICollectionView;

@interface UICollectionViewFocusUpdateContext : UIFocusUpdateContext {
    BOOL _didSetPreviouslyFocusedIndexPath;
    BOOL _didSetNextFocusedIndexPath;
}

@property (readonly, weak, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) NSIndexPath *previouslyFocusedIndexPath;
@property (readonly, nonatomic) NSIndexPath *nextFocusedIndexPath;

+ (id)_contextWithContext:(id)a0 collectionView:(id)a1;
+ (id)_contextWithContext:(id)a0 collectionView:(id)a1 cachedPreviouslyFocusedIndexPath:(id)a2;

- (void).cxx_destruct;
- (id)_initWithContext:(id)a0 collectionView:(id)a1 cachedPreviouslyFocusedIndexPath:(id)a2;

@end
