@class NSString;

@interface HDCodableDateComponents : PBCodable <NSCopying> {
    struct { unsigned char day : 1; unsigned char era : 1; unsigned char hour : 1; unsigned char minute : 1; unsigned char month : 1; unsigned char nanosecond : 1; unsigned char quarter : 1; unsigned char second : 1; unsigned char weekOfMonth : 1; unsigned char weekOfYear : 1; unsigned char weekday : 1; unsigned char weekdayOrdinal : 1; unsigned char year : 1; unsigned char yearForWeekOfYear : 1; } _has;
}

@property (nonatomic) BOOL hasEra;
@property (nonatomic) long long era;
@property (nonatomic) BOOL hasYear;
@property (nonatomic) long long year;
@property (nonatomic) BOOL hasMonth;
@property (nonatomic) long long month;
@property (nonatomic) BOOL hasDay;
@property (nonatomic) long long day;
@property (nonatomic) BOOL hasHour;
@property (nonatomic) long long hour;
@property (nonatomic) BOOL hasMinute;
@property (nonatomic) long long minute;
@property (nonatomic) BOOL hasSecond;
@property (nonatomic) long long second;
@property (nonatomic) BOOL hasWeekday;
@property (nonatomic) long long weekday;
@property (nonatomic) BOOL hasWeekdayOrdinal;
@property (nonatomic) long long weekdayOrdinal;
@property (nonatomic) BOOL hasQuarter;
@property (nonatomic) long long quarter;
@property (nonatomic) BOOL hasWeekOfMonth;
@property (nonatomic) long long weekOfMonth;
@property (nonatomic) BOOL hasWeekOfYear;
@property (nonatomic) long long weekOfYear;
@property (nonatomic) BOOL hasYearForWeekOfYear;
@property (nonatomic) long long yearForWeekOfYear;
@property (nonatomic) BOOL hasNanosecond;
@property (nonatomic) long long nanosecond;
@property (readonly, nonatomic) BOOL hasCalendar;
@property (retain, nonatomic) NSString *calendar;
@property (readonly, nonatomic) BOOL hasTimeZone;
@property (retain, nonatomic) NSString *timeZone;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
