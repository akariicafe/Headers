@interface DaemonController : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ requestHandler;
    void /* unknown type, empty encoding */ networkController;
    void /* unknown type, empty encoding */ geoCache;
    void /* unknown type, empty encoding */ configStore;
    void /* unknown type, empty encoding */ minimumActivityInterval;
    void /* unknown type, empty encoding */ maximumActivityInterval;
    void /* unknown type, empty encoding */ failureActivityInterval;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)start;
- (void).cxx_destruct;
- (id)init;

@end
