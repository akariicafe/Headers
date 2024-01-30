@class NSString;

@interface HKMCProjection : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double startMean;
@property (readonly) double startStandardDeviation;
@property (readonly) double endMean;
@property (readonly) double endStandardDeviation;
@property (readonly, nonatomic) struct { long long x0; long long x1; } mostLikelyDays;
@property (readonly, nonatomic) struct { long long start; long long duration; } allDays;
@property (readonly, nonatomic, getter=isPartiallyLogged) BOOL partiallyLogged;
@property (readonly, nonatomic) long long daysOffsetFromCalendarMethod;
@property (readonly, nonatomic) long long predictionPrimarySource;
@property (readonly, copy) NSString *hk_redactedDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (long long)dayIndexFromEndWithCoefficient:(double)a0;
- (long long)_dayIndexFromMean:(double)a0 standardDeviation:(double)a1 coefficient:(double)a2;
- (long long)dayIndexFromStartWithCoefficient:(double)a0;
- (id)initWithStartMean:(double)a0 startStandardDeviation:(double)a1 endMean:(double)a2 endStandardDeviation:(double)a3 allDays:(struct { long long x0; long long x1; })a4 partiallyLogged:(BOOL)a5 daysOffsetFromCalendarMethod:(long long)a6 predictionPrimarySource:(long long)a7;
- (struct { long long x0; long long x1; })startDayRange;

@end
