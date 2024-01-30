@class PXPlacesSearchProvider, NSMutableDictionary, NSTimer, NSObject, NSCache;
@protocol OS_dispatch_queue;

@interface PUSearchHomeThumbnailManager : NSObject

@property (retain, nonatomic) NSCache *cache;
@property (retain, nonatomic) NSMutableDictionary *metadataPlist;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *metadataQueue;
@property (retain, nonatomic) PXPlacesSearchProvider *placesProvider;
@property (retain, nonatomic) NSTimer *diskTimer;
@property (retain, nonatomic) NSMutableDictionary *thumbnailsToWrite;

+ (id)_filePathForHash:(id)a0;
+ (id)_filePathForMetadataPlist;
+ (id)_thumbnailFilePath;

- (id)init;
- (void).cxx_destruct;
- (void)_createThumbnailDirectoryIfNeeded;
- (void)_fetchImageForLocation:(id)a0 size:(struct CGSize { double x0; double x1; })a1 traitCollection:(id)a2 completion:(id /* block */)a3;
- (id)_hashStringForKey:(id)a0 size:(struct CGSize { double x0; double x1; })a1 interfaceStyle:(long long)a2 displayScale:(double)a3;
- (id)_imageForHomeZeroKeywordWithMapImage:(id)a0;
- (void)_setInMemoryAndPersistToDiskThumbnail:(id)a0 forHashString:(id)a1;
- (void)_setInMemoryThumbnail:(id)a0 forHashString:(id)a1;
- (void)_setMetadataDate:(id)a0 forKey:(id)a1;
- (void)_writeMetadataPlistToDisk;
- (void)thumbnailForKey:(id)a0 type:(long long)a1 traitCollection:(id)a2 withSize:(struct CGSize { double x0; double x1; })a3 completion:(id /* block */)a4;

@end
