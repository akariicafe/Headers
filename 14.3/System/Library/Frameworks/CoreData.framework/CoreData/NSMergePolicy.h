@interface NSMergePolicy : NSObject {
    unsigned long long _type;
    void *_reserved2;
    void *_reserved3;
}

@property (class, readonly) NSMergePolicy *errorMergePolicy;
@property (class, readonly) NSMergePolicy *rollbackMergePolicy;
@property (class, readonly) NSMergePolicy *overwriteMergePolicy;
@property (class, readonly) NSMergePolicy *mergeByPropertyObjectTrumpMergePolicy;
@property (class, readonly) NSMergePolicy *mergeByPropertyStoreTrumpMergePolicy;

@property (readonly) unsigned long long mergeType;

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;

- (id)initWithMergeType:(unsigned long long)a0;
- (BOOL)_didSomethingElseResolveDBConflict:(id)a0;
- (BOOL)_byPropertyObjectTrumpResolveConstraintConflict:(id)a0;
- (id)_electDesignatedOriginalForConflict:(id)a0;
- (id)_electNewlyInsertedDesignatedOriginalFrom:(id)a0;
- (void)_mergeToManyUnionRelationshipsForObject:(id)a0 andObject:(id)a1;
- (id)init;
- (BOOL)resolveConstraintConflicts:(id)a0 error:(id *)a1;
- (BOOL)_byPropertyObjectTrumpMergeObject:(id)a0 ontoObject:(id)a1 writeAll:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_mergeDeletionWithStoreChangesForObject:(id)a0 withRecord:(id)a1;
- (void)_mergeToManyRelationshipsForObject:(id)a0 ontoObject:(id)a1;
- (void)dealloc;
- (BOOL)resolveConflict:(id)a0;
- (void)_mergeValuesForObject:(id)a0 ontoObject:(id)a1;
- (id)_electPreexistingDesignatedOriginalFrom:(id)a0;
- (BOOL)_valuesOnObject:(id)a0 matchAgainstValues:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_eliminateContendersResolveConstraintConflict:(id)a0 withKeeper:(id)a1;
- (unsigned long long)type;
- (BOOL)_byPropertyStoreTrumpResolveConstraintConflict:(id)a0;
- (BOOL)resolveConstraintConflict:(id)a0 error:(id *)a1;
- (BOOL)_overwriteResolveConstraintConflict:(id)a0;
- (void)_mergeToManyUnionRelationshipsForConstraintConflict:(id)a0;
- (void)_mergeChangesObjectUpdatesTrumpForObject:(id)a0 withRecord:(id)a1;
- (void)_mergeToManyRelationshipsForConstraintConflict:(id)a0 withDesignatedOriginal:(id)a1;
- (BOOL)_rollbackResolveConstraintConflict:(id)a0;
- (BOOL)_mergeContendersResolveConstraintConflict:(id)a0 withKeeper:(id)a1;
- (id)_unresolvedObjectsForContextConflict:(id)a0;
- (id)_unresolvedConflictFor:(id)a0;
- (BOOL)_resolveContextConstraintConflict:(id)a0;
- (void)mergeToManyRelationshipForSourceObject:(id)a0 withOldSnapshot:(id)a1 newSnapshot:(id)a2 andAncestor:(id)a3 andLegacyPath:(BOOL)a4;
- (void)_mergeChangesStoreUpdatesTrumpForObject:(id)a0 withRecord:(id)a1;
- (BOOL)resolveOptimisticLockingVersionConflicts:(id)a0 error:(id *)a1;
- (BOOL)resolveConflicts:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;

@end
