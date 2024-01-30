@class NSNumber;

@interface NRDevicePairingCriteria : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long deviceType;
@property (nonatomic) unsigned char pairingTransport;
@property (retain, nonatomic) NSNumber *rssi;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
