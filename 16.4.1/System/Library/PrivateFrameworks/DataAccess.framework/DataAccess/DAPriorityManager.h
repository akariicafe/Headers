@class NSMutableDictionary, NSMapTable, RBSProcessMonitor;

@interface DAPriorityManager : NSObject

@property (retain, nonatomic) NSMapTable *clientsToPriorityRequests;
@property (retain, nonatomic) RBSProcessMonitor *processMonitor;
@property (retain, nonatomic) NSMutableDictionary *cachedAppState;
@property (nonatomic) long long foregroundDataclasses;
@property (readonly, nonatomic) int currentPriority;

+ (void)vendPriorityManagers;
+ (id)sharedManager;

- (id)appIDsToDataclasses;
- (id)stateString;
- (void)_updateForegroundDataclasses;
- (void)bumpDataclassesToUIPriority:(long long)a0;
- (void)_setNewPriority;
- (void)dealloc;
- (void)setupProcessStateMonitor;
- (void)requestPriority:(int)a0 forClient:(id)a1 dataclasses:(long long)a2;
- (int)_recalculatePriority;
- (id)init;
- (void)appWithBundleID:(id)a0 isNowRunningAndVisible:(BOOL)a1;
- (void).cxx_destruct;
- (void)_setForegroundDataclasses:(long long)a0;

@end
