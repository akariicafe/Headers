@class NSCalendar, NSLocale;

@interface NSRelativeDateTimeFormatter : NSFormatter {
    struct __CFRelativeDateTimeFormatter { } *_formatter;
}

@property long long dateTimeStyle;
@property long long unitsStyle;
@property long long formattingContext;
@property (copy) NSCalendar *calendar;
@property (copy) NSLocale *locale;

- (id)localizedStringForDate:(id)a0 relativeToDate:(id)a1;
- (id)localizedStringFromDateComponents:(id)a0;
- (void)dealloc;
- (id)localizedStringFromTimeInterval:(double)a0;
- (id)stringForObjectValue:(id)a0;
- (void)_clearFormatter;
- (id)_stringForCalendarUnit:(unsigned long long)a0 value:(long long)a1;
- (id)_stringFromDateComponents:(id)a0;

@end
