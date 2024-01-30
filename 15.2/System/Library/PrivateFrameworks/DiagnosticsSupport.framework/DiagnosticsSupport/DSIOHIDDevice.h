@interface DSIOHIDDevice : NSObject {
    struct __IOHIDManager { } *_manager;
    struct __IOHIDDevice { } *_device;
}

+ (id)deviceWithDeviceIdentifier:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; })a0;

- (id)serialNumber;
- (id)initWithDeviceIdentifier:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; })a0;
- (void)dealloc;
- (id)_sharedSerialQueue;
- (id)stringFromHIDReport:(long long)a0;

@end
