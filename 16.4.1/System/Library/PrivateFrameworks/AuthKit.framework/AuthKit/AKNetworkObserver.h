@class NSMutableDictionary, NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface AKNetworkObserver : NSObject {
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_invocationByObserver;
}

@property (readonly, nonatomic) BOOL isNetworkReachable;

+ (id)sharedNetworkObserver;

- (void)removeNetworkReachableObserver:(id)a0;
- (void)_networkReachabilityDidChange;
- (void)addNetworkReachableObserver:(id)a0 selector:(SEL)a1;
- (void)dealloc;
- (void)_startPathMonitor;
- (void)_stopPathMonitor;
- (id)init;
- (void).cxx_destruct;

@end
