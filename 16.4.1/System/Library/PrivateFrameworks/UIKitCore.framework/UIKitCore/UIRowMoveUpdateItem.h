@class NSIndexPath;

@interface UIRowMoveUpdateItem : UIUpdateItem {
    NSIndexPath *_newIndexPath;
}

- (id)collectionViewUpdateItem;
- (id)_moveDestinationDescription;
- (void).cxx_destruct;

@end
