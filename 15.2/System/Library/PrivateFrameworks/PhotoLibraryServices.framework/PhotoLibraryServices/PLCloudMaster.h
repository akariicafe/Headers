@class NSString, NSSet, PLCloudMasterMediaMetadata, NSDate, PLMomentShare, CPLScopedIdentifier;

@interface PLCloudMaster : PLManagedObject <PLSyncableObject>

@property (retain, nonatomic) NSString *cloudMasterGUID;
@property (retain, nonatomic) NSString *sourceMasterForDuplicationIdentifier;
@property (retain, nonatomic) NSString *sourceMasterForDuplicationScopeIdentifier;
@property (nonatomic) short cloudLocalState;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) short fullSizeJPEGSource;
@property (retain, nonatomic) NSDate *importDate;
@property (retain, nonatomic) NSString *uniformTypeIdentifier;
@property (retain, nonatomic) NSString *originalFilename;
@property (nonatomic) short originalOrientation;
@property (retain, nonatomic) NSString *importSessionID;
@property (copy, nonatomic) NSString *originatingAssetIdentifier;
@property (nonatomic) short placeholderState;
@property (nonatomic) short importedBy;
@property (retain, nonatomic) NSString *importedByBundleIdentifier;
@property (retain, nonatomic) NSString *importedByDisplayName;
@property (nonatomic) NSString *codecName;
@property (nonatomic) short videoFrameRate;
@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic) NSSet *resources;
@property (retain, nonatomic) NSSet *transientModernResources;
@property (retain, nonatomic) NSString *mediaMetadataType;
@property (retain, nonatomic) PLCloudMasterMediaMetadata *mediaMetadata;
@property (retain, nonatomic) PLMomentShare *momentShare;
@property (retain, nonatomic) CPLScopedIdentifier *sourceMasterForDuplicationCPLScopedIdentifier;
@property (readonly, retain, nonatomic) id localID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)deleteOrphanedMastersWithManagedObjectContext:(id)a0;
+ (id)entityName;
+ (void)deleteAllCloudMastersInManagedObjectContext:(id)a0;
+ (id)cloudMasterWithScopedIdentifier:(id)a0 prefetchResources:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (void)resetCloudMastersStateInManagedObjectContext:(id)a0;
+ (id)_originalTypes;
+ (unsigned long long)fullSizeJPEGSourceForUTI:(id)a0 andImageDimensions:(struct CGSize { double x0; double x1; })a1;
+ (id)cloudMastersWithScopedIdentifiers:(id)a0 relationshipKeyPathsForPrefetching:(id)a1 inLibrary:(id)a2;
+ (id)insertIntoPhotoLibrary:(id)a0 withCloudMasterGUID:(id)a1 inMomentShare:(id)a2;
+ (id)listOfSyncedProperties;
+ (id)cloudMastersByScopedIdentifiers:(id)a0 relationshipKeyPathsForPrefetching:(id)a1 inLibrary:(id)a2;
+ (id)cloudMasterWithGUID:(id)a0 inMomentShare:(id)a1 prefetchResources:(BOOL)a2 inManagedObjectContext:(id)a3;

- (id)payloadID;
- (id)cplFullRecord;
- (void)awakeFromInsert;
- (void)rm_applyExpungeableResourceStatesFromCPLMasterChange:(id)a0 inPhotoLibrary:(id)a1;
- (BOOL)allOriginalsAreLocallyAvailableForAssetUuid:(id)a0 useOriginalAltInsteadOfOriginal:(BOOL)a1;
- (id)originalFilenameForResourceType:(unsigned long long)a0 filePath:(id)a1;
- (id)rm_assetUUIDToCloudResources;
- (id)cplPropertyRecord;
- (void)_promptForNilScopeIdentifierRadar;
- (id)sourceMasterForDuplicationCPLScopedIdentifier;
- (id)allMasterResources;
- (id)rm_cloudResourcesForResourceType:(unsigned long long)a0;
- (void)applyPropertiesFromCPLMasterChange:(id)a0;
- (id)payloadsForChangedKeys:(id)a0;
- (void)updateImportedByBundleIdentifier:(id)a0;
- (id)rm_applyResourcesFromCPLMasterChange:(id)a0 inPhotoLibrary:(id)a1;
- (id)scopedIdentifier;
- (id)rm_cloudResourceForResourceType:(unsigned long long)a0 forAssetUuid:(id)a1;
- (BOOL)isSyncableChange;
- (BOOL)allOriginalsAreUploaded;
- (BOOL)hasResourcesOtherThanForAssetUuid:(id)a0;
- (unsigned long long)sizeOfOriginal;
- (BOOL)supportsCloudUpload;
- (void)updateImportedByDisplayName:(id)a0;
- (void)setSourceMasterForDuplicationCPLScopedIdentifier:(id)a0;
- (id)cplMasterPropertyChangeForAsset:(id)a0;

@end
