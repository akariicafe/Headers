@interface NSMergePolicy : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned long long _type;
    void *_reserved2;
    void *_reserved3;
}

@property (class, readonly) NSMergePolicy *errorMergePolicy;
@property (class, readonly) NSMergePolicy *rollbackMergePolicy;
@property (class, readonly) NSMergePolicy *overwriteMergePolicy;
@property (class, readonly) NSMergePolicy *mergeByPropertyObjectTrumpMergePolicy;
@property (class, readonly) NSMergePolicy *mergeByPropertyStoreTrumpMergePolicy;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long mergeType;

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;

- (id)init;
- (BOOL)resolveOptimisticLockingVersionConflicts:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)mergeToManyRelationshipForSourceObject:(id)a0 withOldSnapshot:(id)a1 newSnapshot:(id)a2 andAncestor:(id)a3 andLegacyPath:(BOOL)a4;
- (void)encodeWithCoder:(id)a0;
- (void)_mergeChangesObjectUpdatesTrumpForObject:(id)a0 withRecord:(id)a1;
- (id)initWithMergeType:(unsigned long long)a0;
- (BOOL)resolveConstraintConflicts:(id)a0 error:(id *)a1;
- (BOOL)resolveConflicts:(id)a0 error:(id *)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)_mergeChangesStoreUpdatesTrumpForObject:(id)a0 withRecord:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
