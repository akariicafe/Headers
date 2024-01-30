@class NSMutableDictionary, NSMutableSet;

@interface PFCloudKitMetadataCache : NSObject {
    NSMutableDictionary *_recordZoneIDToZoneMetadata;
    NSMutableDictionary *_objectIDToRecordMetadata;
    NSMutableDictionary *_recordIDToMirroredRelationshipOrRecordMetadata;
    NSMutableDictionary *_zoneIDToMtmKeyToMirroredRelationship;
    NSMutableDictionary *_objectIDToRelationshipNameToExistingMTMKeys;
    NSMutableDictionary *_objectIDToChangedPropertyKeys;
    NSMutableSet *_invalidatedMTMKeys;
}

- (id)init;
- (void)dealloc;

@end
