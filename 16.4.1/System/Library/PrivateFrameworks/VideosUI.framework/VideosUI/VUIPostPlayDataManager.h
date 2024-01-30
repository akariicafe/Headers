@interface VUIPostPlayDataManager : NSObject

+ (void)_fetchContentFromLibraryForCurrentMediaItem:(id)a0 completion:(id /* block */)a1;
+ (void)_fetchPostPlayItemFromJSForSeriesCanonicalID:(id)a0 andVideoCanonicalID:(id)a1 completion:(id /* block */)a2;
+ (void)_fetchPostPlayItemFromLibraryContentForStoreID:(id)a0 completion:(id /* block */)a1;
+ (id)_generateMediaInfoFromJSResponse:(id)a0 canAutoPlay:(BOOL)a1;
+ (id)_metricsForPostPlayMediaItemFromLibrary:(id)a0;
+ (void)fetchPostPlayItemForCurrentMediaItem:(id)a0 completion:(id /* block */)a1;

@end
