@class NSNumber, NSString, NSDictionary;

@interface PLPersonJournalEntryPayload : PLManagedObjectJournalEntryPayload

@property (readonly, nonatomic) NSNumber *detectionType;
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

+ (unsigned int)payloadVersion;
+ (id)modelProperties;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (id)persistedPropertyNamesForEntityNames;
+ (void)updateMergeTargetPersonWithPersonUUIDMapping:(id)a0 fromDataInManagedObjectContext:(id)a1;

- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (void)applyPayloadProperty:(id)a0 toManagedObject:(id)a1 key:(id)a2 payloadAttributesToUpdate:(id)a3;
- (id)initWithUserFeedback:(id)a0 changedKeys:(id)a1;
- (id)insertPersonFromDataInManagedObjectContext:(id)a0;
- (id)payloadValueFromAttributes:(id)a0 forPayloadProperty:(id)a1;
- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;

@end
