@class NSString;

@interface HKMCProjection : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying> {
    double _startMean;
    double _startStandardDeviation;
    double _endMean;
    double _endStandardDeviation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { long long x0; long long x1; } mostLikelyDays;
@property (readonly, nonatomic) struct { long long start; long long duration; } allDays;
@property (readonly, nonatomic, getter=isPartiallyLogged) BOOL partiallyLogged;
@property (readonly, copy) NSString *hk_redactedDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithStartMean:(double)a0 startStandardDeviation:(double)a1 endMean:(double)a2 endStandardDeviation:(double)a3 allDays:(struct { long long x0; long long x1; })a4 partiallyLogged:(BOOL)a5;
- (long long)_dayIndexFromMean:(double)a0 standardDeviation:(double)a1 coefficient:(double)a2;
- (long long)dayIndexFromStartWithCoefficient:(double)a0;
- (long long)dayIndexFromEndWithCoefficient:(double)a0;
- (struct { long long x0; long long x1; })startDayRange;

@end
