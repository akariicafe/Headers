@interface PLSMetadataUtilities : NSObject

+ (id)_allAlbumsInPhotoLibrary:(id)a0;
+ (id)_detailsForAlbum:(id)a0;
+ (id)_detailsForAsset:(id)a0 includingLocal:(BOOL)a1 includingFingerprints:(BOOL)a2;
+ (id)_normalizeObjectForJSON:(id)a0;
+ (BOOL)_writeDetails:(id)a0 forEntityNamed:(id)a1 toFilepath:(id)a2 withDefaultFilename:(id)a3;
+ (void)_writeJSONForObjectDetails:(id)a0 toFile:(id)a1;
+ (id)allAlbumsDetailsWriteToPath:(id)a0 inLibrary:(id)a1;
+ (id)allAssetsDetailsWriteToPath:(id)a0 includingLocal:(BOOL)a1 includingFingerprints:(BOOL)a2 forAlbumTitled:(id)a3 library:(id)a4;
+ (id)dictionaryFromManagedObject:(id)a0 excludeAttributes:(id)a1 includingRelationships:(id)a2 excludeRelationshipAttributes:(id)a3 andSubRelationships:(id)a4;
+ (BOOL)initializeJSONFileAtPath:(id)a0;
+ (void)serializeJSONFromObjectDetails:(id)a0 ToPath:(id)a1;
+ (void)writeJSONData:(id)a0 toFile:(id)a1;

@end
