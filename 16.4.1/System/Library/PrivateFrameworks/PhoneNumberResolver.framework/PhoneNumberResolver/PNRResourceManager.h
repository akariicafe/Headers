@class NSMutableSet, NSDate, NSObject, NSCache;
@protocol OS_os_log;

@interface PNRResourceManager : NSObject {
    NSDate *_lastCatalogLoadTime;
    unsigned int _catalogLoadRetryMultiplier;
    NSCache *_fileDataCache;
    NSCache *_maURLCache;
    unsigned long long _stateCaptureHandle;
    NSObject<OS_os_log> *_log;
    NSMutableSet *_downloadsInflight;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _downloadsInflightLock;
}

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_catalogDownloadFinishedWithResult:(long long)a0;
- (void)_updateCatalogAfterDelay:(double)a0;
- (void)_URLForInstalledResourceOfType:(id)a0 logId:(id)a1 resultBlock:(id /* block */)a2;
- (id)_assetQueryForPNRResource:(id)a0;
- (void)_bestStringForInCountryPhoneNumber:(id)a0 phoneNumberCC:(id)a1 countryOfDevice:(id)a2 countryTrieData:(id)a3 countryStrings:(id)a4 logId:(id)a5 resultBlock:(id /* block */)a6;
- (id)_getDataFrom:(id)a0 zeroCacheCost:(BOOL)a1 logId:(id)a2;
- (id)_lastCatalogLoadTime;
- (BOOL)_lookupString:(id)a0 inTrieMemory:(void *)a1 value:(unsigned int *)a2;
- (void)_openLatestAssetWithBasename:(id)a0 maType:(id)a1 logId:(id)a2 resultBlock:(id /* block */)a3;
- (void)_setLastCatalogLoadTime:(id)a0;
- (void)_updateCatalog;
- (void)catalogLoadThen:(id /* block */)a0;
- (void)lookupCCForPhoneNumber:(id)a0 logId:(id)a1 withResult:(id /* block */)a2;
- (void)lookupISOCountryCodeFromNANPNumber:(id)a0 logId:(id)a1 withResult:(id /* block */)a2;
- (void)lookupStringForPhoneNumber:(id)a0 inCC:(id)a1 countryCodeOfDevice:(id)a2 logId:(id)a3 withResult:(id /* block */)a4;
- (void)openCountryCodeFileUsingLogId:(id)a0 withResult:(id /* block */)a1;
- (void)openNANPFileUsingLogId:(id)a0 withResult:(id /* block */)a1;
- (void)openPNRFilesForPrefix:(id)a0 logId:(id)a1 withResult:(id /* block */)a2;

@end
