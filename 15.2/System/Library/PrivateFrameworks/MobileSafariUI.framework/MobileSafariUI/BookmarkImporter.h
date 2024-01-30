@class WebBookmarkCollection, NSArray;

@interface BookmarkImporter : NSObject {
    WebBookmarkCollection *_collection;
    NSArray *_carrierBookmarkInfo;
    NSArray *_oldDeletedStaticBookmarks;
}

- (id)_carrierBundleBuiltinBookmarkInfo;
- (void)importBuiltinBookmarks;
- (id)test_builtinFavoritesForLocale:(id)a0 deviceClass:(long long)a1;
- (id)_oldDeletedStaticBookmarks;
- (id)_builtinFavoritesForLocale:(id)a0 deviceClass:(long long)a1;
- (void)_getCarrierBundleBuiltinBookmarkInfoWithCompletion:(id /* block */)a0;
- (id)_lastImportedCarrierBookmarksInfo;
- (void)_importRootFolderBuiltinBookmarks;
- (void)_appendBookmarksFromSource:(id)a0 toParent:(int)a1;
- (id)_myAccountBookmarkInfo;
- (void)_importFavoritesFolderBuiltinBookmarks;
- (id)_googleChannelReplacementStringForDeviceClass:(long long)a0;
- (id)_uniqueYouTubeBookmarkFolderName;
- (id)_builtinBookmarkWithInfo:(id)a0 asCarrierBookmark:(BOOL)a1;
- (void)_importCarrierBookmarksIfNecessary;
- (void)_appendBuiltinBookmarkWithInfo:(id)a0 toParent:(int)a1 asCarrierBookmark:(BOOL)a2;
- (void).cxx_destruct;
- (void)_importCarrierBookmarksIfNecessaryAsync;
- (void)migrateYouTubeBookmarks;
- (void)_clearOldDeletedStaticBookmarks;
- (id)_builtInBookmarkItemWithTemplate:(id)a0 forLocale:(id)a1 deviceClass:(long long)a2;
- (long long)_currentDeviceClass;
- (void)_setLastImportedCarrierBookmarksInfo:(id)a0;
- (id)initWithBookmarkCollection:(id)a0;

@end
