@class NSData, NSString;

@interface PLProjectAlbum : PLManagedAlbum

@property (copy, nonatomic) NSData *projectData;
@property (copy, nonatomic) NSString *projectDocumentType;
@property (copy, nonatomic) NSString *projectExtensionIdentifier;
@property (copy, nonatomic) NSString *projectRenderUuid;

+ (id)entityName;
+ (BOOL)cleanupOrphanedProjectPreviewImagesInLibrary:(id)a0 error:(id *)a1;
+ (id)insertIntoPhotoLibrary:(id)a0 withUUID:(id)a1 documentType:(id)a2 projectExtensionIdentifier:(id)a3;
+ (id)validKindsForPersistence;
+ (id)albumSupportsAssetOrderKeysPredicate;

- (id)payloadForChangedKeys:(id)a0;
- (BOOL)supportsAssetOrderKeys;
- (void)willSave;
- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (id)_previewImageFilename;
- (id)projectPreviewImageData;
- (id)duplicateProjectPreviewImageData:(id)a0 error:(id *)a1;
- (BOOL)setProjectPreviewImageData:(id)a0 error:(id *)a1;

@end
