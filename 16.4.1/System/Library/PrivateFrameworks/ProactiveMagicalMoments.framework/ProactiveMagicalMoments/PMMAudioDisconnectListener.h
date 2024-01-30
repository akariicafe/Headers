@interface PMMAudioDisconnectListener : NSObject {
    id /* block */ _disconnectHandler;
}

+ (BOOL)bluetoothDeviceTypeIsAudio:(id)a0;

- (void)_setupAudioDisconnectListener;
- (void)_setupBluetoothDisconnectListener;
- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
