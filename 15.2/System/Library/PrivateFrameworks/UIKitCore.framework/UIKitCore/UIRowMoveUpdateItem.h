@class NSIndexPath;

@interface UIRowMoveUpdateItem : UIUpdateItem {
    NSIndexPath *_newIndexPath;
}

- (id)collectionViewUpdateItem;
- (id)initWithOldIndexPath:(id)a0 newIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)newIndexPath;

@end
