@class NSDate;

@interface HMAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=hasCurrentViolation) BOOL currentViolation;
@property (readonly) NSDate *lastViolationDate;
@property (readonly) NSDate *lastResetDate;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithLastViolationDate:(id)a0 lastViolationResetDate:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
