@class NSString;

@interface BTCloudDeviceSupportInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bluetoothAddress;
@property (retain, nonatomic) NSString *budsFirmwareVersion;
@property (retain, nonatomic) NSString *caseName;
@property (retain, nonatomic) NSString *caseFirmwareVersion;
@property (retain, nonatomic) NSString *caseSerialNumber;
@property (retain, nonatomic) NSString *hardwareVersion;
@property (retain, nonatomic) NSString *leftBudSerialNumber;
@property (retain, nonatomic) NSString *rightBudSerialNumber;
@property (retain, nonatomic) NSString *ancAssetVersion;

+ (id)deviceSupportInformationWithBluetoothAddress:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBluetoothAddress:(id)a0;

@end
