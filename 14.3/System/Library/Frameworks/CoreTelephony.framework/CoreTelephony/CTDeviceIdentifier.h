@class NSString;

@interface CTDeviceIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) unsigned long long deviceType;
@property (retain, nonatomic) NSString *EID;
@property (retain, nonatomic) NSString *IMEI;

- (id)init;
- (id)initWithDeviceType:(unsigned long long)a0 EID:(id)a1 IMEI:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
