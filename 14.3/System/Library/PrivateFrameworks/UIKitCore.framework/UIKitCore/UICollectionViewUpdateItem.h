@class NSUUID, NSIndexPath;

@interface UICollectionViewUpdateItem : NSObject <NSCopying>

@property (readonly, nonatomic, getter=_action) long long action;
@property (readonly, nonatomic, getter=_indexPath) NSIndexPath *indexPath;
@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) BOOL isAppendingSectionInsert;
@property (readonly, nonatomic, getter=_isSectionOperation) BOOL isSectionOperation;
@property (retain, nonatomic, getter=_newIndexPath, setter=_setNewIndexPath:) NSIndexPath *newIndexPath;
@property (readonly, nonatomic) NSIndexPath *indexPathBeforeUpdate;
@property (readonly, nonatomic) NSIndexPath *indexPathAfterUpdate;
@property (readonly, nonatomic) long long updateAction;

- (long long)inverseCompareIndexPaths:(id)a0;
- (id)initWithOldIndexPath:(id)a0 newIndexPath:(id)a1;
- (long long)compareIndexPaths:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithInitialIndexPath:(id)a0 finalIndexPath:(id)a1 updateAction:(long long)a2;
- (BOOL)isNOOP;
- (id)description;
- (BOOL)isRevertedUpdateOf:(id)a0;
- (id)revertedUpdate;
- (BOOL)isEqualToUpdate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithAction:(long long)a0 forIndexPath:(id)a1;

@end
