@class NSString, NSNumber;

@interface SFCompanionService : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *deviceID;
@property (copy) NSString *deviceName;
@property (copy) NSString *serviceType;
@property (copy) NSString *managerID;
@property (copy) NSString *ipAddress;
@property (copy) NSString *identifier;
@property (copy) NSNumber *nsxpcVersion;

+ (id)serviceFromAuthorData:(id)a0;
+ (id)serviceFromDictionary:(id)a0;

- (id)messageData;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToService:(id)a0;

@end
