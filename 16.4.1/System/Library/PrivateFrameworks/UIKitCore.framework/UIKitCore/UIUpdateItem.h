@class UITableViewUpdateGap, NSIndexPath, UICollectionViewUpdateItem;

@interface UIUpdateItem : NSObject {
    UICollectionViewUpdateItem *_collectionViewUpdateItem;
    BOOL _headerFooterOnly;
    int _action;
    NSIndexPath *_indexPath;
    long long _animation;
}

@property (weak, nonatomic) UITableViewUpdateGap *gap;
@property (readonly, nonatomic) UICollectionViewUpdateItem *collectionViewUpdateItem;
@property (readonly, nonatomic) BOOL isDecomposedFromReload;

- (long long)compareIndexPathsForMoves:(id)a0;
- (long long)compareIndexPaths:(id)a0;
- (id)_moveDestinationDescription;
- (id)description;
- (long long)inverseCompareIndexPaths:(id)a0;
- (void).cxx_destruct;

@end
