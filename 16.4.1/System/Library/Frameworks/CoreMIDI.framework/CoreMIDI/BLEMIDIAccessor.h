@interface BLEMIDIAccessor : NSObject

+ (unsigned int)localPeripheral;
+ (BOOL)deviceIsOnline:(unsigned int)a0;
+ (BOOL)deviceIsLocalPeripheral:(unsigned int)a0;
+ (BOOL)deviceIsNullDevice:(unsigned int)a0;
+ (BOOL)deviceIsRemotePeripheral:(unsigned int)a0;
+ (id)localPeripheralName;
+ (void)logEvent:(char *)a0 length:(unsigned short)a1 timeStamp:(unsigned long long)a2 intoBuffer:(char *)a3;
+ (unsigned int)midiDeviceForUUID:(id)a0;
+ (unsigned int)midiDeviceForUUID:(id)a0 isLocalPeripheral:(BOOL)a1 isRemotePeripheral:(BOOL)a2;
+ (id)nameForMIDIDevice:(unsigned int)a0;
+ (unsigned int)nullDevice;
+ (unsigned short)reconstructWithHighByte:(unsigned char)a0 lowByte:(unsigned char)a1 overflow:(BOOL)a2;
+ (void)splitOffset:(unsigned short)a0 intoHeaderByte:(char *)a1 timeStampByte:(char *)a2;
+ (unsigned short)timeStampOffset:(unsigned long long)a0;
+ (unsigned long long)timeStampWithEpoch:(unsigned long long)a0 offset:(unsigned short)a1;
+ (id)uuidForMIDIDevice:(unsigned int)a0;
+ (BOOL)uuidIsForgettable:(id)a0;

@end
