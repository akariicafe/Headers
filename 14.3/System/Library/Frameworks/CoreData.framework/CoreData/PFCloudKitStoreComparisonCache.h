@class NSMutableDictionary;

@interface PFCloudKitStoreComparisonCache : PFStoreComparisonCache {
    NSMutableDictionary *_mtmKeyToStoreUUIDToMirroredRelationship;
    NSMutableDictionary *_storeUUIDToMtmKeys;
    NSMutableDictionary *_storeUUIDToRecordIDToRelationshipNameToRelatedRecordIDs;
    NSMutableDictionary *_recordIDToStoreUUIDToMetadata;
    NSMutableDictionary *_objectIDToRecordMetadata;
    NSMutableDictionary *_storeIdentifierToRecordIDs;
    NSMutableDictionary *_recordIDToStoreUUIDToObjectID;
    NSMutableDictionary *_objectIDToRecordID;
}

- (id)mtmKeysForStore:(id)a0;
- (id)recordIDForObjectID:(id)a0;
- (void)cacheRecordMetadata:(id)a0;
- (void)cacheMirroredRelationship:(id)a0 withManagedObjectModel:(id)a1;
- (id)objectIDForRecordID:(id)a0 inStore:(id)a1;
- (id)mirroredRelationshipForObject:(id)a0 relatedToObject:(id)a1 byRelationship:(id)a2;
- (id)metadataForObjectWithID:(id)a0;
- (id)init;
- (id)recordIDsRelatedToRecordID:(id)a0 byRelationshipNamed:(id)a1 inStore:(id)a2;
- (id)recordIdsForStore:(id)a0;
- (void)dealloc;

@end
