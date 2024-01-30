@interface VUIPostPlayDataManager : NSObject

+ (void)fetchPostPlayItemForCurrentMediaItem:(id)a0 completion:(id /* block */)a1;
+ (void)_fetchPostPlayItemFromJSForSeriesCanonicalID:(id)a0 andVideoCanonicalID:(id)a1 completion:(id /* block */)a2;
+ (id)_metricsForPostPlayMediaItemFromLibrary:(id)a0;
+ (void)_fetchContentFromLibraryForCurrentMediaItem:(id)a0 completion:(id /* block */)a1;
+ (id)_generateMediaItemFromJSResponse:(id)a0 canAutoPlay:(BOOL)a1;
+ (void)_fetchPostPlayItemFromLibraryContentForStoreID:(id)a0 completion:(id /* block */)a1;

@end
