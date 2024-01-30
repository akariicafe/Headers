@class NSArray, NSIndexSet, NSSet;

@interface NAUniqueArrayDiff : NSObject

@property (retain, nonatomic) NSArray *fromArray;
@property (retain, nonatomic) NSArray *toArray;
@property (retain, nonatomic) NSIndexSet *deletedIndexes;
@property (retain, nonatomic) NSIndexSet *insertedIndexes;
@property (retain, nonatomic) NSIndexSet *changedIndexes;
@property (retain, nonatomic) NSSet *movedIndexes;
@property (readonly, nonatomic) unsigned long long numberOfOperations;

+ (id)diffFromArray:(id)a0 toArray:(id)a1 options:(id)a2;
+ (id)_createContainerSetFromArray:(id)a0 options:(id)a1;

- (void).cxx_destruct;
- (void)enumerateChangesUsingBlock:(id /* block */)a0;
- (void)enumerateDeletesUsingBlock:(id /* block */)a0;
- (void)enumerateMovesUsingBlock:(id /* block */)a0;
- (void)enumerateInsertsUsingBlock:(id /* block */)a0;

@end
