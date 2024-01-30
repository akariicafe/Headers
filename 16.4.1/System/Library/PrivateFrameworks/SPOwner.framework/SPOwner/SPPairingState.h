@class NSUUID, NSData, NSNumber;

@interface SPPairingState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *beaconIdentifier;
@property (copy, nonatomic) NSData *macAddress;
@property (copy, nonatomic) NSNumber *pairingEpoch;
@property (nonatomic) unsigned char partId;
@property (nonatomic) long long pairingType;
@property (nonatomic) long long status;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithStatus:(long long)a0 beaconIdentifier:(id)a1 macAddress:(id)a2 pairingEpoch:(id)a3 partId:(unsigned char)a4 pairingType:(long long)a5;

@end
