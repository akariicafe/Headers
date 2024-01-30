@interface WebMediaSessionHelper : NSObject {
    void *_callback;
    struct RetainPtr<AVRouteDetector> { void *m_ptr; } _routeDetector;
    BOOL _monitoringAirPlayRoutes;
    BOOL _startMonitoringAirPlayRoutesPending;
}

- (void)applicationWillResignActive:(id)a0;
- (void)applicationDidEnterBackground:(id)a0;
- (void)applicationWillEnterForeground:(id)a0;
- (id)initWithCallback:(void *)a0;
- (void)applicationDidBecomeActive:(id)a0;
- (void)carPlayIsConnectedDidChange:(id)a0;
- (BOOL)hasWirelessTargetsAvailable;
- (void)startMonitoringAirPlayRoutes;
- (void)stopMonitoringAirPlayRoutes;
- (void)activeOutputDeviceDidChange:(id)a0;
- (void)mediaServerConnectionDied:(id)a0;
- (void)wirelessRoutesAvailableDidChange:(id)a0;
- (void).cxx_destruct;
- (void)clearCallback;
- (void)dealloc;
- (id).cxx_construct;

@end
