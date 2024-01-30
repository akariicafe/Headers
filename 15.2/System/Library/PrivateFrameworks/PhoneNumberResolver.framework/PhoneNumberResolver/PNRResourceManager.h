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

- (void).cxx_destruct;
- (id)init;
- (void)_updateCatalogAfterDelay:(double)a0;
- (void)_catalogDownloadFinishedWithResult:(long long)a0;
- (void)dealloc;
- (id)_lastCatalogLoadTime;
- (void)_updateCatalog;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)_stateCaptureWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (id)_getDataFrom:(id)a0 zeroCacheCost:(BOOL)a1 logId:(id)a2;
- (void)_URLForInstalledResourceOfType:(id)a0 logId:(id)a1 resultBlock:(id /* block */)a2;
- (void)_openLatestAssetWithBasename:(id)a0 maType:(id)a1 logId:(id)a2 resultBlock:(id /* block */)a3;
- (BOOL)_lookupString:(id)a0 inTrieMemory:(void *)a1 value:(unsigned int *)a2;
- (void)openCountryCodeFileUsingLogId:(id)a0 withResult:(id /* block */)a1;
- (void)openNANPFileUsingLogId:(id)a0 withResult:(id /* block */)a1;
- (void)_bestStringForInCountryPhoneNumber:(id)a0 phoneNumberCC:(id)a1 countryOfDevice:(id)a2 countryTrieData:(id)a3 countryStrings:(id)a4 logId:(id)a5 resultBlock:(id /* block */)a6;
- (void)openPNRFilesForPrefix:(id)a0 logId:(id)a1 withResult:(id /* block */)a2;
- (id)_assetQueryForPNRResource:(id)a0;
- (void)_setLastCatalogLoadTime:(id)a0;
- (void)lookupCCForPhoneNumber:(id)a0 logId:(id)a1 withResult:(id /* block */)a2;
- (void)lookupISOCountryCodeFromNANPNumber:(id)a0 logId:(id)a1 withResult:(id /* block */)a2;
- (void)lookupStringForPhoneNumber:(id)a0 inCC:(id)a1 countryCodeOfDevice:(id)a2 logId:(id)a3 withResult:(id /* block */)a4;
- (void)catalogLoadThen:(id /* block */)a0;

@end
