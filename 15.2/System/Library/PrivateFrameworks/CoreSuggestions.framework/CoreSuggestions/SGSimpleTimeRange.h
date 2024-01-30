@class NSTimeZone, NSDate;

@interface SGSimpleTimeRange : NSObject <NSCopying, NSSecureCoding> {
    NSTimeZone *_startTimeZone;
    NSTimeZone *_endTimeZone;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct SGUnixTimestamp_ { double secondsFromUnixEpoch; } start;
@property (readonly, nonatomic) struct SGUnixTimestamp_ { double secondsFromUnixEpoch; } end;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) long long startUTCOffsetSeconds;
@property (readonly, nonatomic) long long endUTCOffsetSeconds;
@property (readonly, nonatomic, getter=isFloating) BOOL floating;
@property (readonly, nonatomic) NSTimeZone *startTimeZone;
@property (readonly, nonatomic) NSTimeZone *endTimeZone;

+ (struct SGUnixTimestamp_ { double x0; })toFloatingTime:(struct SGUnixTimestamp_ { double x0; })a0;
+ (struct SGUnixTimestamp_ { double x0; })fromFloatingTime:(struct SGUnixTimestamp_ { double x0; })a0;
+ (id)rangeWithStart:(struct SGUnixTimestamp_ { double x0; })a0 end:(struct SGUnixTimestamp_ { double x0; })a1 timeZone:(id)a2;
+ (struct SGUnixTimestamp_ { double x0; })toFloatingTime:(struct SGUnixTimestamp_ { double x0; })a0 withDSTAmbiguityPreferences:(id)a1;
+ (id)dateFromGregorianComponents:(id)a0;
+ (BOOL)isAllDayComponents:(id)a0;
+ (BOOL)hasYearMonthDayComponents:(id)a0;
+ (id)rangeWithGregorianStartComponents:(id)a0 endComponents:(id)a1;
+ (id)rangeWithStart:(struct SGUnixTimestamp_ { double x0; })a0 startTimeZone:(id)a1 end:(struct SGUnixTimestamp_ { double x0; })a2 endTimeZone:(id)a3;
+ (id)rangeWithStartDate:(id)a0 startTimeZone:(id)a1 endDate:(id)a2 endTimeZone:(id)a3;
+ (id)utcRangeWithStart:(struct SGUnixTimestamp_ { double x0; })a0 end:(struct SGUnixTimestamp_ { double x0; })a1;
+ (id)rangeWithStart:(struct SGUnixTimestamp_ { double x0; })a0 duration:(double)a1 timeZone:(id)a2;
+ (id)utcRangeWithStart:(struct SGUnixTimestamp_ { double x0; })a0 duration:(double)a1;
+ (id)floatingRangeWithUTCStartDate:(id)a0 endDate:(id)a1;
+ (id)floatingRangeWithUTCStart:(struct SGUnixTimestamp_ { double x0; })a0 end:(struct SGUnixTimestamp_ { double x0; })a1;
+ (id)floatingRangeWithLocalStartDate:(id)a0 endDate:(id)a1;
+ (id)floatingRangeWithLocalStart:(struct SGUnixTimestamp_ { double x0; })a0 end:(struct SGUnixTimestamp_ { double x0; })a1;

- (id)initUTCFloatingWithStart:(struct SGUnixTimestamp_ { double x0; })a0 end:(struct SGUnixTimestamp_ { double x0; })a1;
- (id)initWithStart:(struct SGUnixTimestamp_ { double x0; })a0 startUTCOffsetSeconds:(long long)a1 end:(struct SGUnixTimestamp_ { double x0; })a2 endUTCOffsetSeconds:(long long)a3;
- (id)absoluteRange;
- (id)stableStringRepresentation;
- (id)_componentsForDate:(id)a0 timeZone:(id)a1;
- (BOOL)isValidAllDayRange;
- (BOOL)startedMoreThan24HoursAgo;
- (void)applyToEKEvent:(id)a0 isAllDay:(BOOL)a1 isFloating:(BOOL)a2;
- (BOOL)isEqualToSimpleTimeRange:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)endDateComponents;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)startDateComponents;

@end
