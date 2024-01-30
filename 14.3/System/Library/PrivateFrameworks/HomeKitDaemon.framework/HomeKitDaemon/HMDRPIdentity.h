@class HMFKey;

@interface HMDRPIdentity : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMFKey *deviceIRK;

+ (id)logCategory;
+ (id)identityWithRPIdentity:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)logIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDeviceIRK:(id)a0;
- (BOOL)isEqualToRPIndentity:(id)a0;

@end
