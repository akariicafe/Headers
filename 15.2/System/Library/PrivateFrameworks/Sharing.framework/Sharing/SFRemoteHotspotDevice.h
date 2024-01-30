@class NSData, NSString, NSNumber;

@interface SFRemoteHotspotDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsCompanionLink;
@property BOOL hasDuplicates;
@property (readonly, copy, nonatomic) NSData *advertisementData;
@property (copy) NSString *deviceName;
@property (copy) NSString *deviceIdentifier;
@property (retain) NSNumber *batteryLife;
@property unsigned char networkType;
@property (retain) NSNumber *signalStrength;
@property (retain) NSString *model;
@property BOOL osSupportsAutoHotspot;
@property long long group;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned char)networkTypeForIncomingType:(unsigned char)a0;
- (id)batteryLifeFromInfo:(unsigned int)a0;
- (unsigned char)networkTypeFromInfo:(unsigned int)a0;
- (id)signalStrengthFromInfo:(unsigned int)a0;
- (id)initWithName:(id)a0 identifier:(id)a1 advertisement:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; })a2;
- (BOOL)componentsAreEqualTo:(id)a0;
- (void)updateWithHotspotInfo:(unsigned int)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
