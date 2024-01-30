@interface DSIOHIDDevice : NSObject {
    struct __IOHIDManager { } *_manager;
    struct __IOHIDDevice { } *_device;
}

+ (id)deviceWithDeviceIdentifier:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; })a0;

- (id)serialNumber;
- (void)dealloc;
- (id)initWithDeviceIdentifier:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; })a0;
- (id)_sharedSerialQueue;
- (BOOL)reportWithID:(long long)a0 reportType:(int)a1 object:(char *)a2 length:(long long *)a3;
- (id)stringFromHIDReport:(long long)a0;

@end
