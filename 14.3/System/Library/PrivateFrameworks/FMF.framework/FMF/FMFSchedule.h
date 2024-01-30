@class NSTimeZone, NSString, NSCalendar, NSDictionary;

@interface FMFSchedule : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedDaysOfWeekString;
@property (readonly, nonatomic) NSString *localizedStartTimeString;
@property (readonly, nonatomic) NSString *localizedEndTimeString;
@property (readonly, nonatomic) NSCalendar *_gregorian;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly) NSString *validityError;
@property (nonatomic) unsigned long long startHour;
@property (nonatomic) unsigned long long startMin;
@property (nonatomic) long long daysOfWeek;
@property (nonatomic) unsigned long long endHour;
@property (nonatomic) unsigned long long endMin;
@property (nonatomic) unsigned long long spanDays;
@property (retain, nonatomic) NSTimeZone *timeZone;

+ (id)_dateFromHour:(unsigned long long)a0 andMinute:(unsigned long long)a1;
+ (id)localizedDaysOfWeekStringFor:(long long)a0;
+ (id)_stringForDaysOfWeek:(long long)a0;
+ (id)localizedTimeStringForHour:(unsigned long long)a0 andMinute:(unsigned long long)a1 timeStyle:(unsigned long long)a2;
+ (id)localizedTimeStringForHour:(unsigned long long)a0 andMinute:(unsigned long long)a1;
+ (id)_dayStringForDayOfWeek:(long long)a0;
+ (void)_enumerateDaysOfWeekInFMFDaysOfWeek:(long long)a0 callback:(id /* block */)a1;
+ (id)firstDateFromDates:(id)a0 order:(long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)_daysOfWeek;
- (void)encodeWithCoder:(id)a0;
- (id)nextStartDateFrom:(id)a0 options:(unsigned long long)a1;
- (id)_endDateForStartDate:(id)a0;
- (id)_nextStartDateOnDayOfWeek:(long long)a0 from:(id)a1 options:(unsigned long long)a2;
- (BOOL)isCurrentAt:(id)a0;
- (id)nextStartOrEndDateFrom:(id)a0;
- (id)previousStartDateFrom:(id)a0;

@end
