@class UITableViewUpdateGap, NSIndexPath, UICollectionViewUpdateItem;

@interface UIUpdateItem : NSObject {
    UICollectionViewUpdateItem *_collectionViewUpdateItem;
}

@property (weak, nonatomic) UITableViewUpdateGap *gap;
@property (readonly, nonatomic) UICollectionViewUpdateItem *collectionViewUpdateItem;
@property (readonly, nonatomic) int action;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) long long animation;
@property (nonatomic) BOOL headerFooterOnly;
@property (readonly, nonatomic) BOOL isDecomposedFromReload;

- (long long)inverseCompareIndexPaths:(id)a0;
- (id)_actionDescription;
- (long long)compareIndexPaths:(id)a0;
- (void).cxx_destruct;
- (id)initWithAction:(int)a0 forIndexPath:(id)a1 animation:(long long)a2;
- (BOOL)isSectionOperation;

@end
