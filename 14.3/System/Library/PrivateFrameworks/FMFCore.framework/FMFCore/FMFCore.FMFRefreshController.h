@interface FMFCore.FMFRefreshController : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ selectedFriend;
    void /* unknown type, empty encoding */ refreshReason;
    void /* unknown type, empty encoding */ interactionController;
    void /* unknown type, empty encoding */ apsConnectionHandler;
    void /* unknown type, empty encoding */ tapContexts;
    void /* unknown type, empty encoding */ refreshQueue;
    void /* unknown type, empty encoding */ callbackInterval;
    void /* unknown type, empty encoding */ minCallbackInterval;
    void /* unknown type, empty encoding */ maxCallbackInterval;
    void /* unknown type, empty encoding */ lastRefreshTime;
    void /* unknown type, empty encoding */ refreshTimer;
    void /* unknown type, empty encoding */ initializedOnce;
    void /* unknown type, empty encoding */ firstRefreshCompleted;
    void /* unknown type, empty encoding */ isRefreshing;
}

- (void)refreshTimerFired;

@end
