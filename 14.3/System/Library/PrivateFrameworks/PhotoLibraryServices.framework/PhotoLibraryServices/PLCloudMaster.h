@class NSString, NSSet, PLCloudMasterMediaMetadata, NSDate, PLMomentShare;

@interface PLCloudMaster : PLManagedObject <PLSyncableObject>

@property (retain, nonatomic) NSString *cloudMasterGUID;
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
@property (nonatomic) NSString *codecName;
@property (nonatomic) short videoFrameRate;
@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic) NSSet *resources;
@property (retain, nonatomic) NSSet *transientModernResources;
@property (retain, nonatomic) NSString *mediaMetadataType;
@property (retain, nonatomic) PLCloudMasterMediaMetadata *mediaMetadata;
@property (retain, nonatomic) PLMomentShare *momentShare;
@property (readonly, retain, nonatomic) id localID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cloudMastersByScopedIdentifiers:(id)a0 relationshipKeyPathsForPrefetching:(id)a1 inLibrary:(id)a2;
+ (id)insertIntoPhotoLibrary:(id)a0 withCloudMasterGUID:(id)a1 inMomentShare:(id)a2;
+ (id)entityName;
+ (id)cloudMasterWithScopedIdentifier:(id)a0 prefetchResources:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (unsigned long long)fullSizeJPEGSourceForUTI:(id)a0 andImageDimensions:(struct CGSize { double x0; double x1; })a1;
+ (id)cloudMasterWithGUID:(id)a0 inMomentShare:(id)a1 prefetchResources:(BOOL)a2 inManagedObjectContext:(id)a3;
+ (void)deleteAllCloudMastersInManagedObjectContext:(id)a0;
+ (void)resetCloudMastersStateInManagedObjectContext:(id)a0;
+ (id)_originalTypes;
+ (id)cloudMastersWithScopedIdentifiers:(id)a0 relationshipKeyPathsForPrefetching:(id)a1 inLibrary:(id)a2;
+ (id)listOfSyncedProperties;

- (void)awakeFromInsert;
- (void)applyPropertiesFromCPLMasterChange:(id)a0;
- (id)scopedIdentifier;
- (BOOL)allOriginalsAreUploaded;
- (id)allMasterResources;
- (id)cplMasterPropertyChangeForAsset:(id)a0;
- (id)cplPropertyRecord;
- (unsigned long long)sizeOfOriginal;
- (void)_promptForNilScopeIdentifierRadar;
- (id)rm_cloudResourcesForResourceType:(unsigned long long)a0;
- (BOOL)hasResourcesOtherThanForAssetUuid:(id)a0;
- (BOOL)supportsCloudUpload;
- (id)rm_cloudResourceForResourceType:(unsigned long long)a0 forAssetUuid:(id)a1;
- (id)rm_applyResourcesFromCPLMasterChange:(id)a0 inPhotoLibrary:(id)a1;
- (void)rm_applyExpungeableResourceStatesFromCPLMasterChange:(id)a0 inPhotoLibrary:(id)a1;
- (id)rm_assetUUIDToCloudResources;
- (BOOL)isSyncableChange;
- (id)originalFilenameForResourceType:(unsigned long long)a0 filePath:(id)a1;
- (id)cplFullRecord;
- (id)payloadsForChangedKeys:(id)a0;
- (BOOL)allOriginalsAreLocallyAvailableForAssetUuid:(id)a0 useOriginalAltInsteadOfOriginal:(BOOL)a1;

@end
