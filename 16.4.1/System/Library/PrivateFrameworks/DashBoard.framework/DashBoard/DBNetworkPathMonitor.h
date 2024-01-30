@class CARObserverHashTable, NSMutableSet, NSObject;
@protocol OS_nw_path_monitor, OS_nw_path, OS_dispatch_queue;

@interface DBNetworkPathMonitor : NSObject

@property (nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (nonatomic) long long networkPath;
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor;
@property (retain, nonatomic) NSObject<OS_nw_path> *currentPath;
@property (readonly, nonatomic) NSMutableSet *activeAssertions;
@property (nonatomic) BOOL networkPathMonitorActive;
@property (retain) CARObserverHashTable *observers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_networkPathUpdated:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_startNetworkPathMonitorNow;
- (void)_stopNetworkPathMonitorNow;
- (void)startNetworkPathMonitorWithIdentifier:(id)a0;
- (void)stopNetworkPathMonitorWithIdentifier:(id)a0;

@end
