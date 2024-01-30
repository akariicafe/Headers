@class NSOrderedSet;

@interface PLFolderJournalEntryPayload : PLGenericAlbumJournalEntryPayload

@property (readonly, nonatomic) BOOL isRootFolder;
@property (readonly, nonatomic) BOOL isProjectAlbumRootFolder;
@property (readonly, nonatomic) NSOrderedSet *childCollectionUUIDs;

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0;
+ (id)modelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (void)updateChildrenOrderingInFolder:(id)a0 usingChildCollectionUUIDs:(id)a1 includePendingChanges:(BOOL)a2;

- (id)insertAlbumFromDataInManagedObjectContext:(id)a0;
- (void)updateAlbum:(id)a0 includePendingChanges:(BOOL)a1;
- (BOOL)updatePayloadAttributes:(id)a0 withManagedObject:(id)a1 forPayloadProperty:(id)a2;
- (void)updateEncodableAttributes:(id)a0 fromPayloadAttributes:(id)a1 forPayloadProperty:(id)a2;
- (void)updatePayloadAttributes:(id)a0 withDecodedAttributes:(id)a1 forPayloadProperty:(id)a2;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;

@end
