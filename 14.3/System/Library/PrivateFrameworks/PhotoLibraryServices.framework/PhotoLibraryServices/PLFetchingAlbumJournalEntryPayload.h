@interface PLFetchingAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (id)insertAlbumFromDataInManagedObjectContext:(id)a0;
- (void)migrateMergedPayloadWithUpdatePayloads:(id)a0;
- (void)_fixHasLocationSmartAlbum;

@end
