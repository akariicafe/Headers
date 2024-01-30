@class NSTimeZone, NSCalendar, NSString, NSLocale, NSObject;
@protocol OS_dispatch_semaphore;

@interface NSDateIntervalFormatter : NSFormatter {
    NSLocale *_locale;
    NSCalendar *_calendar;
    NSTimeZone *_timeZone;
    NSString *_dateTemplate;
    NSString *_dateTemplateFromStyles;
    void *_formatter;
    unsigned long long _dateStyle;
    unsigned long long _timeStyle;
    BOOL _modified;
    BOOL _useTemplate;
    NSObject<OS_dispatch_semaphore> *_lock;
    void *_reserved[4];
}

@property (copy) NSLocale *locale;
@property (copy) NSCalendar *calendar;
@property (copy) NSTimeZone *timeZone;
@property (copy) NSString *dateTemplate;
@property unsigned long long dateStyle;
@property unsigned long long timeStyle;

- (BOOL)isPartialStringValid:(id)a0 newEditingString:(id *)a1 errorDescription:(id *)a2;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (id)stringForObjectValue:(id)a0;
- (id)editingStringForObjectValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (unsigned long long)boundaryStyle;
- (id)_stringFromDate:(id)a0 toDate:(id)a1;
- (id)stringFromDateInterval:(id)a0;
- (void)setBoundaryStyle:(unsigned long long)a0;
- (id)attributedStringForObjectValue:(id)a0 withDefaultAttributes:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)stringFromDate:(id)a0 toDate:(id)a1;

@end
