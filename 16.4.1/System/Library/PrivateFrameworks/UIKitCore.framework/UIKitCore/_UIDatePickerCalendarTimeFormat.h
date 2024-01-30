@class NSTimeZone, NSString, NSNumberFormatter, NSDate, NSLocale;

@interface _UIDatePickerCalendarTimeFormat : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *timeFormat;
@property (readonly, nonatomic) NSString *hourFormat;
@property (readonly, nonatomic) NSString *AMSymbol;
@property (readonly, nonatomic) NSString *PMSymbol;
@property (readonly, nonatomic) BOOL wantsDoubleDigitHours;
@property (readonly, nonatomic) BOOL forceDoubleDigitHours;
@property (readonly, nonatomic) long long clock;
@property (readonly, nonatomic) long long clockLayout;
@property (readonly, nonatomic) BOOL hasLeadingLiteral;
@property (readonly, nonatomic) BOOL hasTrailingLiteral;
@property (readonly, nonatomic) NSNumberFormatter *hourFormatter;
@property (readonly, nonatomic) NSNumberFormatter *minuteFormatter;
@property (readonly, nonatomic) NSString *extendedHoursFormat;
@property (readonly, nonatomic) NSNumberFormatter *strictHourFormatter;
@property (nonatomic) NSDate *timeZoneReferenceDate;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) BOOL displaysTimeZone;

+ (id)formatWithCalendar:(id)a0 locale:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithCalendar:(id)a0 locale:(id)a1 forceDoubleDigitHours:(BOOL)a2 displaysTimeZone:(BOOL)a3;
- (id)localizedTimeStringWithHours:(unsigned long long)a0 minutes:(unsigned long long)a1 isPM:(BOOL)a2;
- (id)localizedTimeStringWithHours:(unsigned long long)a0 minutes:(unsigned long long)a1 isPM:(BOOL)a2 ranges:(struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; struct _NSRange { unsigned long long x0; unsigned long long x1; } x3; } *)a3;
- (id)withDisplaysTimeZone:(BOOL)a0;
- (id)withForceDoubleDigitHours:(BOOL)a0;
- (id)withTimeZone:(id)a0;

@end
