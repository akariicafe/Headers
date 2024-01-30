@interface PLProjectAlbumJournalEntryPayload : PLAlbumJournalEntryPayload

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (void)updateAlbum:(id)a0 includePendingChanges:(BOOL)a1;

@end
