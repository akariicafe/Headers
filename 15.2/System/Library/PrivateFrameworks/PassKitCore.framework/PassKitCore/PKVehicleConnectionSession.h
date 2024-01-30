@class NSString, PKPaymentService, PKAssertion, PKXPCService;
@protocol PKVehicleConnectionDelegate;

@interface PKVehicleConnectionSession : NSObject <PKPaymentServiceDelegate, PKXPCServiceDelegate> {
    PKPaymentService *_paymentService;
    NSString *_sessionIdentifier;
    PKXPCService *_remoteService;
    PKAssertion *_assertion;
}

@property (readonly, weak, nonatomic) id<PKVehicleConnectionDelegate> delegate;
@property (readonly, nonatomic) long long connectionStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sessionForPass:(id)a0 delegate:(id)a1 completion:(id /* block */)a2;

- (void)vehicleConnectionDidUpdateConnectionState:(long long)a0;
- (void)remoteServiceDidSuspend:(id)a0;
- (id)new;
- (void)_updateConnectionState:(long long)a0;
- (id)_initWithDelegate:(id)a0 sessionIdentifier:(id)a1 paymentService:(id)a2 assertion:(id)a3;
- (void)vehicleConnectionDidRecievePassthroughData:(id)a0;
- (BOOL)sendData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)remoteService:(id)a0 didInterruptConnection:(id)a1;
- (void)dealloc;
- (void)remoteService:(id)a0 didEstablishConnection:(id)a1;

@end
