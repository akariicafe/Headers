@class NSArray, NSString, NSLocale;

@interface CNDateComponentsFormatter : NSFormatter {
    NSArray *_lazyFormatterFutures;
    NSString *_dateFormatPlaceholderString;
}

@property (retain, nonatomic) NSLocale *locale;

+ (id)shortDayMonthYearDateFormatterWithLocale:(id)a0;
+ (id)formatterFuturesWithLocale:(id)a0;
+ (BOOL)shouldUseChinaSpecificFormattersForLocale:(id)a0;
+ (id)chineseRelatedGregorianYearMonthDayFormatter;
+ (id)chineseMonthDayFormatter;
+ (id)chineseMonthDayHanidayFormatter;
+ (id)chineseCyclicYearMonthDayFormatter;
+ (id)chineseRelatedGregorianYearMonthDayHanidayFormatter;
+ (id)chineseLongStyleRelatedGregorianYearMonthDayFormatter;
+ (id)longDayMonthYearDateFormatterWithLocale:(id)a0;
+ (id)shortDayMonthYearlessDateFormatterWithLocale:(id)a0;
+ (id)longDayMonthYearlessDateFormatterWithLocale:(id)a0;
+ (BOOL)shouldUseIslamicSpecificFormattersForLocale:(id)a0;
+ (id)dateFormatterWithYearFormat:(id)a0 hasLongFormat:(BOOL)a1 locale:(id)a2;
+ (id)os_log;

- (id)stringForObjectValue:(id)a0;
- (id)stringFromDateComponents:(id)a0;
- (id)dmyFormatString;
- (void)regenerateFormatterFutures;
- (id)dateFormatPlaceholderStringForLanguage:(id)a0;
- (id)arabicGregorianPlaceholderString;
- (BOOL)shouldUseArabicGregorianPlaceholderStringForLanguage:(id)a0;
- (BOOL)shouldUseArabicIslamicPlaceholderStringForLanguage:(id)a0;
- (id)arabicIslamicPlaceholderString;
- (id)placeholderStringWithLocalizedDay:(id)a0 month:(id)a1 year:(id)a2;
- (BOOL)shouldUseChinesePlaceholderString;
- (id)chinesePlaceholderStringWithDay:(id)a0 month:(id)a1 year:(id)a2;
- (id)placeholderSubstitutionStringWithDay:(unsigned long long)a0 month:(unsigned long long)a1 year:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)displayFormatterForComponents:(id)a0;
- (id)normalizedComponentsFromDate:(id)a0 calendar:(id)a1 timeZone:(id)a2;
- (unsigned long long)componentsToExtract;
- (id)dateComponentsFromString:(id)a0;
- (id)init;
- (id)dateFormatPlaceholderString;
- (BOOL)getObjectValue:(id *)a0 forString:(id)a1 errorDescription:(id *)a2;

@end
