@class W5BluetoothStatus, W5WiFiStatus, W5AWDLStatus, W5NetworkStatus, W5PowerStatus;

@interface W5Status : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) W5WiFiStatus *wifi;
@property (copy, nonatomic) W5AWDLStatus *awdl;
@property (copy, nonatomic) W5BluetoothStatus *bluetooth;
@property (copy, nonatomic) W5NetworkStatus *network;
@property (copy, nonatomic) W5PowerStatus *power;

- (BOOL)isEqualToStatus:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)conformsToProtocol:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
