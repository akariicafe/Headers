@class NSObject, NSSet, NSMutableDictionary, REAppIconCache, REAppNameCache, REDataSourceManager, NSCache;
@protocol OS_dispatch_queue;

@interface REDataSourceCatalog : NSObject {
    REDataSourceManager *_dataSourceManager;
    NSCache *_iconCache;
    NSMutableDictionary *_localizedNameCache;
    NSObject<OS_dispatch_queue> *_queue;
    REAppIconCache *_appIconCache;
    REAppNameCache *_appNameCache;
}

@property (readonly, nonatomic) NSSet *dataSourceIdentifiers;
@property (readonly, nonatomic) NSSet *unrestrictedDataSourceIdentifiers;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDataSourceManager:(id)a0;
- (void)enumerateDataSources:(id /* block */)a0;
- (id)applicationIdentifierForDataSourceWithIdentifier:(id)a0;
- (BOOL)wantsApplicationPrewarmForDataSourceWithIdentifier:(id)a0;
- (BOOL)requiresLocationInUseAssertonForDataSourceWithIdentifier:(id)a0;
- (struct { long long x0; long long x1; long long x2; })minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)a0;
- (id)localizedNameForDataSourceWithIdentifier:(id)a0;
- (id)localizedNameForApplicationWithIdentifier:(id)a0;
- (BOOL)imageForDataSourceWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)imageForApplicationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_applicationsStatesDidChange;
- (void)donatedAppIdentifiersWithCompletion:(id /* block */)a0;
- (id)localAndRemoteAppIdentifiersForDataSourceIdentifiers:(id)a0;

@end
