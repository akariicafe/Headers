@class NSObject, EFObservable, BKSApplicationStateMonitor;
@protocol OS_dispatch_queue, EFObserver;

@interface MFAppStateMonitor : NSObject {
    unsigned int _appState;
    BKSApplicationStateMonitor *_appStateMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    EFObservable<EFObserver> *_observable;
}

@property (readonly, nonatomic) EFObservable *appStateObservable;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_updateApplicationState:(id)a0 observer:(id)a1;

@end
