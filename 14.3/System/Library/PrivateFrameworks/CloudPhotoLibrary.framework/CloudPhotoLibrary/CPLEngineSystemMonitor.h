@class NSString, CPLEngineLibrary, NSURL, CPLNetworkWatcher, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, _CPLScheduledOverrideDelegate, CPLEngineComponent> {
    BOOL _closed;
    NSURL *_volumeURL;
    NSObject<OS_dispatch_queue> *_queue;
    CPLNetworkWatcher *_watcher;
    BOOL _modifyingBudgetOverride;
    unsigned long long _newBudgetsToOverride;
    unsigned long long _newBudgetsToStopOverriding;
    NSMutableDictionary *_reasonsToOverrideSystemBudget;
    NSMutableDictionary *_scheduledOverrides;
    BOOL _overrideDataSystemBudgetPermanently;
    BOOL _allowOperationsBoost;
    BOOL _allowBackgroundOperationsBoost;
}

@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary;
@property (readonly) unsigned long long diskPressureState;
@property (readonly) unsigned long long freeDiskSpaceSize;
@property (readonly) BOOL isNetworkConnected;
@property (readonly) BOOL isNetworkConstrained;
@property (readonly) BOOL isOnCellularOrUnknown;
@property (readonly) BOOL isDataBudgetOverriden;
@property (readonly) BOOL canBoostOperations;
@property (readonly) BOOL canBoostBackgroundOperations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enumerateSystemBudgets:(unsigned long long)a0 withBlock:(id /* block */)a1;
+ (id)descriptionForBudget:(unsigned long long)a0;
+ (id)descriptionForBudgets:(unsigned long long)a0;

- (id)componentName;
- (void)openWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)getStatusWithCompletionHandler:(id /* block */)a0;
- (void)getStatusDictionaryWithCompletionHandler:(id /* block */)a0;
- (void)closeAndDeactivate:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithEngineLibrary:(id)a0;
- (void)scheduledOverrideDidEnd:(id)a0;
- (void)watcher:(id)a0 stateDidChangeToNetworkState:(id)a1;
- (void)updateDiskPressureState;
- (void)_startOverridingBudget:(unsigned long long)a0 reason:(id)a1;
- (void)_stopOverridingBudget:(unsigned long long)a0 reason:(id)a1;
- (void)_withSystemBudgetOverride:(id /* block */)a0;
- (void)startOverridingSystemBudgets:(unsigned long long)a0 reason:(id)a1;
- (void)stopOverridingSystemBudgets:(unsigned long long)a0 reason:(id)a1;
- (void)startOverridingSystemBudgetsForClient:(unsigned long long)a0;
- (void)stopOverridingSystemBudgetsForClient:(unsigned long long)a0;
- (BOOL)_hasPermanentDataOverride;
- (void)_permanentDataOverrideHasChanged;
- (void)_startWatchingPermanentDataOverride;
- (void)_stopWatchingPermanentDataOverride;

@end
