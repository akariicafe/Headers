@class NSData, NSNumber;

@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_shortDeviceAddress;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *rawToken;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithBytes:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)descriptionInternal;
- (id)initWithDeviceAddress:(unsigned short)a0;
- (id)shortDeviceAddress;

@end
