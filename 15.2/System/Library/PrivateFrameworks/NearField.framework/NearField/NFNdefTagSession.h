@class NSString;
@protocol NFNdefTagSessionDelegate;

@interface NFNdefTagSession : NFSession <NFNdefTagSessionCallbacks> {
    id<NFNdefTagSessionDelegate> _delegate;
}

@property id<NFNdefTagSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generateBluetoothLESecureNdefPayloadWithOOBData:(id)a0;

- (void)endSession;
- (BOOL)startEmulationWithNdefMessage:(id)a0 withMessageType:(unsigned int)a1;
- (void).cxx_destruct;
- (void)didEndUnexpectedly;
- (BOOL)setTagData:(id)a0;
- (BOOL)stopEmulation;
- (BOOL)startEmulationWithNdefMessage:(id)a0 withMessageType:(unsigned int)a1 error:(id *)a2;
- (BOOL)startBluetoothLEPairingWithDeviceAddress:(id)a0 role:(unsigned char)a1 optionalOOBData:(id)a2;
- (BOOL)startBluetoothLESecureConnectionWithDeviceAddress:(id)a0 optionalOOBData:(id)a1;
- (BOOL)startBluetoothLESecureConnectionWithOOBData:(id)a0;
- (BOOL)startEmulation:(id)a0 withMessageType:(unsigned int)a1 error:(id *)a2;
- (BOOL)stopEmulationWithError:(id *)a0;
- (BOOL)setTagData:(id)a0 error:(id *)a1;
- (id)getTagDataWithError:(id *)a0;
- (id)getTagMessageWithError:(id *)a0;
- (BOOL)enableWrite:(BOOL)a0 error:(id *)a1;
- (void)didTagStateChange:(unsigned int)a0;
- (BOOL)startEmulationWithNdefMessage:(id)a0;
- (BOOL)startEmulationWithNdefMessage:(id)a0 error:(id *)a1;
- (BOOL)startEmulation:(id)a0;
- (BOOL)startEmulation:(id)a0 error:(id *)a1;
- (BOOL)startEmulation:(id)a0 withMessageType:(unsigned int)a1;
- (BOOL)setTagMessage:(id)a0;
- (BOOL)setTagMessage:(id)a0 error:(id *)a1;
- (id)getTagData;
- (id)getTagMessage;
- (BOOL)enableWrite:(BOOL)a0;

@end
