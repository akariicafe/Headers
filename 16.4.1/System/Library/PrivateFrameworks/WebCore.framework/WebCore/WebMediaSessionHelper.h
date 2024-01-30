@interface WebMediaSessionHelper : NSObject {
    void *_callback;
    struct RetainPtr<AVRouteDetector> { void *m_ptr; } _routeDetector;
    BOOL _monitoringAirPlayRoutes;
    BOOL _startMonitoringAirPlayRoutesPending;
}

- (void)applicationWillResignActive:(id)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (id)initWithCallback:(void *)a0;
- (void)carPlayIsConnectedDidChange:(id)a0;
- (id).cxx_construct;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)applicationWillEnterForeground:(id)a0;
- (void).cxx_destruct;
- (void)activeOutputDeviceDidChange:(id)a0;
- (void)clearCallback;
- (BOOL)hasWirelessTargetsAvailable;
- (void)mediaServerConnectionDied:(id)a0;
- (void)startMonitoringAirPlayRoutes;
- (void)stopMonitoringAirPlayRoutes;
- (void)wirelessRoutesAvailableDidChange:(id)a0;

@end
