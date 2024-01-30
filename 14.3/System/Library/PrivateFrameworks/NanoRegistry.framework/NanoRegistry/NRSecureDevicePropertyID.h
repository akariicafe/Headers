@class NSUUID;

@interface NRSecureDevicePropertyID : NSObject <NSCopying, NSSecureCoding> {
    NSUUID *_uuid;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPropertyString:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
