@class REConcurrentDictionary, NSSet, NSArray, REDataSourceLoader, NSDictionary, NSMutableArray;
@protocol REDataSourceManagerObserver;

@interface REDataSourceManager : RERelevanceEngineSubsystem <REDataSourceManagerProperties> {
    NSMutableArray *_dataSourceControllers;
    unsigned long long _dataSourceState;
    BOOL _locationAllowed;
    NSSet *_disabledDataSources;
    NSDictionary *_identifierDataSourceMap;
    NSDictionary *_identifierApplicationIdentifierMap;
    NSDictionary *_identifierOperatingSystemVersionMap;
    NSDictionary *_unmanagedDataSourcesMap;
    NSSet *_elementGroupSupportingConfigurations;
    REConcurrentDictionary *_elementGroupMap;
    BOOL _ignoreAppInstallation;
}

@property (retain) NSSet *availableDataSourceIdentifiers;
@property (retain) NSSet *currentDataSourceIdentifiers;
@property (retain) NSArray *currentDataSources;
@property (readonly, nonatomic) REDataSourceLoader *loader;
@property (readonly, nonatomic) NSSet *unrestirctedDataSourceIdentifiers;
@property (readonly, weak, nonatomic) id<REDataSourceManagerObserver> delegate;
@property (readonly, nonatomic, getter=hasCompletedFirstElementLoad) BOOL completedFirstElementLoad;
@property (readonly, nonatomic) NSSet *disabledDataSources;
@property (readonly, nonatomic) NSArray *dataSourceControllers;

+ (id)_prioritizedDataSourceClasses;
+ (BOOL)_isPrioritizedDataSourceClass:(Class)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)_updatePreferences;
- (struct { long long x0; long long x1; long long x2; })minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)a0;
- (void)enumerateElementDataSourceControllers:(id /* block */)a0;
- (id)initWithRelevanceEngine:(id)a0 dataSourceLoader:(id)a1 withDelegate:(id)a2;
- (Class)classForDataSourceIdentifier:(id)a0;
- (id)elementGroupForIdentifier:(id)a0;
- (void)_handleApplicationStateChange;
- (void)_queue_availableDataSourcesDidChange;
- (BOOL)_isApplicationRemovedOrRestrictedForIdentifier:(id)a0;
- (void)_queue_updateAvailableDataSourceIdentifiers;
- (void)_queue_unloadDataSourceWithIdentifier:(id)a0;
- (void)_queue_loadDataSourceWithIdentifier:(id)a0;

@end
