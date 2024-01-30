@class NSURL, QLExternalThumbnailCacheDatabase;

@interface QLExternalThumbnailCache : NSObject <QLThumbnailCache>

@property (retain, nonatomic) QLExternalThumbnailCacheDatabase *db;
@property (readonly, nonatomic) NSURL *directoryURL;
@property (readonly, nonatomic) NSURL *thumbnailsDirectoryURL;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) unsigned long long maximumCacheSize;

+ (id)writeThumbnailImage:(struct CGImage { } *)a0 inInboxAtURL:(id)a1;

- (void)dealloc;
- (void)close;
- (void).cxx_destruct;
- (BOOL)_createDirectoryWithURL:(id)a0 error:(id *)a1;
- (BOOL)_freeDiskSpaceToSaveThumbnailRepresentingFPItem:(id)a0 withFileAtURL:(id)a1 error:(id *)a2;
- (BOOL)_saveOrUpdateCachedThumbnailRepresentingFPItem:(id)a0 withFileAtURL:(id)a1 error:(id *)a2;
- (BOOL)_saveToDiskCachedThumbnailRepresentingFPItem:(id)a0 withFileAtURL:(id)a1 error:(id *)a2;
- (BOOL)_updateDatabaseWithCachedThumbnailRepresentingFPItem:(id)a0 withFileAtURL:(id)a1 error:(id *)a2;
- (id)_urlForThumbnailWithFPItem:(id)a0 originalThumbnailURL:(id)a1;
- (id)_urlForThumbnailWithFPItemIdentifier:(id)a0 fileExtension:(id)a1;
- (void)getThumbnailCacheURLWrappersWithCompletion:(id /* block */)a0;
- (void)getThumbnailURLForItem:(id)a0 completion:(id /* block */)a1;
- (id)inboxDirectoryURL;
- (id)initWithDirectoryURL:(id)a0 maximumCacheSize:(unsigned long long)a1 error:(id *)a2;
- (BOOL)removeAllThumbnails:(id *)a0;
- (void)storeThumbnailAtURL:(id)a0 forItem:(id)a1 completion:(id /* block */)a2;
- (BOOL)storeThumbnailAtURL:(id)a0 forItem:(id)a1 error:(id *)a2;
- (id)thumbnailURLForItem:(id)a0 error:(id *)a1;
- (id)writeThumbnailImageInInbox:(struct CGImage { } *)a0;

@end
