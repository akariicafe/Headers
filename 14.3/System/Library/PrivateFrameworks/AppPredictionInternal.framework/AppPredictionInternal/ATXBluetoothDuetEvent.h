@class NSString;

@interface ATXBluetoothDuetEvent : ATXDuetEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) long long bluetoothState;
@property (readonly, nonatomic) long long deviceType;

+ (long long)deviceTypeFromBluetoothDeviceType:(id)a0;

- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)identifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDKEvent:(id)a0;
- (id)initWithBluetoothState:(long long)a0 deviceType:(long long)a1 deviceName:(id)a2 hardwareAddress:(id)a3 startDate:(id)a4 endDate:(id)a5;

@end
