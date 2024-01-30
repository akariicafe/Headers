@interface FMIPCore.FMIPRefreshingController : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ selectedDevice;
    void /* unknown type, empty encoding */ interactionController;
    void /* unknown type, empty encoding */ apsConnectionHandler;
    void /* unknown type, empty encoding */ refreshQueue;
    void /* unknown type, empty encoding */ tapContexts;
    void /* unknown type, empty encoding */ callbackInterval;
    void /* unknown type, empty encoding */ minCallbackInterval;
    void /* unknown type, empty encoding */ maxCallbackInterval;
    void /* unknown type, empty encoding */ lastRefreshTime;
    void /* unknown type, empty encoding */ refreshTimer;
    void /* unknown type, empty encoding */ isInitializing;
    void /* unknown type, empty encoding */ ownerPhoneNumber;
    void /* unknown type, empty encoding */ isRefreshing;
    void /* unknown type, empty encoding */ rangingParameters;
}

- (void)refreshTimerFired;

@end
