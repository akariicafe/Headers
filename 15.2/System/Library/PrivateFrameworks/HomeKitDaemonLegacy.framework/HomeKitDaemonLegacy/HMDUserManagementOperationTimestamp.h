@class HMDDevice, NSNumber, NSDate;

@interface HMDUserManagementOperationTimestamp : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) HMDDevice *device;
@property (readonly) NSDate *timestamp;
@property (readonly) NSNumber *state;

- (id)shortDescription;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 state:(unsigned long long)a1;

@end
