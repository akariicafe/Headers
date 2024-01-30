@class NSDictionary, NSTimeZone;

@interface BCSOpenHours : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *timeRanges;
@property (readonly, nonatomic) NSTimeZone *localTimeZone;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTimeRanges:(id)a0 timeZone:(id)a1;
- (BOOL)isOpenAtDate:(id)a0 timeZone:(id)a1;
- (long long)_weekdayOrdinalFromDate:(id)a0 timeZone:(id)a1;
- (BOOL)_validTimeRange:(id)a0;
- (long long)_totalSecondsInLocalTimeFromPreviousMidnightWithDate:(id)a0 timeZone:(id)a1;
- (id)_dateWhenOpenNextAfterDate:(id)a0 timeZone:(id)a1;
- (long long)_totalSecondsInLocalTimeFromPreviousMidnightWithDate:(id)a0;
- (id)_convertDateToLocalTimeZoneWithDate:(id)a0 timeZone:(id)a1;
- (id)_weekdayStringFromWeekdayIndex:(int)a0;
- (BOOL)isOpenAtDate:(id)a0;
- (id)dateWhenOpenNextAfterDate:(id)a0;
- (long long)_weekdayOrdinalFromDate:(id)a0;
- (long long)_weekdayIndexFromWeekdayString:(id)a0;
- (id)_convertDateToLocalTimeZoneWithDate:(id)a0;
- (id)initWithHoursMessages:(id)a0 timeZone:(id)a1;
- (id)initWithHoursPeriodMessage:(id)a0 timeZone:(id)a1;
- (id)initWithOpenHours:(id)a0 timeZone:(id)a1;
- (id)initWithJSONObj:(id)a0 timeZone:(id)a1;

@end
