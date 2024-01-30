@class NSString, NSDictionary;

@interface PLPersonJournalEntryPayload : PLJournalEntryPayload

@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *personUri;
@property (readonly, nonatomic) unsigned int manualOrder;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int verifiedType;
@property (readonly, nonatomic) int cloudVerifiedType;
@property (readonly, nonatomic) short keyFacePickSource;
@property (readonly, nonatomic) NSDictionary *contactMatchingDictionary;
@property (readonly, nonatomic) NSString *mergeTargetPersonUUID;

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (void)updateMergeTargetPersonWithPersonUUIDMapping:(id)a0 fromDataInManagedObjectContext:(id)a1;

- (id)insertPersonFromDataInManagedObjectContext:(id)a0;
- (void)applyPayloadProperty:(id)a0 toManagedObject:(id)a1 key:(id)a2 payloadAttributesToUpdate:(id)a3;
- (BOOL)updatePayloadAttributes:(id)a0 withManagedObject:(id)a1 forPayloadProperty:(id)a2;
- (void)updateEncodableAttributes:(id)a0 fromPayloadAttributes:(id)a1 forPayloadProperty:(id)a2;
- (void)updatePayloadAttributes:(id)a0 withDecodedAttributes:(id)a1 forPayloadProperty:(id)a2;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;

@end
