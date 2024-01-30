@class NSDictionary;

@interface DSIOPSDevice : NSObject

@property (retain, nonatomic) NSDictionary *info;

+ (id)deviceWithDeviceIdentifier:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; })a0;

- (id)serialNumber;
- (void).cxx_destruct;
- (id)initWithDeviceIdentifier:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; })a0;
- (id)information;

@end
