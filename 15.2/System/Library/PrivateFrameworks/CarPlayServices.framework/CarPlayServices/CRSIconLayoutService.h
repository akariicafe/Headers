@class NSString, NSHashTable, NSObject, BSServiceConnectionListener;
@protocol OS_dispatch_queue, BSInvalidatable, CRSIconLayoutServiceDelegate;

@interface CRSIconLayoutService : NSObject <BSServiceConnectionListenerDelegate, CRSIconLayoutClientToServerInterface, BSInvalidatable>

@property (weak, nonatomic) id<CRSIconLayoutServiceDelegate> delegate;
@property (retain, nonatomic) BSServiceConnectionListener *listener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSHashTable *connections;
@property (retain, nonatomic) id<BSInvalidatable> temporaryWatchdogMonitoringAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_connectionQueue_removeConnection:(id)a0;
- (void)_connectionQueue_addConnection:(id)a0;
- (id)_newInvalidRequestErrorDueToNilVehicleID;
- (void)fetchIconStateForVehicleID:(id)a0 completion:(id /* block */)a1;
- (void)setIconState:(id)a0 forVehicleID:(id)a1;
- (void)resetIconStateForVehicleID:(id)a0;
- (void)fetchApplicationIconInformationForBundleIdentifier:(id)a0 vehicleID:(id)a1 completion:(id /* block */)a2;

@end
