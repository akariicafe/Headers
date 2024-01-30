@class NSString;

@interface CTDeviceIdentifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) unsigned long long deviceType;
@property (retain, nonatomic) NSString *EID;
@property (retain, nonatomic) NSString *IMEI;
@property (retain, nonatomic) NSString *idsDeviceId;

- (id)initWithDeviceType:(unsigned long long)a0 EID:(id)a1 IMEI:(id)a2 idsDeviceId:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
