@interface SportsKit.SportsManager : NSObject {
    void /* unknown type, empty encoding */ dataStore;
    void /* unknown type, empty encoding */ playsStore;
    void /* unknown type, empty encoding */ xpcSession;
    void /* unknown type, empty encoding */ appState;
    void /* unknown type, empty encoding */ activeSubscriptions;
    void /* unknown type, empty encoding */ visibleEvents;
    void /* unknown type, empty encoding */ disposables;
    void /* unknown type, empty encoding */ _clockSyncedPlaysPublisher;
    void /* unknown type, empty encoding */ _subscriptionPublisher;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (void).cxx_destruct;
- (id)init;
- (void)getEventForCanonicalId:(id)a0 completion:(id /* block */)a1;

@end
