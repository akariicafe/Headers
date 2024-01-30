@class NSString, MSPReceiverETAController, MSPSharedTripRelay, NSMutableDictionary, NSMutableSet, MSPSenderETAController, NSXPCListener, NSMapTable;

@interface MSPSharedTripServer : NSObject <NSXPCListenerDelegate, MSPReceiverETAControllerDelegate, MSPSenderETAControllerDelegate, MSPSharedTripAvailabiltyDelegate, MSPSharedTripXPCServer> {
    MSPSenderETAController *_sendingController;
    MSPReceiverETAController *_receivingController;
    MSPSharedTripRelay *_idsRelay;
    NSXPCListener *_listener;
    NSMutableSet *_connections;
    NSMutableDictionary *_connectionSubscriptionsByTripID;
    NSMapTable *_peersByConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)blockSharedTrip:(id)a0;
- (void)_setNotificationCenter:(id)a0;
- (void)etaController:(id)a0 didUpdateETAForSharedTrip:(id)a1;
- (void)unsubscribeFromSharedTripUpdatesWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)reportUserConfirmationOfSharingIdentity:(id)a0 completion:(id /* block */)a1;
- (void)fetchActiveHandlesWithCompletion:(id /* block */)a0;
- (void)fetchSharedTripsWithCompletion:(id /* block */)a0;
- (void)etaController:(id)a0 didUpdateRouteForSharedTrip:(id)a1;
- (void)etaController:(id)a0 didUpdateReachedDestinationForSharedTrip:(id)a1;
- (void)createControllers;
- (void)stopSharingTripWithMessagesGroup:(id)a0;
- (void)stopSharingTripWithContacts:(id)a0;
- (void)_purgeSubscriptionsForConnection:(id)a0;
- (void)etaController:(id)a0 sharedTripDidBecomeUnavailable:(id)a1;
- (void)checkinWithCompletion:(id /* block */)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)startSharingTripWithContacts:(id)a0 completion:(id /* block */)a1;
- (id)connections;
- (void)relay:(id)a0 accountStatusChanged:(BOOL)a1;
- (void)cleanConnections;
- (void).cxx_destruct;
- (id)init;
- (void)startSharingTripWithMessagesGroup:(id)a0 completion:(id /* block */)a1;
- (id)_subscribedConnectionsForTripID:(id)a0 createIfNeeded:(BOOL)a1;
- (void)startSharingTripWithMessagesContacts:(id)a0 completion:(id /* block */)a1;
- (void)fetchRequiresUserConfirmationOfSharingIdentityWithCompletion:(id /* block */)a0;
- (void)fetchSharingIdentityWithCompletion:(id /* block */)a0;
- (void)createXPCListener;
- (void)senderController:(id)a0 didInvalidateSharedTripWithError:(id)a1;
- (void)dealloc;
- (void)subscribeToSharedTripUpdatesWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)etaController:(id)a0 sharedTripDidBecomeAvailable:(id)a1;
- (void)invalidateActiveHandlesForSenderController:(id)a0;
- (void)stopSharingTrip;
- (BOOL)_connectionCanControlSharing:(id)a0;
- (BOOL)_connectionCanControlReceiving:(id)a0;
- (void)etaController:(id)a0 sharedTripDidClose:(id)a1;
- (void)etaController:(id)a0 didUpdateDestinationForSharedTrip:(id)a1;

@end
