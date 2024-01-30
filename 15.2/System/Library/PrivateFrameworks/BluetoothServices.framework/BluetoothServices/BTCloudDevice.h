@class NSString;

@interface BTCloudDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bluetoothAddress;
@property (retain, nonatomic) NSString *manufacturer;
@property (retain, nonatomic) NSString *modelNumber;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *productID;
@property (retain, nonatomic) NSString *vendorID;

+ (id)deviceWithBluetoothAddress:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBluetoothAddress:(id)a0;

@end
