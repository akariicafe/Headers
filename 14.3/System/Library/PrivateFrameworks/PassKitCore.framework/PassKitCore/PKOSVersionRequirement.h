@class NSString;

@interface PKOSVersionRequirement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *iphone;
@property (readonly, nonatomic) NSString *ipad;
@property (readonly, nonatomic) NSString *ipod;
@property (readonly, nonatomic) NSString *appletv;
@property (readonly, nonatomic) NSString *mac;
@property (readonly, nonatomic) NSString *watch;
@property (readonly, nonatomic) NSString *specifiediphone;

+ (id)fromDeviceVersion;

- (long long)compare:(id)a0 deviceClass:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDictionary;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)versionForDeviceClass:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToOSVersionRequirement:(id)a0;

@end
