@class NSString;

@interface HKDevice : NSObject <NSSecureCoding, NSCopying> {
    NSString *_name;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_hardwareVersion;
    NSString *_firmwareVersion;
    NSString *_softwareVersion;
    NSString *_localIdentifier;
    NSString *_UDIDeviceIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *_connectedGymDeviceFullName;
@property (readonly, nonatomic) NSString *_connectedGymDeviceTypeName;
@property (readonly) NSString *name;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;
@property (readonly) NSString *hardwareVersion;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *softwareVersion;
@property (readonly) NSString *localIdentifier;
@property (readonly) NSString *UDIDeviceIdentifier;

+ (id)localDevice;

- (void)_setFirmwareVersion:(id)a0;
- (void)_setHardwareVersion:(id)a0;
- (void)_setFitnessMachineType:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_setLocalIdentifier:(id)a0;
- (BOOL)_isConnectedGymDevice;
- (void)_setName:(id)a0;
- (void)_setSoftwareVersion:(id)a0;
- (id)initWithName:(id)a0 manufacturer:(id)a1 model:(id)a2 hardwareVersion:(id)a3 firmwareVersion:(id)a4 softwareVersion:(id)a5 localIdentifier:(id)a6 UDIDeviceIdentifier:(id)a7;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)_setManufacturer:(id)a0;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setUDIDeviceIdentifier:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)_fitnessMachineType;
- (void)_setModel:(id)a0;

@end
