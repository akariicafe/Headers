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

- (id)valueForSingleValueKey:(id)a0 basedOn:(id)a1;
- (void)_addToChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3 shouldCopyKeyCallback:(id /* block */)a4;
- (id)changedKeys;
- (BOOL)hasUnsavedChanges;
- (void)forceChangeValue:(id)a0 forKey:(id)a1;
- (id)summary;
- (BOOL)isUniqueAddedObject:(id)a0 forKey:(id)a1;
- (void)addChangesAndUpdateUniqueMultiValueObjects:(id)a0;
- (BOOL)hasChanges;
- (id)valueForSingleValueKey:(id)a0 basedOn:(id)a1 and:(id)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)replaceUniqueMultiValueObjectsWithUpdatedObjects:(id)a0;
- (id)_semanticIdentifierToObjectMapForObjects:(id)a0;
- (void)rollbackChanges;
- (id)description;
- (BOOL)_isNewAndUnsaved;
- (BOOL)hasUnsavedMultiValueAdditionForKey:(id)a0;
- (BOOL)hasUnsavedChangeForKey:(id)a0;
- (id)changedMultiValueKeys;
- (BOOL)isEffectivelyEqual:(id)a0;
- (id)initWithChangeSet:(id)a0 changesToSkip:(id)a1;
- (id)unsavedMultiValueAddedObjectsForKey:(id)a0;
- (void)_cleanupEmptySetsForMultiValueKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)rollbackChangesForKeys:(id)a0;
- (id)_initWithChangeSet:(id)a0 filter:(id /* block */)a1;
- (id)unsavedMultiValueRemovedObjectsForKey:(id)a0;
- (void)markChangesAsSaved;
- (void)removeFromChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (void)setSkipsPersistentObjectCopy:(BOOL)a0;
- (void)addChanges:(id)a0;
- (BOOL)hasUnsavedMultiValueRemovalForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valuesForMultiValueKey:(id)a0 basedOn:(id)a1 and:(id)a2;
- (id)changedSingleValueKeys;
- (void)changeSingleValue:(id)a0 forKey:(id)a1 basedOn:(id)a2;
- (void)addChanges:(id)a0 shouldCopyKeyCallback:(id /* block */)a1;
- (id)valuesForMultiValueKey:(id)a0 basedOnSet:(id)a1;
- (BOOL)skipsPersistentObjectCopy;
- (void)replaceMultiChangeAddedObject:(id)a0 withObject:(id)a1 forKey:(id)a2;
- (id)initWithSingleValueChanges:(id)a0 multiValueAdditions:(id)a1 multiValueRemovals:(id)a2;
- (void)addToChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (void)changeSingleValue:(id)a0 forKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (id)initWithChangeSet:(id)a0 changesToKeep:(id)a1;
- (id)initWithChangeSet:(id)a0;

@end
