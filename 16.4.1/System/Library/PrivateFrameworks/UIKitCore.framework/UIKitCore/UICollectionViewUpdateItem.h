@class NSUUID, NSIndexPath;

@interface UICollectionViewUpdateItem : NSObject <NSCopying> {
    struct _UICollectionUpdateIndexPair { long long section; long long item; } _initialIndexPair;
    struct _UICollectionUpdateIndexPair { long long section; long long item; } _finalIndexPair;
    struct _UICollectionUpdateIndexPair { long long section; long long item; } _indexPairForAction;
    struct { unsigned char isAppendingSectionInsert : 1; unsigned char shouldReconfigure : 1; } _updateItemFlags;
    NSUUID *_identifier;
}

@property (readonly, nonatomic) NSIndexPath *indexPathBeforeUpdate;
@property (readonly, nonatomic) NSIndexPath *indexPathAfterUpdate;
@property (readonly, nonatomic) long long updateAction;

- (long long)compareIndexPathsForMoves:(id)a0;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (long long)compareIndexPaths:(id)a0;
- (id)description;
- (long long)inverseCompareIndexPaths:(id)a0;
- (void).cxx_destruct;

@end
