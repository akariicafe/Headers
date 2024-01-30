@class NSMutableArray;

@interface TSUDateParser : NSObject {
    NSMutableArray *mFormatCategories;
    struct __CFLocale { } *mLocale;
    BOOL mIsJapaneseLocale;
    struct __CFDateFormatter { } *mSpecialCaseFormatter;
}

+ (id)parserForDefaultLocale;

- (void)dealloc;
- (id)initWithLocale:(struct __CFLocale { } *)a0;
- (struct __CFDate { } *)newDateFromString:(struct __CFString { } *)a0 preferredFormatString:(struct __CFString { } *)a1 successfulFormatString:(const struct __CFString **)a2 tryAggressiveFormats:(BOOL)a3;
- (struct __CFDateFormatter { } *)specialCaseDateFormatterForLocale:(struct __CFLocale { } *)a0;
- (struct __CFDate { } *)newDateFromString:(struct __CFString { } *)a0 successfulFormatString:(const struct __CFString **)a1;
- (void)datePreferencesChanged:(id)a0;
- (void)addFormat:(id)a0 locale:(struct __CFLocale { } *)a1 formatCategoryMap:(id)a2;
- (struct __CFDate { } *)newDateFromStringTryingFormats:(struct __CFString { } *)a0 locale:(struct __CFLocale { } *)a1 formats:(id)a2 outSuccessfulFormatString:(const struct __CFString **)a3;
- (void)parseFormat:(id)a0 initialPattern:(id *)a1 separator:(unsigned short *)a2;

@end
