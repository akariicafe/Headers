@interface CSNetworkAvailabilityMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)a0;
- (id)init;
- (void)_availabilityChanged;
- (void)_notifyObserver:(id)a0 withNetworkAvailability:(BOOL)a1;
- (BOOL)isAvailable;

@end
