@class NSString, NSCalendar, NSNumberFormatter, NSDate;

@interface NSDateComponentsFormatter : NSFormatter <NSObservable, NSObserver> {
    void *_fmt;
    NSString *_fmtLocaleIdent;
    NSCalendar *_calendar;
    NSDate *_referenceDate;
    NSNumberFormatter *_unitFormatter;
    unsigned long long _allowedUnits;
    long long _formattingContext;
    long long _unitsStyle;
    unsigned long long _zeroFormattingBehavior;
    long long _maximumUnitCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _allowsFractionalUnits;
    BOOL _collapsesLargestUnit;
    BOOL _includesApproximationPhrase;
    BOOL _includesTimeRemainingPhrase;
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

- (void)receiveObservedValue:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)stringForObjectValue:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (void)finalize;
- (id)initWithCoder:(id)a0;
- (id)stringFromDate:(id)a0 toDate:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_mayDecorateAttributedStringForObjectValue:(id)a0;
- (void)dealloc;
- (id)stringFromTimeInterval:(double)a0;
- (id)init;
- (void)_ensureUnitFormatterWithLocale:(id)a0;
- (void)_NSDateComponentsFormatter_commonInit;
- (id)_calendarFromDateComponents:(id)a0;
- (id)_calendarOrCanonicalCalendar;
- (id)_canonicalizedDateComponents:(id)a0 withCalendar:(id)a1 usedUnits:(unsigned long long *)a2 withReferenceDate:(id)a3;
- (void)_ensureUnitFormatterWithLocale_alreadyLocked:(id)a0;
- (void)_flushFormatterCache_locked;
- (BOOL)_updateFormatterCacheIfNeeded_locked:(id)a0 unitsStyle:(long long)a1;
- (id)stringForObjectValue:(id)a0 withReferenceDate:(id)a1;
- (id)stringFromDateComponents:(id)a0;

@end
