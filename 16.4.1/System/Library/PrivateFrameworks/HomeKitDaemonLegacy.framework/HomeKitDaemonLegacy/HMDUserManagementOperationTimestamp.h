@class HMDDevice, NSNumber, NSDate;

@interface HMDUserManagementOperationTimestamp : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMDDevice *device;
@property (readonly) NSDate *timestamp;
@property (readonly) NSNumber *state;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 state:(unsigned long long)a1;

@end
