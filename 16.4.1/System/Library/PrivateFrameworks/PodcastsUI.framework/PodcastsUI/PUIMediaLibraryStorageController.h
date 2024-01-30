@interface PUIMediaLibraryStorageController : NSObject {
    void /* unknown type, empty encoding */ _storageCleanupObservers;
    void /* unknown type, empty encoding */ _globalAutomaticDownloadLimit;
    void /* unknown type, empty encoding */ activeObserver;
    void /* unknown type, empty encoding */ globalDownloadLimitObserver;
    void /* unknown type, empty encoding */ downloadedAssetsAsPercentageOfTotalSpace;
    void /* unknown type, empty encoding */ _ignoredAssetsAsPercentageOfTotalSpace;
    void /* unknown type, empty encoding */ _shouldDisplayStorageCleanupTip;
    void /* unknown type, empty encoding */ _shouldDisplayStorageCleanupTipPublisher;
}

@property (class, nonatomic, readonly) PUIMediaLibraryStorageController *shared;

@property (nonatomic) BOOL shouldDisplayStorageCleanupTip;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)ignoreStorageCleanupPrompt;
- (void)mediaLibraryDidChange;
- (long long)observeStorageCleanupChange:(id /* block */)a0;
- (void)refreshDownloadedAssets;
- (void)removeStorageCleanupChangeObserverWith:(long long)a0;

@end
