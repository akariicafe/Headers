@class PLPhotoLibrary, NSMutableDictionary, NSHashTable, ALAssetsLibrary;

@interface ALAssetsLibraryPrivate : NSObject {
    NSHashTable *_assetGroupInternals;
    NSMutableDictionary *_groupURLSByAlbumOID;
}

@property (nonatomic) ALAssetsLibrary *assetsLibrary;
@property (readonly, retain, nonatomic) PLPhotoLibrary *photoLibrary;
@property (nonatomic) BOOL isValid;

- (void)photoLibraryDidChange:(id)a0;
- (void)dealloc;
- (void)registerAlbum:(id)a0 assetGroupPrivate:(id)a1;
- (id)initWithAssetsLibrary:(id)a0;

@end
