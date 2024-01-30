@class NSString;

@interface OITSUDateFormatter : NSObject {
    NSString *_dateOnlyFormatString;
    NSString *_timeOnlyFormatString;
    struct __CFDateFormatter { } *_fullDateFormatter;
}

+ (id)supportedDateFormatsForLocale:(id)a0;
+ (id)p_supportedDateFormatMatchingFormat:(id)a0 locale:(id)a1;
+ (id)p_supportedTimeFormatMatchingFormat:(id)a0 locale:(id)a1;
+ (id)supportedTimeFormatsForLocale:(id)a0;
+ (unsigned long long)p_DateTimeSplitLocationInFormatString:(id)a0;
+ (id)defaultDateTimeFormatForLocale:(id)a0;
+ (id)dateFormatStringSpecialSymbols;
+ (id)datePortionOfDateTimeFormatString:(id)a0;
+ (id)timePortionOfDateTimeFormatString:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLocale:(id)a0;

@end
