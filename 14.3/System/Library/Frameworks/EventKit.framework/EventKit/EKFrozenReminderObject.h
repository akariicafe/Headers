@class NSArray, EKReminderStore, EKChangeSet;

@interface EKFrozenReminderObject : EKPersistentObject {
    EKChangeSet *_changeSet;
    EKReminderStore *_reminderStore;
    id _remObject;
}

@property (readonly, nonatomic) EKChangeSet *uncommittedChanges;
@property (copy, nonatomic) NSArray *path;

+ (id)uniqueIdentifierForREMObject:(id)a0;
+ (Class)meltedClass;
+ (BOOL)canCommitSelf;
+ (Class)frozenClass;

- (BOOL)isNew;
- (id)changeSet;
- (int)entityType;
- (void).cxx_destruct;
- (id)updatedFrozenObjectWithChanges:(id)a0;
- (id)updatedFrozenObjectWithChanges:(id)a0 updatedChildren:(id)a1;
- (id)initWithObject:(id)a0;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (unsigned long long)hash;
- (id)remObjectID;
- (id)uniqueIdentifier;
- (BOOL)isFrozen;
- (id)semanticIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)REMObject;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (id)valueForSingleValueKey:(id)a0 backingValue:(id /* block */)a1;
- (id)initWithREMObject:(id)a0 inStore:(id)a1;
- (BOOL)existsInStore;
- (BOOL)isPropertyUnavailable:(id)a0;
- (BOOL)isEqual:(id)a0 ignoringProperties:(id)a1;
- (id)frozenObject;
- (id)existingMeltedObject;
- (BOOL)isCompletelyEqual:(id)a0;
- (BOOL)isPartialObject;
- (id)updateParentToCommitSelf:(id)a0;

@end
