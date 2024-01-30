@class NSData;

@interface HMDCapabilityFlags : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSData *bytesData;

+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)hasCapabilities:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCapabilities:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCapabilityOptions:(unsigned long long)a0;

@end
