@interface DaemonController : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ requestHandler;
    void /* unknown type, empty encoding */ taskLimiters;
    void /* unknown type, empty encoding */ geoCache;
    void /* unknown type, empty encoding */ configStore;
    void /* unknown type, empty encoding */ accountStore;
    void /* unknown type, empty encoding */ minimumActivityInterval;
    void /* unknown type, empty encoding */ maximumActivityInterval;
    void /* unknown type, empty encoding */ failureActivityInterval;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void)start;
- (void).cxx_destruct;

@end
