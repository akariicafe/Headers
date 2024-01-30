@class NSArray, EKReminderStore, EKChangeSet;

@interface EKFrozenReminderObject : EKPersistentObject {
    EKChangeSet *_changeSet;
    EKReminderStore *_reminderStore;
    id _remObject;
}

@property (readonly, nonatomic) EKChangeSet *uncommittedChanges;
@property (copy, nonatomic) NSArray *path;

+ (Class)meltedClass;
+ (Class)frozenClass;
+ (BOOL)canCommitSelf;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (BOOL)isNew;
- (int)entityType;
- (BOOL)isFrozen;
- (id)remObjectID;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (id)valueForSingleValueKey:(id)a0 backingValue:(id /* block */)a1;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)initWithREMObject:(id)a0 inStore:(id)a1;
- (id)uniqueIdentifier;
- (BOOL)isPropertyUnavailable:(id)a0;
- (id)initWithObject:(id)a0;
- (BOOL)existsInStore;
- (BOOL)isEqual:(id)a0 ignoringProperties:(id)a1;
- (id)frozenObject;
- (id)existingMeltedObject;
- (BOOL)isPartialObject;
- (id)updatedFrozenObjectWithChanges:(id)a0 updatedChildren:(id)a1;
- (id)updatedFrozenObjectWithChanges:(id)a0;
- (BOOL)isCompletelyEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)REMObject;
- (unsigned long long)hash;
- (id)updateParentToCommitSelf:(id)a0;
- (id)changeSet;
- (id)semanticIdentifier;

@end
