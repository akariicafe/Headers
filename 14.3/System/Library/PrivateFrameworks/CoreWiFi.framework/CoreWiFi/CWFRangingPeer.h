@class NSString, NSData;

@interface CWFRangingPeer : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *MACAddress;
@property (copy, nonatomic) NSData *PMK;
@property (nonatomic) unsigned long long numberOfMeasurements;

+ (id)rangingPeerWithMACAddress:(id)a0 PMK:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToRangingPeer:(id)a0;

@end
