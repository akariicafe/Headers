@class NSData;

@interface CLGatheringBleAdvertisement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *address;
@property (readonly, copy, nonatomic) NSData *authTag;
@property (nonatomic) long long rssi;
@property (nonatomic) long long count;
@property (readonly, nonatomic) double unixTime;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)encodedBytes;
- (id)getDateString:(double)a0;
- (id)hexString:(id)a0;
- (id)initWithAddress:(id)a0 withAuthTag:(id)a1 withRssi:(long long)a2 withCount:(long long)a3 withTime:(double)a4;
- (id)initWithPersistenceBytes:(struct { double x0; unsigned char x1[6]; unsigned char x2[6]; short x3; short x4; } *)a0;

@end
