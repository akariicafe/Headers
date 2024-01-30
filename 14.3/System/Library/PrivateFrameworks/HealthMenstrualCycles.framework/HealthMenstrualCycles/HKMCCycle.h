@class NSArray, HKMCCycleSegment, NSString, NSNumber;

@interface HKMCCycle : NSObject <HKRedactedDescription, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKMCCycleSegment *menstruationSegment;
@property (readonly, nonatomic) HKMCCycleSegment *fertileWindowSegment;
@property (readonly, nonatomic) NSNumber *lastDayIndex;
@property (readonly, nonatomic) NSArray *cycleFactors;
@property (readonly, copy) NSString *hk_redactedDescription;

+ (id)_cycleWithMenstruationSegment:(id)a0 fertileWindowSegment:(id)a1 lastDayIndex:(id)a2;
+ (id)_cycleWithMenstruationSegment:(id)a0 fertileWindowSegment:(id)a1 lastDayIndex:(id)a2 cycleFactors:(id)a3;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithMenstruationSegment:(id)a0 fertileWindowSegment:(id)a1 lastDayIndex:(id)a2;
- (id)_initWithMenstruationSegment:(id)a0 fertileWindowSegment:(id)a1 lastDayIndex:(id)a2 cycleFactors:(id)a3;

@end
