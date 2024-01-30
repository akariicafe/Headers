@interface FMIPCore.FMIPBeaconRefreshingController : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ refreshQueue;
    void /* unknown type, empty encoding */ filterQueue;
    void /* unknown type, empty encoding */ spBeacons;
    void /* unknown type, empty encoding */ appBeacons;
    void /* unknown type, empty encoding */ unknownBeacons;
    void /* unknown type, empty encoding */ itemGroups;
    void /* unknown type, empty encoding */ ownerSession;
    void /* unknown type, empty encoding */ currentlyRefreshing;
    void /* unknown type, empty encoding */ nextRefreshQueued;
    void /* unknown type, empty encoding */ lastRefreshTime;
    void /* unknown type, empty encoding */ shouldUseBeaconsOptimizationSPI;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ lastActiveTimestamp;
    void /* unknown type, empty encoding */ callbackInterval;
    void /* unknown type, empty encoding */ defaultCallbackInterval;
    void /* unknown type, empty encoding */ initialCallbackInterval;
    void /* unknown type, empty encoding */ refreshTimer;
    void /* unknown type, empty encoding */ utAlertState;
    void /* unknown type, empty encoding */ separationMonitoringState;
    void /* unknown type, empty encoding */ clientConfiguration;
    void /* unknown type, empty encoding */ refreshingPolicy;
    void /* unknown type, empty encoding */ isThrottledOverride;
    void /* unknown type, empty encoding */ isThrottled;
    void /* unknown type, empty encoding */ isRefreshing;
}

- (void)handleBeaconsChanged;
- (void)handleUnknownBeaconsChanged;
- (void)refreshTimerFired;

@end
