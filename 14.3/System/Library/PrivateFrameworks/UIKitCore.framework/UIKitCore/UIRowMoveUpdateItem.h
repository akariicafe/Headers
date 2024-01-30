@class NSIndexPath;

@interface UIRowMoveUpdateItem : UIUpdateItem {
    NSIndexPath *_newIndexPath;
}

- (id)initWithOldIndexPath:(id)a0 newIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)newIndexPath;
- (id)collectionViewUpdateItem;

@end
