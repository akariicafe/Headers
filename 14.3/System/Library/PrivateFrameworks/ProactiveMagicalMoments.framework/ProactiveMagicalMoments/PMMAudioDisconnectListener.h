@interface PMMAudioDisconnectListener : NSObject {
    id /* block */ _disconnectHandler;
}

+ (BOOL)bluetoothDeviceTypeIsAudio:(id)a0;

- (void).cxx_destruct;
- (void)_setupBluetoothDisconnectListener;
- (void)_setupAudioDisconnectListener;
- (id)initWithHandler:(id /* block */)a0;

@end
