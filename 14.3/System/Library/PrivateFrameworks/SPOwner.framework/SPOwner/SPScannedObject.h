@class NSData, SPAccessoryInformation, NSDate, SPIndexInformation;

@interface SPScannedObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *scanDate;
@property (copy, nonatomic) NSData *address;
@property (copy, nonatomic) NSData *advertisement;
@property (nonatomic) unsigned char status;
@property (copy, nonatomic) NSData *optional;
@property (nonatomic) long long rssi;
@property (readonly, copy, nonatomic) SPAccessoryInformation *accessoryInformation;
@property (readonly, copy, nonatomic) SPIndexInformation *indexInformation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithScanDate:(id)a0 address:(id)a1 advertisement:(id)a2 status:(unsigned char)a3 optional:(id)a4 rssi:(long long)a5 indexInformation:(id)a6 acccessoryInformation:(id)a7;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
