@class NSData;

@interface HMDCapabilityFlags : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *bytesData;

+ (id)shortDescription;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)hasCapabilities:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCapabilities:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCapabilityOptions:(unsigned long long)a0;

@end
