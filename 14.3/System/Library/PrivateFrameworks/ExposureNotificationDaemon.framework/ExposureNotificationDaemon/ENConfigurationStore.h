@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ENConfigurationStore : NSObject

@property (readonly, copy, nonatomic) NSString *directoryPath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storeQueue;
@property (nonatomic) BOOL developerServerConfiguration;
@property (copy, nonatomic) NSString *regionIdentifierOverride;

+ (id)legacyAppCacheURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDirectoryPath:(id)a0;
- (void)allRegionConfigurationsWithCompletion:(id /* block */)a0;
- (void)allRegionServerConfigurationsWithCompletion:(id /* block */)a0;
- (id)configurationForRegion:(id)a0;
- (id)serverConfigurationForRegion:(id)a0;
- (id)allRegionServerConfigurations;
- (void)enumerateCachedRegionServerConfigurationsWithHandler:(id /* block */)a0;
- (void)prefsChanged;
- (BOOL)saveRegionConfiguration:(id)a0 error:(id *)a1;
- (BOOL)saveTemporaryServerConfigurations:(id)a0 error:(id *)a1;
- (void)clearTemporaryServerConfigurations;
- (id)agencyConfigurationForRegion:(id)a0;
- (id)serverExposureConfigurationForRegion:(id)a0;
- (id)downloadConfigurationForRegion:(id)a0;
- (id)serverConfigurationResponseForRegion:(id)a0;
- (BOOL)removeConfigurationsForRegion:(id)a0 includingSubdivisions:(BOOL)a1 error:(id *)a2;
- (BOOL)saveServerConfigurationResponse:(id)a0 error:(id *)a1;
- (void)allCachedServerResponseConfigurationsWithCountryCode:(id)a0 completion:(id /* block */)a1;
- (void)allAgencyServerRegionConfigurationsWithCompletion:(id /* block */)a0;
- (id)subdivisionListForRegion:(id)a0;
- (id)regionCacheURL;
- (id)configurationCacheURL;
- (id)systemConfigurationCacheURL;
- (id)_configurationForRegion:(id)a0;
- (id)fileURLforRegionConfiguration:(id)a0;
- (id)_serverConfigurationResponseForRegion:(id)a0;
- (id)_agencyConfigurationForRegion:(id)a0;
- (BOOL)_saveCountrySubdivisionList:(id)a0 country:(id)a1 error:(id *)a2;
- (id)fileURLforCountrySubdivisionList:(id)a0;
- (BOOL)_saveServerConfigurationResponse:(id)a0 error:(id *)a1;
- (id)regionFromServerResponse:(id)a0;
- (id)fileURLforRegionServerConfiguration:(id)a0;
- (BOOL)removeConfigurationsForRegionCode:(id)a0 error:(id *)a1;
- (void)enumerateCachedRegionServerConfigurationsWithCountryCode:(id)a0 handler:(id /* block */)a1;
- (BOOL)_removeSubdivisionListForRegion:(id)a0 error:(id *)a1;
- (id)_directoryURLForCachedConfigurations;
- (void)_enumerateCachedServerResponseConfigurationsWithDirectoryURL:(id)a0 prefix:(id)a1 handler:(id /* block */)a2;
- (void)allCachedServerResponseConfigurationsWithCompletion:(id /* block */)a0;
- (id)_allCachedServerResponseConfigurationsWithPrefix:(id)a0;
- (id)allRegionServerConfigurationsForCountryCode:(id)a0;
- (id)_localeForRegion:(id)a0;
- (id)_serverConfigurationResponseForFileURL:(id)a0;
- (id)developerConfigurationsURL;
- (id)serverConfigurationCacheURL;
- (id)_serverConfigurationForRegion:(id)a0;
- (id)localeForRegion:(id)a0;
- (id)_subdivisionListForRegion:(id)a0;
- (id)_localeIdentifiersForRegion:(id)a0;
- (id)subdivisionListCacheURL;
- (BOOL)saveCountrySubdivisionList:(id)a0 region:(id)a1 error:(id *)a2;
- (BOOL)removeSubdivisionListForRegion:(id)a0 error:(id *)a1;
- (id)allCachedCountries;
- (BOOL)regionSupportsSubdivisions:(id)a0;
- (id)localeIdentifiersForRegion:(id)a0;
- (void)resetStore;
- (id)cachedAppConfiguationForBundleID:(id)a0 forRegionID:(id)a1;
- (id)legacyAppConfiguationForMobileCountryCode:(id)a0;

@end
