@class NSOrderedSet;

@interface PLAlbumListJournalEntryPayload : PLJournalEntryPayload

@property (readonly, nonatomic) NSOrderedSet *albumUUIDs;
@property (readonly, nonatomic) short albumListType;

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (id)insertAlbumListFromDataInManagedObjectContext:(id)a0;
- (void)updateAlbumList:(id)a0;
- (BOOL)updatePayloadAttributes:(id)a0 withManagedObject:(id)a1 forPayloadProperty:(id)a2;
- (void)updateEncodableAttributes:(id)a0 fromPayloadAttributes:(id)a1 forPayloadProperty:(id)a2;
- (void)updatePayloadAttributes:(id)a0 withDecodedAttributes:(id)a1 forPayloadProperty:(id)a2;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;

@end
