@class HMFKey;

@interface HMDRPIdentity : HMFObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HMFKey *deviceIRK;

+ (id)logCategory;
+ (id)identityWithRPIdentity:(id)a0;

- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDeviceIRK:(id)a0;
- (BOOL)isEqualToRPIndentity:(id)a0;

@end
