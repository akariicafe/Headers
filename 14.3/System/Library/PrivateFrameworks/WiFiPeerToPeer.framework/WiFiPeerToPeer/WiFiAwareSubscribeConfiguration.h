@class NSString, NSData;

@interface WiFiAwareSubscribeConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSData *serviceSpecificInfo;
@property (nonatomic) long long authenticationType;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithServiceName:(id)a0 serviceSpecificInfo:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)serviceSpecificInfoEqual:(id)a0;

@end
