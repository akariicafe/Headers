@class NSString;

@interface HKMCCycleSegment : NSObject <HKRedactedDescription, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct { long long start; long long duration; } days;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)_menstruationSegmentWithDays:(struct { long long x0; long long x1; })a0;
+ (id)_fertileWindowSegmentWithDays:(struct { long long x0; long long x1; })a0;

- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithType:(long long)a0 days:(struct { long long x0; long long x1; })a1;

@end
