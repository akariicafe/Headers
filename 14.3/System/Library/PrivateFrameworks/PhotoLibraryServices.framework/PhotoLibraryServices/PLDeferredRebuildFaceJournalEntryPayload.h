@interface PLDeferredRebuildFaceJournalEntryPayload : PLJournalEntryPayload

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0;
+ (id)modelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (id)insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)a0;

@end
