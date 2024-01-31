@class PLPhotoLibrary, NSMutableDictionary, NSHashTable, ALAssetsLibrary;

@interface ALAssetsLibraryPrivate : NSObject {
    NSHashTable *_assetGroupInternals;
    NSMutableDictionary *_groupURLSByAlbumOID;
}

@property (nonatomic) ALAssetsLibrary *assetsLibrary;
@property (readonly, retain, nonatomic) PLPhotoLibrary *photoLibrary;
@property (nonatomic) BOOL isValid;

- (void)dealloc;
- (void)photoLibraryDidChange:(id)a0;
- (id)initWithAssetsLibrary:(id)a0;
- (void)registerAlbum:(id)a0 assetGroupPrivate:(id)a1;

@end
