@class NSMutableDictionary;

@interface EKChangeSet : NSObject <NSCopying> {
    BOOL _skipsPersistentObjectCopy;
}

@property (retain, nonatomic) NSMutableDictionary *singleValueChanges;
@property (retain, nonatomic) NSMutableDictionary *multiValueAdditions;
@property (retain, nonatomic) NSMutableDictionary *multiValueRemovals;
@property (nonatomic) BOOL isNew;
@property (nonatomic) BOOL isModified;
@property (nonatomic) BOOL isSaved;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) BOOL isUndeleted;
@property (nonatomic) BOOL isUndetached;

- (id)initWithChangeSet:(id)a0;
- (id)initWithChangeSet:(id)a0 filter:(id /* block */)a1;
- (id)initWithChangeSet:(id)a0 changesToSkip:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)skipsPersistentObjectCopy;
- (id)_initWithChangeSet:(id)a0 filter:(id /* block */)a1;
- (void)removeFromChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (void)_addToChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3 shouldCopyKeyCallback:(id /* block */)a4;
- (void)replaceUniqueMultiValueObjectsWithUpdatedObjects:(id)a0;
- (id)_semanticIdentifierToObjectMapForObjects:(id)a0;
- (id)valuesForMultiValueKey:(id)a0 basedOnSet:(id)a1;
- (id)valueForSingleValueKey:(id)a0 basedOn:(id)a1 and:(id)a2;
- (void)setSkipsPersistentObjectCopy:(BOOL)a0;
- (void)changeSingleValue:(id)a0 forKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (void)addChanges:(id)a0 shouldCopyKeyCallback:(id /* block */)a1;
- (BOOL)hasChanges;
- (void)addChanges:(id)a0;
- (BOOL)_isNewAndUnsaved;
- (void)forceChangeValue:(id)a0 forKey:(id)a1;
- (void)rollbackChanges;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addToChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (id)valuesForMultiValueKey:(id)a0 basedOn:(id)a1 and:(id)a2;
- (id)unsavedMultiValueAddedObjectsForKey:(id)a0;
- (id)summary;
- (id)changedKeys;
- (void)changeSingleValue:(id)a0 forKey:(id)a1 basedOn:(id)a2;
- (id)changedMultiValueKeys;
- (void)markChangesAsSaved;
- (void)_cleanupEmptySetsForMultiValueKey:(id)a0;
- (BOOL)hasUnsavedMultiValueAdditionForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addChangesAndUpdateUniqueMultiValueObjects:(id)a0;
- (BOOL)isEffectivelyEqual:(id)a0;
- (void)removeAllChangesExceptRemovals;
- (id)init;
- (BOOL)hasUnsavedChanges;
- (id)unsavedMultiValueRemovedObjectsForKey:(id)a0;
- (id)valueForSingleValueKey:(id)a0 basedOn:(id)a1;
- (id)description;
- (void)replaceMultiChangeAddedObject:(id)a0 withObject:(id)a1 forKey:(id)a2;
- (BOOL)hasUnsavedChangeForKey:(id)a0;
- (void)rollbackChangesForKeys:(id)a0;
- (id)changedSingleValueKeys;
- (BOOL)isUniqueAddedObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithChangeSet:(id)a0 changesToKeep:(id)a1;
- (BOOL)hasUnsavedMultiValueRemovalForKey:(id)a0;
- (id)initWithSingleValueChanges:(id)a0 multiValueAdditions:(id)a1 multiValueRemovals:(id)a2;

@end
