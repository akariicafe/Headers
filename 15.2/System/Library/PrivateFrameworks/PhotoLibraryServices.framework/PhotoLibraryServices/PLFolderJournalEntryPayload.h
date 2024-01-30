@class NSOrderedSet;

@interface PLFolderJournalEntryPayload : PLGenericAlbumJournalEntryPayload

@property (readonly, nonatomic) BOOL isRootFolder;
@property (readonly, nonatomic) BOOL isProjectAlbumRootFolder;
@property (readonly, nonatomic) NSOrderedSet *childCollectionUUIDs;

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (void)updateChildrenOrderingInFolder:(id)a0 usingChildCollectionUUIDs:(id)a1 includePendingChanges:(BOOL)a2;
+ (id)modelPropertiesDescription;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (id)insertAlbumFromDataInManagedObjectContext:(id)a0;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;
- (void)updateAlbum:(id)a0 includePendingChanges:(BOOL)a1;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;

@end
