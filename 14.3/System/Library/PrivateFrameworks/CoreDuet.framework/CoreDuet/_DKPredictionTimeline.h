@class NSArray, _DKHistogram, NSDate;

@interface _DKPredictionTimeline : NSObject <NSCopying, NSSecureCoding> {
    NSDate *_startDate;
    NSArray *_transitionDates;
    NSArray *_values;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *transitionDates;
@property (retain, nonatomic) _DKHistogram *startHistogram;
@property (retain, nonatomic) _DKHistogram *endHistogram;

+ (id)timelineWithValues:(id)a0 eachWithDuration:(double)a1 startingAt:(id)a2;
+ (id)timelineWithValues:(id)a0 forDurations:(id)a1 startingAt:(id)a2;
+ (id)predictionUnavailable;

- (void).cxx_destruct;
- (id)nextDateRangeWithValuesBetween:(double)a0 and:(double)a1 ofMinimumDuration:(double)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueAtDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isUnavailable;
- (id)largestDateRangeWithValuesBetween:(double)a0 and:(double)a1 ofMinimumDuration:(double)a2;
- (void)encodeWithCoder:(id)a0;

@end
