@class NSMutableDictionary, NSObject;
@protocol OS_nw_path_monitor, OS_dispatch_queue;

@interface AKNetworkObserver : NSObject {
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_invocationByObserver;
}

@property (readonly) BOOL isNetworkReachable;

+ (id)sharedNetworkObserver;

- (void)_networkReachabilityDidChange;
- (void)_startPathMonitor;
- (void).cxx_destruct;
- (id)init;
- (void)addNetworkReachableObserver:(id)a0 selector:(SEL)a1;
- (void)removeNetworkReachableObserver:(id)a0;
- (void)_stopPathMonitor;
- (void)dealloc;

@end
