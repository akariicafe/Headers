@interface CPConversationManagerHost : NSObject <CPConversationManagerDataSourceObserver, NSXPCListenerDelegate, TUNeighborhoodActivityConduitDelegate> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ featureFlags;
    void /* unknown type, empty encoding */ serverBag;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ listenerDeprecated;
    void /* unknown type, empty encoding */ connections;
    void /* unknown type, empty encoding */ clientShouldConnectNotification;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ $__lazy_storage_$_protectedStorage;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)neighborhoodActivityConduit:(id)a0 tvDeviceAppeared:(id)a1;
- (void)neighborhoodActivityConduit:(id)a0 tvDeviceDisappeared:(id)a1;
- (void)neighborhoodActivityConduit:(id)a0 splitSessionStarted:(id)a1;
- (void)neighborhoodActivityConduit:(id)a0 splitSessionEnded:(id)a1;
- (void)conversationManager:(id)a0 conversationChanged:(id)a1;
- (void)conversationManager:(id)a0 activityAuthorizationChangedForBundleIdentifier:(id)a1;
- (void)conversationManager:(id)a0 sharePlayAllowedChanged:(BOOL)a1;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
