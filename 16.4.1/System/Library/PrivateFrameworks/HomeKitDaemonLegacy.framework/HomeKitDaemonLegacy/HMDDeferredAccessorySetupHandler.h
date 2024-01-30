@class HMFTimer, HMFObject, HMDAccessoryPairingEvent, HAPAccessoryServer;

@interface HMDDeferredAccessorySetupHandler : HMFObject

@property (readonly) HAPAccessoryServer *server;
@property (readonly) HMFTimer *timer;
@property (readonly) HMDAccessoryPairingEvent *pairingEvent;
@property (readonly) id /* block */ callback;
@property (readonly) HMFObject *context;

- (void).cxx_destruct;
- (id)initWithServer:(id)a0 timer:(id)a1 pairingEvent:(id)a2 callback:(id /* block */)a3 context:(id)a4;

@end
