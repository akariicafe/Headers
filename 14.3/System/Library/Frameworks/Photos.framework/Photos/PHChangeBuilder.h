@class PHPersistentChangeToken, NSMutableDictionary, NSMutableSet, NSManagedObjectContext;

@interface PHChangeBuilder : NSObject {
    NSManagedObjectContext *_context;
    PHPersistentChangeToken *_changeToken;
    unsigned long long _maximumChangeThreshold;
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_updatedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    NSMutableDictionary *_deletedUuidsByObjectId;
    NSMutableDictionary *_attributesByOID;
    NSMutableDictionary *_relationshipsByOID;
    BOOL _unknownMergeEvent;
}

+ (id)changeWithManagedObjectContext:(id)a0 maximumChangeThreshold:(unsigned long long)a1 transaction:(id)a2;

- (id)initWithManagedObjectContext:(id)a0 maximumChangeThreshold:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_recordDeleteChange:(id)a0 withUniquedObjectID:(id)a1;
- (id)_uuidForDeleteChange:(id)a0 uniquedObjectID:(id)a1;
- (void)_recordInsertChange:(id)a0 withUniquedObjectID:(id)a1;
- (void)recordChange:(id)a0;
- (BOOL)changeCountExeedsThreshold:(unsigned long long)a0;
- (void)_recordUpdateChange:(id)a0 withUniquedObjectID:(id)a1;
- (id)buildChange;
- (void)recordChanges:(id)a0;
- (void)_recordChangedProperties:(id)a0 forObjectID:(id)a1;
- (void)recordNonIncrementalChanges;
- (void)recordTransaction:(id)a0;

@end
