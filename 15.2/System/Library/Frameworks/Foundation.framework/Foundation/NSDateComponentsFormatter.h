@class NSString, NSCalendar, NSNumberFormatter, NSDate;

@interface NSDateComponentsFormatter : NSFormatter <NSObservable, NSObserver> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    void *_fmt;
    void *_unused;
    NSString *_fmtLocaleIdent;
    NSCalendar *_calendar;
    NSDate *_referenceDate;
    NSNumberFormatter *_unitFormatter;
    unsigned long long _allowedUnits;
    long long _formattingContext;
    long long _unitsStyle;
    unsigned long long _zeroFormattingBehavior;
    long long _maximumUnitCount;
    BOOL _allowsFractionalUnits;
    BOOL _collapsesLargestUnit;
    BOOL _includesApproximationPhrase;
    BOOL _includesTimeRemainingPhrase;
    void *_reserved;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property long long unitsStyle;
@property unsigned long long allowedUnits;
@property unsigned long long zeroFormattingBehavior;
@property (copy) NSCalendar *calendar;
@property (copy) NSDate *referenceDate;
@property BOOL allowsFractionalUnits;
@property long long maximumUnitCount;
@property BOOL collapsesLargestUnit;
@property BOOL includesApproximationPhrase;
@property BOOL includesTimeRemainingPhrase;
@property long long formattingContext;

+ (id)localizedStringFromDateComponents:(id)a0 unitsStyle:(long long)a1;

- (id)stringForObjectValue:(id)a0;
- (id)_calendarOrCanonicalCalendar;
- (void)encodeWithCoder:(id)a0;
- (id)_canonicalizedDateComponents:(id)a0 withCalendar:(id)a1 usedUnits:(unsigned long long *)a2 withReferenceDate:(id)a3;
- (BOOL)_mayDecorateAttributedStringForObjectValue:(id)a0;
- (void)receiveObservedValue:(id)a0;
- (id)stringFromDateComponents:(id)a0;
- (void)finalize;
- (id)stringFromTimeInterval:(double)a0;
- (BOOL)_updateFormatterCacheIfNeeded_locked:(id)a0 unitsStyle:(long long)a1;
- (id)_calendarFromDateComponents:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_ensureUnitFormatterWithLocale:(id)a0;
- (void)dealloc;
- (id)stringFromDate:(id)a0 toDate:(id)a1;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (void)_NSDateComponentsFormatter_commonInit;
- (void)_flushFormatterCache_locked;
- (void)_ensureUnitFormatterWithLocale_alreadyLocked:(id)a0;
- (id)stringForObjectValue:(id)a0 withReferenceDate:(id)a1;

@end
