@class NSString, NSSet;

@interface PLMemoryJournalEntryPayload : PLJournalEntryPayload

@property (retain, nonatomic) NSString *keyAssetUUID;
@property (retain, nonatomic) NSSet *curatedAssetUUIDs;
@property (retain, nonatomic) NSSet *extendedCuratedAssetUUIDs;
@property (retain, nonatomic) NSSet *movieCuratedAssetUUIDs;
@property (retain, nonatomic) NSSet *representativeAssetUUIDs;

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (BOOL)updateAssetsInMemory:(id)a0 includePendingAssetChanges:(BOOL)a1;
- (id)insertMemoryFromDataInManagedObjectContext:(id)a0;
- (BOOL)hasAllAssetsAvailableInManagedObjectContext:(id)a0 includePendingAssetChanges:(BOOL)a1;
- (void)applyPayloadProperty:(id)a0 toManagedObject:(id)a1 key:(id)a2 payloadAttributesToUpdate:(id)a3;
- (BOOL)updatePayloadAttributes:(id)a0 withManagedObject:(id)a1 forPayloadProperty:(id)a2;
- (void)updateEncodableAttributes:(id)a0 fromPayloadAttributes:(id)a1 forPayloadProperty:(id)a2;
- (void)updatePayloadAttributes:(id)a0 withDecodedAttributes:(id)a1 forPayloadProperty:(id)a2;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;

@end
