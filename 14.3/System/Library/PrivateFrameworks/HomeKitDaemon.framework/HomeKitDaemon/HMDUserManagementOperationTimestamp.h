@class HMDDevice, NSNumber, NSDate;

@interface HMDUserManagementOperationTimestamp : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMDDevice *device;
@property (readonly) NSDate *timestamp;
@property (readonly) NSNumber *state;

- (void).cxx_destruct;
- (id)shortDescription;
- (id)attributeDescriptions;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 state:(unsigned long long)a1;

@end
