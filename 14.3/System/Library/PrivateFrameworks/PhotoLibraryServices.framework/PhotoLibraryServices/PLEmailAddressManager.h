@class PLLazyObject, NSMutableDictionary, PLPhotoLibraryPathManager;

@interface PLEmailAddressManager : NSObject {
    NSMutableDictionary *_keysForEmails;
    NSMutableDictionary *_emailsForKey;
    int _maxKey;
    PLPhotoLibraryPathManager *_pathManager;
    PLLazyObject *_lazyAssetsdClient;
}

- (id)assetsdClient;
- (void).cxx_destruct;
- (id)plistPath;
- (id)initWithPathManager:(id)a0 lazyAssetsdClient:(id)a1;
- (void)_loadDictionariesIfNeeded;
- (id)emailAddressForKey:(id)a0;
- (id)keyForEmailAddress:(id)a0;

@end
