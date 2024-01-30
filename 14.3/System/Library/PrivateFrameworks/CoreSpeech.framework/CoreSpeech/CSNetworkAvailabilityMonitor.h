@interface CSNetworkAvailabilityMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_availabilityChanged;
- (id)init;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)a0;
- (BOOL)isAvailable;
- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0 withNetworkAvailability:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;

@end
