@class NSData, NSDate;

@interface SPUnauthorizedTrackingAdvertisement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *_address;
@property (nonatomic) long long rssi;
@property (copy, nonatomic) NSData *advertisementData;
@property (nonatomic) unsigned char status;
@property (copy, nonatomic) NSData *reserved;
@property (copy, nonatomic) NSDate *scanDate;
@property (readonly, copy, nonatomic) NSData *address;
@property (copy, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 advertisementData:(id)a1 status:(unsigned char)a2 reserved:(id)a3 rssi:(long long)a4 scanDate:(id)a5;
- (id)initWithAddress:(id)a0 advertisementData:(id)a1 rssi:(long long)a2 scanDate:(id)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
