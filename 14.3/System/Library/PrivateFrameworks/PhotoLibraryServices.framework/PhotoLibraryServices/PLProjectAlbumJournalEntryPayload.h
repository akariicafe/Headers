@interface PLProjectAlbumJournalEntryPayload : PLAlbumJournalEntryPayload

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0;
+ (id)modelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (void)updateAlbum:(id)a0 includePendingChanges:(BOOL)a1;

@end
