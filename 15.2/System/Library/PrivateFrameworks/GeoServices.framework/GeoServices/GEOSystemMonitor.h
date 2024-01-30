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

- (void)removeSystemSleepObserver:(id)a0;
- (void).cxx_destruct;
- (void)addSystemSleepObserver:(id)a0 queue:(id)a1;
- (id)init;
- (void)dealloc;

@end
