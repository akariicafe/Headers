@class NSDate;

@interface HMDAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *lastViolationDate;
@property (readonly) NSDate *lastResetDate;
@property (readonly, getter=hasCurrentViolation) BOOL currentViolation;

+ (id)noViolation;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithLastViolationDate:(id)a0 lastViolationResetDate:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithLastViolationTimeInterval:(id)a0 lastViolationResetTimeInterval:(id)a1;

@end
