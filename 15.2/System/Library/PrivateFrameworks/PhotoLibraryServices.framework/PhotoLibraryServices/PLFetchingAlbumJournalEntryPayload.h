@interface PLFetchingAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (id)insertAlbumFromDataInManagedObjectContext:(id)a0;
- (void)migrateMergedPayloadWithUpdatePayloads:(id)a0;
- (void)_fixHasLocationSmartAlbum;

@end
