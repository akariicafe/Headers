@class NSString, PKPassLibrary, PKAssertion;
@protocol PKVehicleConnectionDelegate;

@interface PKVehicleConnectionSession : NSObject <PKPassLibraryDelegate> {
    PKPassLibrary *_passLibrary;
    NSString *_sessionIdentifier;
    PKAssertion *_assertion;
}

@property (readonly, weak, nonatomic) id<PKVehicleConnectionDelegate> delegate;
@property (readonly, nonatomic) long long connectionStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sessionForPass:(id)a0 delegate:(id)a1 completion:(id /* block */)a2;

- (void)passLibraryReceivedInterruption;
- (void)vehicleConnectionDidRecievePassthroughData:(id)a0;
- (void)dealloc;
- (void)vehicleConnectionDidUpdateConnectionState:(long long)a0;
- (id)init;
- (id)new;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)sendData:(id)a0 error:(id *)a1;
- (id)_initWithDelegate:(id)a0 sessionIdentifier:(id)a1 passLibrary:(id)a2 assertion:(id)a3;
- (void)_updateConnectionState:(long long)a0;

@end
