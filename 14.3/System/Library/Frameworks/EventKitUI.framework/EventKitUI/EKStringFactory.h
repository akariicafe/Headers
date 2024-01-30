@interface EKStringFactory : NSObject {
    struct __CFDateFormatter { } *_standardTimeFormatter;
    struct __CFDateFormatter { } *_customFormatter;
}

+ (id)sharedInstance;

- (void)_localeChanged:(id)a0;
- (id)init;
- (void)_invalidateFormatters;
- (void)dealloc;
- (id)_stringForDateTime:(struct { int x0; char x1; char x2; char x3; char x4; double x5; })a0 timeZone:(struct __CFTimeZone { } *)a1;
- (id)dateStringForSuggestedEventWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 allDay:(BOOL)a3 showTimeZone:(BOOL)a4;
- (struct __CFDateFormatter { } *)_customFormatter;
- (id)_stringForTime:(struct { int x0; char x1; char x2; char x3; char x4; double x5; })a0;
- (id)dateStringForEventInvitationWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 allDay:(BOOL)a3;
- (id)dateStringForEventInvitation:(id)a0 timeZone:(id)a1;
- (struct __CFDateFormatter { } *)standardTimeFormatter;
- (id)_dateStringForEventInvitationWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 allDay:(BOOL)a3 withFormat:(unsigned long long)a4 showTimeZone:(BOOL)a5;
- (id)dateStringForDate:(double)a0 allDay:(BOOL)a1 standalone:(BOOL)a2 shortFormat:(BOOL)a3;
- (id)dateStringForDate:(double)a0 allDay:(BOOL)a1 shortFormat:(BOOL)a2;
- (id)timeStringForDate:(double)a0 inTimeZone:(id)a1;

@end
