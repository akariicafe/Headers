@interface PLDetectedFaceComputeJournalEntryPayload : PLDetectedFaceJournalEntryPayload

+ (id)entityName;
+ (unsigned int)payloadVersion;
+ (id)modelProperties;
+ (id)payloadAdapterForManagedObject:(id)a0;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;

- (id)detectionTraits;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (BOOL)insertDetectedFaceComputeWithAsset:(id)a0 inManagedObjectContext:(id)a1;

@end
