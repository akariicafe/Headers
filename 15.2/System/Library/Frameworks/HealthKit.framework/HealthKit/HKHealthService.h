@class NSString, CBPeripheral, NSData, NSUUID;

@interface HKHealthService : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double lastConnection;
@property (copy, nonatomic) NSString *serviceId;
@property (retain, nonatomic) NSData *advertisementData;
@property (retain, nonatomic) CBPeripheral *peripheral;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *name;

- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2;
- (id)_initWithType:(long long)a0 identifier:(id)a1 name:(id)a2 serviceId:(id)a3;
- (id)_localizedHealthServiceType;
- (id)initUnknownServiceWithIdentifier:(id)a0 name:(id)a1 serviceId:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
