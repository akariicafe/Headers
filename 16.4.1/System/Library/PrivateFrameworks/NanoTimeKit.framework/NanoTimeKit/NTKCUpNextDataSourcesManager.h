@class NSArray, RERelevanceEngine, NSObject;
@protocol OS_dispatch_queue, NTKCUpNextDataSourcesManagerIdentifiersDelegate;

@interface NTKCUpNextDataSourcesManager : NSObject {
    RERelevanceEngine *_relevanceEngine;
}

@property (copy) NSArray *firstPartyDataSourceEntries;
@property (copy) NSArray *sportsDataSourceEntries;
@property (copy) NSArray *thirdPartyDataSourceEntries;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (readonly, nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } watchVersion;
@property (weak, nonatomic) id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> firstPartyIdentifiersDelegate;
@property (weak, nonatomic) id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> thirdPartyIdentifiersDelegate;
@property (weak, nonatomic) id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> sportsIdentifiersDelegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_buildRows;
- (void)_appsChangedNotification:(id)a0;
- (void)_buildRowsAfterPrewarming;
- (void)_dataSourcesChangedNotification:(id)a0;
- (id)_dedupeAndSortFirstPartyDataSourcesFromIdentifiers:(id)a0;
- (void)_dedupeAndSortThirdPartyDataSourcesFromIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)_fetchThirdPartyBundleIdentifiersWithCompletion:(id /* block */)a0;
- (id)_firstPartyDataSourceEntries;
- (BOOL)_isNanoWeatherAppID:(id)a0;
- (void)_phoneDedupeFromIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)_phoneDedupedDataSourcesFromIdentifiers:(id)a0 completion:(id /* block */)a1;
- (id)_preGraceThirdPartyBundleIdentifiers;
- (void)_prewarmRowBuildingWithCompletion:(id /* block */)a0;
- (void)fetchIdentifiers;
- (id)initWatchVersion:(struct { long long x0; long long x1; long long x2; })a0;

@end
