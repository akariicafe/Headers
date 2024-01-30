@class CSSiriMobileBluetoothDeviceDataSource;

@interface CSSiriBluetoothManager : NSObject {
    CSSiriMobileBluetoothDeviceDataSource *_dataSource;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)deviceWithAddress:(id)a0;
- (id)deviceWithUID:(id)a0;
- (void)prewarmDeviceWithIdentifier:(id)a0;

@end
