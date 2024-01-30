@class NSArray;

@interface AFPairedBluetoothDevicesObserver : NSObject {
    NSArray *_pairedDevices;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pairedDevicesLock;
}

+ (id)sharedObserver;

- (id)init;
- (void).cxx_destruct;
- (void)updatePairedDevices:(id)a0;
- (id)pairedBluetoothDevices;

@end
