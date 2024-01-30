@class NSString;

@interface PLKeywordJournalEntryPayload : PLJournalEntryPayload

@property (readonly, nonatomic) NSString *title;

+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (id)insertKeywordFromDataInManagedObjectContext:(id)a0;

@end
