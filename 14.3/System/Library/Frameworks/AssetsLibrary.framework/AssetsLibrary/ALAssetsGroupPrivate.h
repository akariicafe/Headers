@class PLPhotoLibrary, NSMutableDictionary, NSString, ALAssetsLibrary, NSObject, ALAssetsFilter;
@protocol PLAlbumProtocol;

@interface ALAssetsGroupPrivate : NSObject <ALAssetsLibraryAsset> {
    BOOL _loadedAssets;
    ALAssetsLibrary *_library;
}

@property (retain, nonatomic) NSMutableDictionary *propertyValues;
@property (retain, nonatomic) NSObject<PLAlbumProtocol> *album;
@property (retain, nonatomic) PLPhotoLibrary *_photoLibrary;
@property (nonatomic) BOOL isCloudSharedGroup;
@property (nonatomic) BOOL applyHyperionFilter;
@property (retain, nonatomic) ALAssetsFilter *assetsFilter;
@property (nonatomic) unsigned long long groupType;
@property (nonatomic) BOOL isValid;
@property (nonatomic) ALAssetsLibrary *library;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueForProperty:(id)a0;
- (void).cxx_destruct;
- (void)_performBlockAndWait:(id /* block */)a0;
- (void)dealloc;
- (void)setValue:(id)a0 forProperty:(id)a1;
- (void)libraryDidChange;
- (id)initWithAlbum:(id)a0 library:(id)a1;
- (int)albumFilter;
- (void)resetAssets;
- (void)updateAlbumFiltering;
- (void)populateAssets;

@end
