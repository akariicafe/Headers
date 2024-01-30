@class NSString;

@interface PLKeywordJournalEntryPayload : PLJournalEntryPayload

@property (readonly, nonatomic) NSString *title;

+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (id)insertKeywordFromDataInManagedObjectContext:(id)a0;

@end
