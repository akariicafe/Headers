@class EAAccessory;

@interface DSEADevice : NSObject

@property (retain, nonatomic) EAAccessory *device;

+ (id)deviceWithSerialNumber:(id)a0;
+ (id)deviceWithModelNumber:(id)a0;
+ (id)devicesWithModelNumbers:(id)a0;

- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (id)information;
- (id)initWithSerialNumber:(id)a0;
- (id)initWithModelNumber:(id)a0;

@end
