@interface PLDeferredRebuildFaceJournalEntryPayload : PLManagedObjectJournalEntryPayload

+ (unsigned int)payloadVersion;
+ (id)modelProperties;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;

- (id)insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)a0;

@end
