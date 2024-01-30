@class NSMutableDictionary, NSMapTable, BKSApplicationStateMonitor;

@interface DAPriorityManager : NSObject

@property (retain, nonatomic) NSMapTable *clientsToPriorityRequests;
@property (retain, nonatomic) BKSApplicationStateMonitor *appStateMonitor;
@property (retain, nonatomic) NSMutableDictionary *cachedAppState;
@property (nonatomic) long long foregroundDataclasses;
@property (readonly, nonatomic) int currentPriority;

+ (id)sharedManager;
+ (void)vendPriorityManagers;

- (id)stateString;
- (id)appIDsToDataclasses;
- (void)_setNewPriority;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setForegroundDataclasses:(long long)a0;
- (void)bumpDataclassesToUIPriority:(long long)a0;
- (void)_applicationStateChanged:(id)a0;
- (int)_recalculatePriority;
- (void)_updateForegroundDataclasses;
- (void)requestPriority:(int)a0 forClient:(id)a1 dataclasses:(long long)a2;

@end
