@class NSString, NSNumberFormatter;

@interface _UIDatePickerCalendarTimeFormat : NSObject

@property (readonly, nonatomic) NSString *timeFormat;
@property (readonly, nonatomic) NSString *hourFormat;
@property (readonly, nonatomic) BOOL wantsDoubleDigitHours;
@property (readonly, nonatomic) BOOL forceDoubleDigitHours;
@property (readonly, nonatomic) long long clock;
@property (readonly, nonatomic) long long clockLayout;
@property (readonly, nonatomic) BOOL hasLeadingLiteral;
@property (readonly, nonatomic) BOOL hasTrailingLiteral;
@property (readonly, nonatomic) NSNumberFormatter *hourFormatter;
@property (readonly, nonatomic) NSNumberFormatter *minuteFormatter;
@property (readonly, nonatomic) NSNumberFormatter *strictHourFormatter;

- (id)initWithCalendar:(id)a0 locale:(id)a1 forceDoubleDigitHoursWhenFormatting:(BOOL)a2;
- (id)localizedTimeStringWithHours:(unsigned long long)a0 minutes:(unsigned long long)a1 hourRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 minuteRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (void).cxx_destruct;
- (id)localizedTimeStringWithHours:(unsigned long long)a0 minutes:(unsigned long long)a1;

@end
