@class NSArray, NSString;

@interface BCBatteryDeviceController : NSObject <BCBatteryDeviceObservable>

@property (readonly, copy, nonatomic) NSArray *connectedDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_sharedPowerSourceController;

@end
