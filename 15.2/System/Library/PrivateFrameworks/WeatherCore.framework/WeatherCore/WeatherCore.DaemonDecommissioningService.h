@interface WeatherCore.DaemonDecommissioningService : NSObject <NSXPCListenerDelegate, WeatherCore.DaemonDecommissioningServiceType> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ notificationManager;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)decommissionWith:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
