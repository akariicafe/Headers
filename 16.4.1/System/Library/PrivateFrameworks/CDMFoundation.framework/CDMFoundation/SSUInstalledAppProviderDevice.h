@class NSString;

@interface SSUInstalledAppProviderDevice : NSObject <SSUInstalledAppProvider>

@property (readonly, nonatomic) NSString *locale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)applicationInfoFromAppRecord:(id)a0;
- (id)lookupAllSSUEnabledApps;
- (id)lookupSSUAssetDirectoryFromAppRecord:(id)a0;
- (id)lookupSSUEnabledAppByBundleId:(id)a0;

@end
