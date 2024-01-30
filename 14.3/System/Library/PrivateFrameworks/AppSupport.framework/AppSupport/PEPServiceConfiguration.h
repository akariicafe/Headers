@class NSString;

@interface PEPServiceConfiguration : NSObject {
    NSString *_cacheFilePath;
    BOOL _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (id)sharedInstance;

- (BOOL)registerNetworkDefaultsForAppID:(id)a0;
- (id)init;
- (void)_updateDefaults:(id)a0;
- (BOOL)registerNetworkDefaultsForAppIDs:(id)a0 forceUpdate:(BOOL)a1;
- (void)dealloc;
- (void)_postNotification;

@end
