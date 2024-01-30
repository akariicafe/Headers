@protocol HDNearFieldInterfaceDelegate;

@interface HDNearFieldInterface : NSObject

@property (weak, nonatomic) id<HDNearFieldInterfaceDelegate> delegate;

- (void)startFieldDetectSessionWithCompletion:(id /* block */)a0;
- (id)releaseSinglePollExpressModeAssertion;
- (void)startNdefTagSessionWithBluetoothLESecureOOBData:(id)a0 completion:(id /* block */)a1;
- (void)endNdefTagSession;
- (BOOL)isNdefTagSessionInProgress;
- (id)startSinglePollExpressModeAssertion:(double)a0;
- (BOOL)setFieldDetectEnabled:(BOOL)a0;
- (BOOL)isFieldDetectSessionInProgress;
- (void)endFieldDetectSession;
- (void).cxx_destruct;

@end
