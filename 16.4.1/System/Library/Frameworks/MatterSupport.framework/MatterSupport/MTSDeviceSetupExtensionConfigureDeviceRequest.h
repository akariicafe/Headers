@class NSString, MTSDeviceSetupRoom;

@interface MTSDeviceSetupExtensionConfigureDeviceRequest : MTSDeviceSetupExtensionMessage

@property (readonly, copy) NSString *deviceName;
@property (readonly, copy) MTSDeviceSetupRoom *deviceRoom;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithDeviceName:(id)a0 deviceRoom:(id)a1;

@end
