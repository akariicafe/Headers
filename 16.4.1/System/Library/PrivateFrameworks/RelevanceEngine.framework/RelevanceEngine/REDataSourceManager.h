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
    BOOL _disableAutomaticContentManagement;
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

+ (BOOL)_isPrioritizedDataSourceClass:(Class)a0;
+ (id)_prioritizedDataSourceClasses;

- (void)_updatePreferences;
- (void)pause;
- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (struct { long long x0; long long x1; long long x2; })minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)a0;
- (void)_handleApplicationStateChange;
- (BOOL)_isApplicationRemovedOrRestrictedForIdentifier:(id)a0;
- (void)_queue_availableDataSourcesDidChange;
- (void)_queue_loadDataSourceWithIdentifier:(id)a0;
- (void)_queue_unloadDataSourceWithIdentifier:(id)a0;
- (void)_queue_updateAvailableDataSourceIdentifiers;
- (Class)classForDataSourceIdentifier:(id)a0;
- (id)elementGroupForIdentifier:(id)a0;
- (void)enumerateElementDataSourceControllers:(id /* block */)a0;
- (void)enumerateElementDataSourceControllers:(id /* block */)a0 completion:(id /* block */)a1;
- (id)initWithRelevanceEngine:(id)a0 dataSourceLoader:(id)a1 withDelegate:(id)a2;

@end
