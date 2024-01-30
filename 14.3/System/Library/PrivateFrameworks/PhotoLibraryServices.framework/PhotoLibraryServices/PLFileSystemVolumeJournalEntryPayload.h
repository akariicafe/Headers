@interface PLFileSystemVolumeJournalEntryPayload : PLJournalEntryPayload

+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (id)insertFileSystemVolumeFromDataInManagedObjectContext:(id)a0;

@end
