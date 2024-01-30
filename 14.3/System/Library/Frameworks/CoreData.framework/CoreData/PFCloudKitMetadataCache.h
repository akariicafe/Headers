@class NSMutableDictionary, NSMutableSet;

@interface PFCloudKitMetadataCache : NSObject {
    NSMutableDictionary *_recordZoneIDToZoneMetadata;
    NSMutableDictionary *_objectIDToRecordMetadata;
    NSMutableDictionary *_recordIDToMirroredRelationshipOrRecordMetadata;
    NSMutableDictionary *_mtmKeyToMirroredRelationship;
    NSMutableDictionary *_objectIDToRelationshipNameToExistingMTMKeys;
    NSMutableDictionary *_objectIDToChangedPropertyKeys;
    NSMutableSet *_invalidatedMTMKeys;
}

- (BOOL)efficientlyBatchObjectsInHistoryRequest:(id)a0 fromStore:(id)a1 inManagedObjectContext:(id)a2 returningError:(id *)a3 withBlock:(id /* block */)a4;
- (id)init;
- (void)dealloc;
- (id)zoneMetadataForZoneID:(id)a0;
- (void)cacheZoneMetadata:(id)a0;
- (id)mirroredRelationshipForKey:(id)a0;
- (id)mtmKeysRelatedToObjectWithID:(id)a0 byRelationshipWithName:(id)a1;
- (BOOL)hasLocalEditsForPropertyNamed:(id)a0 onObjectWithID:(id)a1;
- (id)recordMetadataForObject:(id)a0;
- (void)registerRecordMetadata:(id)a0 forObject:(id)a1;
- (id)recordMetadataForRecordID:(id)a0;
- (void)_addMirroredRelationshipMTMKey:(id)a0 forObjectWithID:(id)a1 andRelationshipName:(id)a2;
- (id)_metadataForRecordID:(id)a0;
- (BOOL)cacheMetadataForObjectsWithIDs:(id)a0 andRecordsWithIDs:(id)a1 inStore:(id)a2 withManagedObjectContext:(id)a3 error:(id *)a4;
- (id)recordMetadataForObjectID:(id)a0;
- (id)mirroredRelationshipForRecordID:(id)a0;
- (void)registerMirroredRelationship:(id)a0 forKey:(id)a1;

@end
