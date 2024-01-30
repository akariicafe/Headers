@class GEOObserverHashTable, geo_isolater, NSObject;
@protocol OS_dispatch_queue;

@interface GEOSystemMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    geo_isolater *_isolater;
    GEOObserverHashTable *_systemSleepObservers;
    struct IONotificationPort { } *_notifyPortRef;
    unsigned int _notifier;
}

@property (class, readonly, nonatomic) GEOSystemMonitor *sharedInstance;

- (void)addSystemSleepObserver:(id)a0 queue:(id)a1;
- (void)dealloc;
- (id)init;
- (void)removeSystemSleepObserver:(id)a0;
- (BOOL)isBackgroundAppRefreshEnabledForBundleIdentifier:(id)a0 isDisabledGlobally:(BOOL *)a1;
- (void).cxx_destruct;

@end
