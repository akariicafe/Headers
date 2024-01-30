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

+ (id)predictionUnavailable;
+ (id)timelineWithValues:(id)a0 forDurations:(id)a1 startingAt:(id)a2;
+ (id)timelineWithValues:(id)a0 eachWithDuration:(double)a1 startingAt:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)largestDateRangeWithValuesBetween:(double)a0 and:(double)a1 ofMinimumDuration:(double)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isUnavailable;
- (id)valueAtDate:(id)a0;
- (id)nextDateRangeWithValuesBetween:(double)a0 and:(double)a1 ofMinimumDuration:(double)a2;

@end
