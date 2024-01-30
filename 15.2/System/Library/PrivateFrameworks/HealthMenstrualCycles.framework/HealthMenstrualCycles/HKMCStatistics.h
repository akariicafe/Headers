@class NSNumber, NSString;

@interface HKMCStatistics : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *cycleLengthMedian;
@property (copy, nonatomic) NSNumber *menstruationLengthMedian;
@property (readonly, nonatomic) long long numberOfCycles;
@property (readonly, copy, nonatomic) NSNumber *firstMenstruationStartDayIndex;
@property (readonly, copy, nonatomic) NSNumber *lastMenstruationStartDayIndex;
@property (readonly, copy, nonatomic) NSNumber *cycleLengthLowerPercentile;
@property (readonly, copy, nonatomic) NSNumber *cycleLengthUpperPercentile;
@property (readonly, copy, nonatomic) NSNumber *menstruationLengthLowerPercentile;
@property (readonly, copy, nonatomic) NSNumber *menstruationLengthUpperPercentile;
@property (readonly, copy) NSString *hk_redactedDescription;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNumberOfCycles:(long long)a0 firstMenstruationStartDayIndex:(id)a1 lastMenstruationStartDayIndex:(id)a2 cycleLengthMedian:(id)a3 cycleLengthLowerPercentile:(id)a4 cycleLengthUpperPercentile:(id)a5 menstruationLengthMedian:(id)a6 menstruationLengthLowerPercentile:(id)a7 menstruationLengthUpperPercentile:(id)a8;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
