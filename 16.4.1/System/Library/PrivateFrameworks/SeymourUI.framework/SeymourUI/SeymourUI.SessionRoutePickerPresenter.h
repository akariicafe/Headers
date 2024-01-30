@interface SeymourUI.SessionRoutePickerPresenter : NSObject <MPAVRoutingControllerDelegate> {
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ sessionClient;
    void /* unknown type, empty encoding */ remoteParticipantClient;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ systemRoutingController;
    void /* unknown type, empty encoding */ systemOutputControlDeviceDiscovery;
    void /* unknown type, empty encoding */ sessionOrigin;
    void /* unknown type, empty encoding */ discoveredParticipants;
    void /* unknown type, empty encoding */ passwordController;
    void /* unknown type, empty encoding */ currentSelection;
    void /* unknown type, empty encoding */ targetSelection;
    void /* unknown type, empty encoding */ display;
}

- (void)routingControllerAvailableRoutesDidChange:(id)a0;
- (void)routingController:(id)a0 didFailToPickRouteWithError:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
