@class NSMutableArray, OITSULocale;

@interface OITSUDateParser : NSObject {
    NSMutableArray *_formatCategories;
    OITSULocale *_locale;
    BOOL _isJapaneseLocale;
    struct __CFDateFormatter { } *_specialCaseFormatter;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLocale:(id)a0;
- (id)newDateFromString:(id)a0 preferredFormatString:(id)a1 successfulFormatString:(id *)a2 tryAggressiveFormats:(BOOL)a3;
- (void)p_addFormat:(id)a0 locale:(id)a1 formatCategoryMap:(id)a2;
- (id)formatStringsDictionary;
- (struct __CFDateFormatter { } *)specialCaseDateFormatterForLocale:(id)a0;
- (id)p_newDateFromStringTryingFormats:(id)a0 locale:(id)a1 formats:(id)a2 outSuccessfulFormatString:(id *)a3;
- (id)p_initialPatternParsingFormat:(id)a0 separator:(unsigned short *)a1;
- (id)newDateFromString:(id)a0 successfulFormatString:(id *)a1;

@end
