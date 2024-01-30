@class NSString;

@interface PLDetectedFaceJournalEntryPayload : PLJournalEntryPayload <PLFaceRebuildDescription>

@property (readonly, nonatomic) double centerX;
@property (readonly, nonatomic) double centerY;
@property (readonly, nonatomic) double size;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isManual) BOOL manual;
@property (readonly, nonatomic, getter=isRepresentative) BOOL representative;
@property (readonly, nonatomic) int nameSource;
@property (readonly, nonatomic) int cloudNameSource;
@property (readonly, nonatomic, getter=isClusterRejected) BOOL clusterRejected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0 additionalEntityName:(id)a1;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)persistedPropertyNamesForEntityNames;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (double)bodyCenterY;
- (double)bodyHeight;
- (id)detectionType;
- (id)detectionTraits;
- (id)_insertDeferredRebuildFaceForPersonUUID:(id)a0 inManagedObjectContext:(id)a1;
- (id)_insertDetectedFaceFromDataInManagedObjectContext:(id)a0;
- (id)_insertDeferredRebuildFacesFromDataInManagedObjectContext:(id)a0;
- (BOOL)insertFaceFromDataInManagedObjectContext:(id)a0 allowDeferred:(BOOL *)a1;
- (long long)assetIdentifierType;
- (id)rejectedPersonsUUIDs;
- (id)clusterRejectedPersonsUUIDs;
- (id)initWithDetectionTrait:(id)a0 changedKeys:(id)a1;
- (double)bodyWidth;
- (id)personUUID;
- (double)bodyCenterX;
- (void)appendAttributeKey:(id)a0 value:(id)a1 toDescriptionBuilder:(id)a2;
- (BOOL)updatePayloadAttributes:(id)a0 andNilAttributes:(id)a1 withManagedObject:(id)a2 forPayloadProperty:(id)a3;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (id)assetID;
- (BOOL)isKeyFace;
- (id)additionalDescription;

@end
