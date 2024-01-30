@class BluetoothManager;

@interface HPSConnectedHeadphonesController : NSObject {
    BluetoothManager *_bluetoothManager;
    id /* block */ _deviceChangeHandler;
}

- (BOOL)nicknameEnabled;
- (void)dealloc;
- (id)init;
- (BOOL)boolFromBluetoothPreferences:(id)a0;
- (void).cxx_destruct;
- (id)topLevelSpecifiers;
- (void)deviceConnectionHandler:(id)a0;
- (id)getDeviceIcon:(unsigned int)a0;
- (void)setDeviceChangeHandler:(id /* block */)a0;

@end
