@class NSCache, NSDate;

@interface PNRResourceManager : NSObject {
    NSDate *_lastCatalogLoadTime;
    unsigned int _catalogLoadRetryMultiplier;
    NSCache *_fileDataCache;
    unsigned long long _stateCaptureHandle;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateCatalogAfterDelay:(double)a0;
- (void)_updateCatalog;
- (id)_lastCatalogLoadTime;
- (void)_catalogDownloadFinishedWithResult:(long long)a0;
- (struct os_state_data_s { unsigned int x0; union { unsigned int x0 : 32; unsigned int x1; } x1; struct os_state_data_decoder_s { char x0[64]; char x1[64]; } x2; char x3[64]; unsigned char x4[0]; } *)_stateCaptureWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (id)openCountryCodeFile;
- (BOOL)_lookupString:(id)a0 inTrieMemory:(void *)a1 value:(unsigned int *)a2;
- (id)openNANPFile;
- (id)openPNRFileForPrefix:(id)a0;
- (id)openPNRSFileForPrefix:(id)a0;
- (id)_bestStringForInCountryPhoneNumber:(id)a0 phoneNumberCC:(id)a1 countryOfDevice:(id)a2 countryTrieData:(id)a3 countryStrings:(id)a4;
- (id)_checkCacheForAssetName:(id)a0;
- (id)_URLForInstalledResourceOfType:(id)a0;
- (id)_readAndCacheDataFrom:(id)a0 forAssetName:(id)a1 zeroCacheCost:(BOOL)a2;
- (id)openLatestAssetWithBasename:(id)a0 maType:(id)a1;
- (id)_assetQueryForPNRResource:(id)a0;
- (id)_localFileURLForMAQuery:(id)a0 queryResult:(long long)a1;
- (void)_setLastCatalogLoadTime:(id)a0;
- (id)lookupCCForPhoneNumber:(id)a0;
- (id)lookupISOCountryCodeFromNANPNumber:(id)a0;
- (id)lookupStringForPhoneNumber:(id)a0 inCC:(id)a1 countryCodeOfDevice:(id)a2;
- (void)catalogLoadThen:(id /* block */)a0;

@end
