@class UARPController;

@interface HMDAccessoryFirmwareUpdateManagerWingman : NSObject <HMDAccessoryFirmwareUpdateManagerWingman>

@property (readonly, nonatomic) UARPController *uarpController;

- (id)init;
- (void).cxx_destruct;
- (id)newAccessoryFirmwareUpdateSessionWithHAPAccessory:(id)a0 uarpAccessory:(id)a1 accessoryFirmwareUpdateManager:(id)a2 logEventManager:(id)a3;

@end
