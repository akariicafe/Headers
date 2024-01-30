@class NSUUID, NSData, NSDate, SPEstimatedLocation;

@interface SPBeaconAdvertisement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *address;
@property (copy, nonatomic) NSData *publicKey;
@property (copy, nonatomic) NSData *deviceType;
@property (copy, nonatomic) NSData *batteryState;
@property (copy, nonatomic) NSDate *scanDate;
@property (copy, nonatomic) NSUUID *recordIdentifier;
@property (nonatomic) unsigned char rawStatus;
@property (nonatomic) long long rssi;
@property (copy, nonatomic) SPEstimatedLocation *location;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0 publicKey:(id)a1 deviceType:(id)a2 batteryState:(id)a3 rawStatus:(unsigned char)a4 rssi:(long long)a5 scanDate:(id)a6 recordIdentifier:(id)a7;

@end
