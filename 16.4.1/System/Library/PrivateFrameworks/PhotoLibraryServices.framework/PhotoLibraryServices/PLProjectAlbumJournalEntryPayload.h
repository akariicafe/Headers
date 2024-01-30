@interface PLProjectAlbumJournalEntryPayload : PLAlbumJournalEntryPayload

+ (unsigned int)payloadVersion;
+ (id)modelProperties;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;

- (void)updateAlbum:(id)a0 includePendingChanges:(BOOL)a1;

@end
