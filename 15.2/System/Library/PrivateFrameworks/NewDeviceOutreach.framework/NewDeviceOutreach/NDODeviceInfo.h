@class NDOWarranty, NDODevice;

@interface NDODeviceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NDODevice *device;
@property (retain) NDOWarranty *warranty;

+ (id)deviceInfoWithDevice:(id)a0 warranty:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 warranty:(id)a1;

@end
