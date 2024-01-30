@class NSDictionary, NSSet, NSIndexSet;

@interface CKTransactionalComponentDataSourceChangesetBuilder : NSObject {
    NSDictionary *_updatedItems;
    NSSet *_removedItems;
    NSIndexSet *_removedSections;
    NSDictionary *_movedItems;
    NSIndexSet *_insertedSections;
    NSDictionary *_insertedItems;
}

+ (id)transactionalComponentDataSourceChangeset;

- (id)build;
- (void).cxx_destruct;
- (id)withInsertedItems:(id)a0;
- (id)withUpdatedItems:(id)a0;
- (id)withMovedItems:(id)a0;
- (id)withRemovedItems:(id)a0;
- (id)withInsertedSections:(id)a0;
- (id)withRemovedSections:(id)a0;

@end
