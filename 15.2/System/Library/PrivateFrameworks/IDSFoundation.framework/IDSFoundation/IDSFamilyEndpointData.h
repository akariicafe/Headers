@class NSString;

@interface IDSFamilyEndpointData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) long long deviceType;
@property (retain, nonatomic) NSString *deviceColor;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *deviceUniqueID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceName:(id)a0 privateDeviceData:(id)a1;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (id)dictionaryRepresentation;

@end
