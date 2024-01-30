@interface CSNetworkAvailabilityMonitor : CSEventMonitor {
    int _notifyToken;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isAvailable;
- (void)_notifyObserver:(id)a0 withNetworkAvailability:(BOOL)a1;
- (void)_didReceivedNetworkAvailabilityChangedNotification:(BOOL)a0;
- (id)init;
- (void)_availabilityChanged;

@end
