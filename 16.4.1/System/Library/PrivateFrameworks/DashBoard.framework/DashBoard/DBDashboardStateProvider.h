@class DBDashboard, NSString, CARObserverHashTable;

@interface DBDashboardStateProvider : NSObject <DBWorkspaceObserver, DBHomeViewPageChangeObserving>

@property (readonly, weak, nonatomic) DBDashboard *dashboard;
@property (retain, nonatomic) CARObserverHashTable *observers;
@property (nonatomic) BOOL connectionReady;
@property (nonatomic) unsigned long long lockoutState;
@property (nonatomic) unsigned long long pageType;
@property (copy, nonatomic) NSString *activeBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)_refreshObservations;
- (void)homeViewController:(id)a0 didChangeToPageIndex:(long long)a1 firstIconPageIndex:(long long)a2 minimumPageIndex:(long long)a3;
- (id)initWithDashboard:(id)a0;
- (void)workspace:(id)a0 stateDidChangeFromState:(id)a1 toState:(id)a2;

@end
