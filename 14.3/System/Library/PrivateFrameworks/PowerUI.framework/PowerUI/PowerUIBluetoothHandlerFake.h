@class NSString;

@interface PowerUIBluetoothHandlerFake : PowerUIBluetoothHandler

@property (nonatomic) struct BTDeviceImpl { } *fakeDevice;
@property (retain, nonatomic) NSString *fakeDeviceAddress;
@property (nonatomic) BOOL fakeDeviceConnected;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (int)isAppleAudioDeviceWrapperWithDevice:(struct BTDeviceImpl { } *)a0 withBool:(unsigned int *)a1;
- (int)getDeviceIDWrapperWithDevice:(struct BTDeviceImpl { } *)a0 withVendorIdSource:(unsigned int *)a1 withVendorId:(unsigned int *)a2 withProductId:(unsigned int *)a3 withVersionId:(unsigned int *)a4;
- (int)deviceConnectWrapper:(struct BTDeviceImpl { } *)a0;
- (int)sendCustomMessageWrapperWithManager:(struct BTAccessoryManagerImpl { } *)a0 withMessageType:(int)a1 withDeviceHandle:(struct BTDeviceImpl { } *)a2 withData:(char *)a3 withDataSize:(unsigned long long)a4;
- (id)getAddressStringForDevice:(struct BTDeviceImpl { } *)a0;
- (struct BTDeviceImpl { } *)getDeviceForAddressString:(id)a0 forSession:(struct BTSessionImpl { } *)a1;
- (BOOL)isDeviceConnected:(struct BTDeviceImpl { } *)a0 forSession:(struct BTSessionImpl { } *)a1;

@end
