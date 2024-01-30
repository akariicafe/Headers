@class NSSQLManyToMany;

@interface NSSQLCorrelationTableUpdateTracker : NSObject {
    id _inserts;
    id _deletes;
    id _masterUpdates;
    id _otherUpdates;
}

@property (readonly, nonatomic) NSSQLManyToMany *relationship;

- (void)trackReorders:(id)a0 forObjectWithID:(id)a1;
- (void)dealloc;
- (void)enumerateDeletesUsingBlock:(id /* block */)a0;
- (BOOL)hasReorders;
- (void)enumerateMasterReordersOIDsUsingBlock:(id /* block */)a0;
- (void)enumerateDeletesOIDsUsingBlock:(id /* block */)a0;
- (void)enumerateReordersUsingBlock:(id /* block */)a0;
- (void)enumerateMasterReordersPart2UsingBlock:(id /* block */)a0;
- (void)enumerateMasterReordersUsingBlock:(id /* block */)a0;
- (id)initForRelationship:(id)a0;
- (void)trackInserts:(id)a0 deletes:(id)a1 reorders:(id)a2 forObjectWithID:(id)a3;
- (id)_organizeValues:(id)a0;
- (BOOL)hasDeletes;
- (void)enumerateReordersOIDsUsingBlock:(id /* block */)a0;
- (BOOL)hasMasterReorders;
- (void)enumerateInsertsUsingBlock:(id /* block */)a0;
- (void)enumerateInsertsOIDsUsingBlock:(id /* block */)a0;
- (BOOL)hasInserts;

@end
