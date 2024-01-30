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
+ (id)_defaultFixedModuleIdentifiers;
+ (id)_configurationDirectoryURL;
+ (id)_readSettings;
+ (id)_defaultUserEnabledFixedModuleIdentifiers;
+ (id)_defaultUserEnabledModuleIdentifiers;
+ (void)_writeOrderedIdentifiers:(id)a0 userEnabledFixedIdentifiers:(id)a1 userDisabledIdentifiers:(id)a2;
+ (id)_defaultEnabledModuleOrder;

- (void)_queue_runBlockOnListeners:(id /* block */)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_queue_loadSettings;
- (void)setAndSaveOrderedUserEnabledFixedModuleIdentifiers:(id)a0;
- (void)_queue_handleConfigurationFileUpdate;
- (void).cxx_destruct;
- (id)init;
- (void)_queue_stopMonitoringConfigurationUpdates;
- (void)_queue_startMonitoringConfigurationUpdates;
- (void)dealloc;
- (void)_queue_saveSettings;
- (void)_queue_sendConfigurationFileUpdateMessageToObservers;
- (void)setAndSaveOrderedUserEnabledModuleIdentifiers:(id)a0;

@end
