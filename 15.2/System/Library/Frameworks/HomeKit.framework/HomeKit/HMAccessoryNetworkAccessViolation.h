@class NSDate;

@interface HMAccessoryNetworkAccessViolation : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, getter=hasCurrentViolation) BOOL currentViolation;
@property (readonly) NSDate *lastViolationDate;
@property (readonly) NSDate *lastResetDate;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithLastViolationDate:(id)a0 lastViolationResetDate:(id)a1;

@end
