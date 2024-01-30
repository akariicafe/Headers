@class NSArray, NSHashTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CCSModuleSettingsProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSObject<OS_dispatch_source> *_configurationChangedSource;
    NSHashTable *_observers;
    NSArray *_orderedFixedModuleIdentifiers;
    NSArray *_orderedUserEnabledModuleIdentifiers;
    NSArray *_orderedUserEnabledFixedModuleIdentifiers;
    NSArray *_userDisabledModuleIdentifiers;
}

@property (readonly, copy, nonatomic) NSArray *orderedFixedModuleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *orderedUserEnabledModuleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *orderedUserEnabledFixedModuleIdentifiers;
@property (readonly, copy, nonatomic) NSArray *userDisabledModuleIdentifiers;

+ (void)initialize;
+ (id)sharedProvider;
+ (id)_configurationFileURL;
+ (id)_configurationDirectoryURL;
+ (BOOL)_continuousExposeEnabled;
+ (id)_defaultEnabledModuleOrder;
+ (id)_defaultFixedModuleIdentifiers;
+ (id)_defaultUserEnabledFixedModuleIdentifiers;
+ (id)_defaultUserEnabledModuleIdentifiers;
+ (id)_readSettings;
+ (void)_writeOrderedIdentifiers:(id)a0 userEnabledFixedIdentifiers:(id)a1 userDisabledIdentifiers:(id)a2;

- (void)_queue_startMonitoringConfigurationUpdates;
- (void)_queue_sendConfigurationFileUpdateMessageToObservers;
- (void)_queue_saveSettings;
- (void)addObserver:(id)a0;
- (void)_queue_handleConfigurationFileUpdate;
- (void)setAndSaveOrderedUserEnabledModuleIdentifiers:(id)a0;
- (void)setAndSaveOrderedUserEnabledFixedModuleIdentifiers:(id)a0;
- (void)_queue_loadSettings;
- (void)_queue_runBlockOnListeners:(id /* block */)a0;
- (void)_queue_stopMonitoringConfigurationUpdates;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
