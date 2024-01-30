@interface BLEMIDIAccessor : NSObject

+ (unsigned int)nullDevice;
+ (BOOL)deviceIsNullDevice:(unsigned int)a0;
+ (BOOL)deviceIsLocalPeripheral:(unsigned int)a0;
+ (unsigned int)midiDeviceForUUID:(id)a0;
+ (BOOL)deviceIsOnline:(unsigned int)a0;
+ (id)nameForMIDIDevice:(unsigned int)a0;
+ (unsigned int)localPeripheral;
+ (unsigned int)midiDeviceForUUID:(id)a0 isLocalPeripheral:(BOOL)a1 isRemotePeripheral:(BOOL)a2;
+ (id)localPeripheralName;
+ (id)uuidForMIDIDevice:(unsigned int)a0;
+ (BOOL)deviceIsRemotePeripheral:(unsigned int)a0;
+ (BOOL)uuidIsForgettable:(id)a0;
+ (unsigned short)timeStampOffset:(unsigned long long)a0;
+ (unsigned short)reconstructWithHighByte:(unsigned char)a0 lowByte:(unsigned char)a1 overflow:(BOOL)a2;
+ (unsigned long long)timeStampWithEpoch:(unsigned long long)a0 offset:(unsigned short)a1;
+ (void)splitOffset:(unsigned short)a0 intoHeaderByte:(char *)a1 timeStampByte:(char *)a2;
+ (void)logEvent:(char *)a0 length:(unsigned short)a1 timeStamp:(unsigned long long)a2 intoBuffer:(char *)a3;

@end
