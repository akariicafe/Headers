@class NSMutableSet, NSRunLoop;
@protocol AXDeviceMonitorDelegate;

@interface AXDeviceMonitor : NSObject {
    NSRunLoop *_targetRunLoop;
    struct __IOHIDManager { } *_hidManager;
    unsigned long long _state;
    NSMutableSet *_devices;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _devicesLock;
}

@property (weak, nonatomic) id<AXDeviceMonitorDelegate> delegate;

+ (id)bluetoothKeyboardDevices;

- (void)begin;
- (id)initWithMatchingDictionary:(id)a0 callbackRunLoop:(id)a1;
- (void).cxx_destruct;
- (void)didAddDevice:(struct __IOHIDDevice { } *)a0;
- (void)dealloc;
- (void)informDelegate;
- (id)initWithMatchingMultiple:(id)a0 callbackRunLoop:(id)a1;
- (void)_commonInitWithRunLoop:(id)a0;
- (id)_existingDevicesForDevice:(struct __IOHIDDevice { } *)a0;
- (id)copyDevices;
- (void)didRemoveDevice:(struct __IOHIDDevice { } *)a0;
- (void)invalidate;

@end
