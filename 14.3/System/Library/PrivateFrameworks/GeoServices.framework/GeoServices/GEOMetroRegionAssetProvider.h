@class NSCache, NSDate;

@interface GEOMetroRegionAssetProvider : NSObject {
    NSDate *_lastCatalogLoadTime;
    unsigned int _catalogLoadRetryMultiplier;
    NSCache *_fileURLCache;
}

+ (id)sharedProvider;

- (id)init;
- (void).cxx_destruct;
- (id)urlForInstalledCountryCode:(id)a0;
- (void)_updateCatalogAfterDelay:(double)a0;
- (id)_acceptListForCountryCode:(id)a0 name:(id)a1;
- (void)_updateCatalog;
- (void)_catalogDownloadFinishedWithResult:(long long)a0;
- (id)homeMetroAcceptListForCountryCode:(id)a0;
- (id)homeCountryCodeAcceptListForCountryCode:(id)a0;

@end
