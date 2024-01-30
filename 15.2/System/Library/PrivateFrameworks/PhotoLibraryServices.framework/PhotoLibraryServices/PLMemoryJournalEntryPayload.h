@class NSString, NSSet;

@interface PLMemoryJournalEntryPayload : PLJournalEntryPayload

@property (readonly, nonatomic) NSString *keyAssetUUID;
@property (readonly, nonatomic) NSSet *curatedAssetUUIDs;
@property (readonly, nonatomic) NSSet *extendedCuratedAssetUUIDs;
@property (readonly, nonatomic) NSSet *movieCuratedAssetUUIDs;
@property (readonly, nonatomic) NSSet *userCuratedAssetUUIDs;
@property (readonly, nonatomic) NSSet *representativeAssetUUIDs;

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (BOOL)updateAssetsInMemory:(id)a0 includePendingAssetChanges:(BOOL)a1;
- (id)insertMemoryFromDataInManagedObjectContext:(id)a0;
- (BOOL)hasAllAssetsAvailableInManagedObjectContext:(id)a0 includePendingAssetChanges:(BOOL)a1;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (id)initWithUserFeedback:(id)a0 changedKeys:(id)a1;
- (void)applyPayloadProperty:(id)a0 toManagedObject:(id)a1 key:(id)a2 payloadAttributesToUpdate:(id)a3;

@end
