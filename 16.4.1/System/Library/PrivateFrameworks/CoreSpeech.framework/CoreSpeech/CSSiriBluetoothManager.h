@class CSSiriMobileBluetoothDeviceDataSource;

@interface CSSiriBluetoothManager : NSObject {
    CSSiriMobileBluetoothDeviceDataSource *_dataSource;
}

+ (id)sharedInstance;

- (id)_init;
- (void).cxx_destruct;
- (id)deviceWithAddress:(id)a0;
- (id)deviceWithUID:(id)a0;
- (void)prewarmDeviceWithIdentifier:(id)a0;

@end
