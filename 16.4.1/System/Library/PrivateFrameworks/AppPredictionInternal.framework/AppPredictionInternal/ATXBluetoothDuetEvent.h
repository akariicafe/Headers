@class NSString;

@interface ATXBluetoothDuetEvent : ATXDuetEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) long long bluetoothState;
@property (readonly, nonatomic) long long deviceType;

+ (id)convertActiveBluetoothDisconnectedEventIntoInactiveBluetoothConnectedEvent:(id)a0;
+ (long long)deviceTypeFromBluetoothDeviceType:(id)a0;
+ (id)mostRecentOrActiveBluetoothConnectedEventFromCurrentContextStoreValues;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCurrentContextStoreValues;
- (id)initWithCoder:(id)a0;
- (id)initWithDKEvent:(id)a0;
- (id)identifier;
- (BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBluetoothState:(long long)a0 deviceType:(long long)a1 deviceName:(id)a2 hardwareAddress:(id)a3 startDate:(id)a4 endDate:(id)a5;

@end
