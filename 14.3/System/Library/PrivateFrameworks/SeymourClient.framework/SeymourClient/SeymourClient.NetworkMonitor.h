@interface SeymourClient.NetworkMonitor : NSObject <SMCAirplaneModeObserverDelegate> {
    void /* unknown type, empty encoding */ airplaneModeObserver;
    void /* unknown type, empty encoding */ coreTelephonyObserver;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ reachabilityObserver;
    void /* unknown type, empty encoding */ wifiObserver;
    void /* unknown type, empty encoding */ delegate;
}

- (void)airplaneModeChanged;
- (id)init;
- (void).cxx_destruct;

@end
