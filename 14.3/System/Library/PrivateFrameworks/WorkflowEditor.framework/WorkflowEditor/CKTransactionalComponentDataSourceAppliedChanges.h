@class NSSet, NSIndexSet, NSDictionary;

@interface CKTransactionalComponentDataSourceAppliedChanges : NSObject

@property (readonly, copy, nonatomic) NSSet *updatedIndexPaths;
@property (readonly, copy, nonatomic) NSSet *removedIndexPaths;
@property (readonly, copy, nonatomic) NSIndexSet *removedSections;
@property (readonly, copy, nonatomic) NSDictionary *movedIndexPaths;
@property (readonly, copy, nonatomic) NSIndexSet *insertedSections;
@property (readonly, copy, nonatomic) NSSet *insertedIndexPaths;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)newIndexPathForPreviousIndexPath:(id)a0;
- (id)initWithUpdatedIndexPaths:(id)a0 removedIndexPaths:(id)a1 removedSections:(id)a2 movedIndexPaths:(id)a3 insertedSections:(id)a4 insertedIndexPaths:(id)a5 userInfo:(id)a6;

@end
