@class NSString;

@interface PLPersistedPersonFaceMetadata : NSObject <NSSecureCoding, PLFaceRebuildDescription>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *assetUUID;
@property (copy, nonatomic) NSString *assetCloudGUID;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double size;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isManual) BOOL manual;
@property (nonatomic, getter=isRepresentative) BOOL representative;
@property (nonatomic, getter=isClusterRejected) BOOL clusterRejected;
@property (nonatomic) int nameSource;
@property (nonatomic) int cloudNameSource;
@property (readonly, nonatomic, getter=isHidden) BOOL isHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_detectedFacePropertiesToFetch;
+ (id)_detectedFaceRelationshipKeyPathsToPrefetch;
+ (id)_persistedFacesWithUnarchiver:(id)a0 key:(id)a1;
+ (id)_persistedFaceMetadataWithDetectedFace:(id)a0 isKeyFace:(BOOL)a1 isClusterRejected:(BOOL)a2;
+ (id)_migrateDetectedFaces:(id)a0 forPersonMetadata:(id)a1 fromVersion:(unsigned long long)a2;
+ (void)enumerateMatchedAssetsWithMetadata:(id)a0 inContext:(id)a1 withBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (id)_identifier;
- (id)initWithCoder:(id)a0;
- (id)_insertDeferredRebuildFaceFromDataInManagedObjectContext:(id)a0 personUUID:(id)a1 isRejected:(BOOL)a2;
- (id)matchingFaceInManagedObejctContext:(id)a0;
- (BOOL)matchesEntityInLibraryBackedByManagedObjectContext:(id)a0 forConfirmedPersonUUID:(id)a1 diff:(id *)a2;
- (BOOL)matchesEntityInLibraryBackedByManagedObjectContext:(id)a0 forRejectedPersonUUID:(id)a1 diff:(id *)a2;
- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;

@end
