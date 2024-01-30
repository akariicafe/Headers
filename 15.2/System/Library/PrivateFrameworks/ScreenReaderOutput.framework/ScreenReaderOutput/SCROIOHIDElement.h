@class NSString;

@interface SCROIOHIDElement : SCROIOElement <SCROIOBluetoothElementProtocol, SCROIOHIDElementProtocol> {
    struct __IOHIDDevice { } *_hidDevice;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)bluetoothAddress;
- (id)initWithIOObject:(unsigned int)a0;
- (int)transport;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void *)hidDevice;

@end
