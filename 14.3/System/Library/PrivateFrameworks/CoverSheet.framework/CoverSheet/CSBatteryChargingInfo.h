@class BCBatteryDevice;

@interface CSBatteryChargingInfo : NSObject

@property (nonatomic, getter=isChargingWithInternalWirelessAccessory) BOOL chargingWithInternalWirelessAccessory;
@property (retain, nonatomic) BCBatteryDevice *batteryDevice;

- (void).cxx_destruct;

@end
