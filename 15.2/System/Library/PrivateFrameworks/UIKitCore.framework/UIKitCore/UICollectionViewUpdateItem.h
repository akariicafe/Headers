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

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)inverseCompareIndexPaths:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compareIndexPaths:(id)a0;
- (id).cxx_construct;

@end
