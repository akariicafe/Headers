@class NSIndexSet, NSOrderedSet, NSSet;

@interface WFChangeset : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSIndexSet *deletedIndexes;
@property (readonly, copy, nonatomic) NSIndexSet *insertedIndexes;
@property (readonly, copy, nonatomic) NSOrderedSet *insertedObjects;
@property (readonly, copy, nonatomic) NSSet *movedIndexes;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;

+ (id)changesetFromStart:(id)a0 toEnd:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)endResultByApplyingToStart:(id)a0;
- (id)changesetByMergingChangeset:(id)a0;
- (id)initWithDeletedIndexes:(id)a0 insertedIndexes:(id)a1 insertedObjects:(id)a2 movedIndexes:(id)a3;

@end
