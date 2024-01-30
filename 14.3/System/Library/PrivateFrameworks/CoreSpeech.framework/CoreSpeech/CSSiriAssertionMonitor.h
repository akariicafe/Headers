@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CSSiriAssertionMonitor : CSEventMonitor <CSXPCConnectionDelegate> {
    unsigned char _assertionState;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)dealloc;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(BOOL)a0;
- (BOOL)isEnabled;
- (void)enableAssertionReceived;
- (void)disableAssertionReceived;

@end
