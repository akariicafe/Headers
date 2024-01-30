@interface PowerUIBluetoothHandler : NSObject

- (id)init;
- (int)deviceConnectWrapper:(struct BTDeviceImpl { } *)a0;
- (id)getAddressStringForDevice:(struct BTDeviceImpl { } *)a0;
- (struct BTDeviceImpl { } *)getDeviceForAddressString:(id)a0 forSession:(struct BTSessionImpl { } *)a1;
- (int)getDeviceIDWrapperWithDevice:(struct BTDeviceImpl { } *)a0 withVendorIdSource:(unsigned int *)a1 withVendorId:(unsigned int *)a2 withProductId:(unsigned int *)a3 withVersionId:(unsigned int *)a4;
- (int)isAppleAudioDeviceWrapperWithDevice:(struct BTDeviceImpl { } *)a0 withBool:(unsigned int *)a1;
- (BOOL)isDeviceConnected:(struct BTDeviceImpl { } *)a0 forSession:(struct BTSessionImpl { } *)a1;
- (unsigned int)productIDForDevice:(struct BTDeviceImpl { } *)a0;
- (unsigned char)protocolForDevice:(struct BTDeviceImpl { } *)a0;
- (int)sendCustomMessageWrapperWithManager:(struct BTAccessoryManagerImpl { } *)a0 withMessageType:(int)a1 withDeviceHandle:(struct BTDeviceImpl { } *)a2 withData:(char *)a3 withDataSize:(unsigned long long)a4;

@end
