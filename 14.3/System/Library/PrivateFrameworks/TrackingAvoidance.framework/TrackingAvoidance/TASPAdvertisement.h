@class NSData, NSString, NSDate;

@interface TASPAdvertisement : NSObject <OSLogCoding, TAEventProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *address;
@property (readonly, copy, nonatomic) NSData *advertisementData;
@property (readonly, nonatomic) unsigned char status;
@property (readonly, copy, nonatomic) NSData *reserved;
@property (readonly, nonatomic) long long rssi;
@property (readonly, copy, nonatomic) NSDate *scanDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)TASPAdvertisementTypeToString:(unsigned long long)a0;
+ (id)TASPAdvertisementDeviceTypeToString:(unsigned long long)a0;

- (id)descriptionDictionary;
- (void)encodeWithOSLogCoder:(id)a0 options:(unsigned long long)a1 maxLength:(unsigned long long)a2;
- (id)getDate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAddress:(id)a0 advertisementData:(id)a1 status:(unsigned char)a2 reserved:(id)a3 rssi:(long long)a4 scanDate:(id)a5;
- (id)initWithCoder:(id)a0;
- (unsigned long long)getDeviceType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)getType;
- (void)encodeWithCoder:(id)a0;

@end
