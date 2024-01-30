@interface FMIPCore.FMIPBeaconRefreshingController : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ beacons;
    void /* unknown type, empty encoding */ unknownBeacons;
    void /* unknown type, empty encoding */ ownerSession;
    void /* unknown type, empty encoding */ refreshQueue;
    void /* unknown type, empty encoding */ callbackInterval;
    void /* unknown type, empty encoding */ defaultCallbackInterval;
    void /* unknown type, empty encoding */ initialCallbackInterval;
    void /* unknown type, empty encoding */ lastRefreshTime;
    void /* unknown type, empty encoding */ refreshTimer;
    void /* unknown type, empty encoding */ isRefreshing;
}

- (void)handleBeaconsChanged;
- (void)handleUnknownBeaconsChanged;

@end
