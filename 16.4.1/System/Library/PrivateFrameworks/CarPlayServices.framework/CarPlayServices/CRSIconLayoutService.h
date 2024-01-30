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

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_connectionQueue_addConnection:(id)a0;
- (void)_connectionQueue_removeConnection:(id)a0;
- (id)_newInvalidRequestErrorDueToNilVehicleID;
- (void)fetchApplicationIconInformationForBundleIdentifier:(id)a0 vehicleID:(id)a1 completion:(id /* block */)a2;
- (void)fetchIconStateForVehicleID:(id)a0 completion:(id /* block */)a1;
- (void)resetIconStateForVehicleID:(id)a0;
- (void)setIconState:(id)a0 forVehicleID:(id)a1;

@end
