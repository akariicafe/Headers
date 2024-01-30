@class NSString, NSData, NSDate, NSNumber;

@interface PLGenericAlbumJournalEntryPayload : PLManagedObjectJournalEntryPayload

@property (readonly, nonatomic) NSString *cloudGUID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSNumber *kind;
@property (readonly, nonatomic) BOOL isPinned;
@property (readonly, nonatomic) BOOL isPrototype;
@property (readonly, nonatomic) BOOL isInTrash;
@property (readonly, nonatomic) BOOL customSortAscending;
@property (readonly, nonatomic) int customSortKey;
@property (readonly, nonatomic) NSString *customKeyAssetUUID;
@property (readonly, nonatomic) NSString *importSessionID;
@property (retain, nonatomic) NSData *userQueryData;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *importedByBundleIdentifier;

+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;

- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (id)insertAlbumFromDataInManagedObjectContext:(id)a0;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (void)updateAlbum:(id)a0 includePendingChanges:(BOOL)a1;
- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;

@end
