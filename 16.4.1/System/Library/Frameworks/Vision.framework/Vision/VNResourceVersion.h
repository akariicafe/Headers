@class NSString;

@interface VNResourceVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int major;
@property (readonly, nonatomic) unsigned int minor;
@property (readonly, nonatomic) unsigned int micro;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;

+ (id)invalidVersion;
+ (id)versionForStringRepresentation:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMajor:(unsigned int)a0 minor:(unsigned int)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (id)initWithMajor:(unsigned int)a0;
- (id)initWithMajor:(unsigned int)a0 minor:(unsigned int)a1 micro:(unsigned int)a2;
- (BOOL)isEqualToResourceVersion:(id)a0;

@end
