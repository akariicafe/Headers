@class NSData, NSNumber;

@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_shortDeviceAddress;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSData *rawToken;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBytes:(id)a0;
- (id)descriptionInternal;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceAddress:(unsigned short)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)shortDeviceAddress;
- (id)description;
- (void).cxx_destruct;

@end
