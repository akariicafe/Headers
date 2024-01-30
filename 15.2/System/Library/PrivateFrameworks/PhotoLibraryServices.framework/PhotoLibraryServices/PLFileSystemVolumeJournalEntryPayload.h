@interface PLFileSystemVolumeJournalEntryPayload : PLJournalEntryPayload

+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (id)insertFileSystemVolumeFromDataInManagedObjectContext:(id)a0;

@end
