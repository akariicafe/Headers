@class NSArray, NSIndexSet, NSDictionary;

@interface IKDiffEvaluator : NSObject

@property (readonly, copy, nonatomic) NSArray *objects;
@property (readonly, copy, nonatomic) NSArray *oldObjects;
@property (readonly, copy, nonatomic) NSIndexSet *addedIndexes;
@property (readonly, copy, nonatomic) NSIndexSet *removedIndexes;
@property (readonly, copy, nonatomic) NSDictionary *movedIndexesByNewIndex;
@property (readonly, copy, nonatomic) NSDictionary *oldIndexesByNewIndex;

- (void).cxx_destruct;
- (void)_evaluateWithHashing:(id /* block */)a0;
- (void)enumerateCommonObjectsUsingBlock:(id /* block */)a0;
- (id)initWithObjects:(id)a0 oldObjects:(id)a1 hashing:(id /* block */)a2;

@end
