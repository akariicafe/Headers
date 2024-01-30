@class NSData, NSString;

@interface PLProjectAlbum : PLManagedAlbum

@property (copy, nonatomic) NSData *projectData;
@property (copy, nonatomic) NSString *projectDocumentType;
@property (copy, nonatomic) NSString *projectExtensionIdentifier;
@property (copy, nonatomic) NSString *projectRenderUuid;

+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)a0 withUUID:(id)a1 documentType:(id)a2 projectExtensionIdentifier:(id)a3;
+ (BOOL)cleanupOrphanedProjectPreviewImagesInLibrary:(id)a0 error:(id *)a1;
+ (id)validKindsForPersistence;
+ (id)albumSupportsAssetOrderKeysPredicate;

- (void)prepareForDeletion;
- (BOOL)supportsAssetOrderKeys;
- (id)payloadForChangedKeys:(id)a0;
- (void)awakeFromInsert;
- (id)_previewImageFilename;
- (id)projectPreviewImageData;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void)willSave;
- (BOOL)setProjectPreviewImageData:(id)a0 error:(id *)a1;
- (id)duplicateProjectPreviewImageData:(id)a0 error:(id *)a1;

@end
