@protocol _NSCollectionLayoutVisibleItem;

@interface _UICollectionCompositionalLayoutDynamicBehavior : UIDynamicBehavior

@property (readonly, nonatomic) id<_NSCollectionLayoutVisibleItem> visibleItem;

- (id)item;
- (void).cxx_destruct;
- (id)initWithVisibleItem:(id)a0;

@end
