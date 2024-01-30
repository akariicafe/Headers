@class MKPhotoLibraryAssetDatabase;

@interface MKPhotoLibraryAlbumMigrator : MKMigrator {
    MKPhotoLibraryAssetDatabase *_db;
}

- (id)init;
- (void).cxx_destruct;
- (void)import;
- (void)setCollections;
- (void)setIdentifier:(id)a0 forAsset:(id)a1;

@end
