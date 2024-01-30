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

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)a0;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;

- (id)_insertDeferredRebuildFacesFromDataInManagedObjectContext:(id)a0;
- (BOOL)insertFaceFromDataInManagedObjectContext:(id)a0 allowDeferred:(BOOL *)a1;
- (id)assetID;
- (id)personUUID;
- (BOOL)isKeyFace;
- (BOOL)updatePayloadAttributes:(id)a0 withManagedObject:(id)a1 forPayloadProperty:(id)a2;
- (void)updateEncodableAttributes:(id)a0 fromPayloadAttributes:(id)a1 forPayloadProperty:(id)a2;
- (void)updatePayloadAttributes:(id)a0 withDecodedAttributes:(id)a1 forPayloadProperty:(id)a2;
- (BOOL)comparePayloadValue:(id)a0 toObjectDictionaryValue:(id)a1 forPayloadProperty:(id)a2;
- (id)_insertDeferredRebuildFaceForPersonUUID:(id)a0 inManagedObjectContext:(id)a1;
- (id)_insertDetectedFaceFromDataInManagedObjectContext:(id)a0;
- (long long)assetIdentifierType;

@end
