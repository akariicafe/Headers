@class NSString, NSMutableArray, NSCharacterSet;

@interface OITSUDurationLocaleSpecificStorage : NSObject

@property (readonly) NSString *weekLongSingularString;
@property (readonly) NSString *weekLongPluralString;
@property (readonly) NSString *weekMediumSingularString;
@property (readonly) NSString *weekMediumPluralString;
@property (readonly) NSString *weekShortString;
@property (readonly) NSString *dayLongSingularString;
@property (readonly) NSString *dayLongPluralString;
@property (readonly) NSString *dayMediumSingularString;
@property (readonly) NSString *dayMediumPluralString;
@property (readonly) NSString *dayShortString;
@property (readonly) NSString *hourLongSingularString;
@property (readonly) NSString *hourLongPluralString;
@property (readonly) NSString *hourMediumSingularString;
@property (readonly) NSString *hourMediumPluralString;
@property (readonly) NSString *hourShortString;
@property (readonly) NSString *minuteLongSingularString;
@property (readonly) NSString *minuteLongPluralString;
@property (readonly) NSString *minuteMediumSingularString;
@property (readonly) NSString *minuteMediumPluralString;
@property (readonly) NSString *minuteShortString;
@property (readonly) NSString *secondLongSingularString;
@property (readonly) NSString *secondLongPluralString;
@property (readonly) NSString *secondMediumSingularString;
@property (readonly) NSString *secondMediumPluralString;
@property (readonly) NSString *secondShortString;
@property (readonly) NSString *millisecondLongSingularString;
@property (readonly) NSString *millisecondLongPluralString;
@property (readonly) NSString *millisecondShortString;
@property (readonly) NSMutableArray *multiWordDurationUnitStrings;
@property (readonly) NSMutableArray *fullStopDurationUnitStrings;
@property (readonly) NSCharacterSet *alphabeticCharacterSet;
@property (readonly) NSCharacterSet *decimalDigitCharacterSet;
@property (readonly) NSCharacterSet *decimalDigitAndSeperatorsCharacterSet;
@property (readonly) NSCharacterSet *whitespaceCharacterSet;
@property (readonly) NSCharacterSet *emptyCharacterSet;
@property (readonly) NSCharacterSet *separatorPunctuationCharacterSet;
@property (readonly) NSCharacterSet *minusSignCharacterSet;
@property (readonly) NSCharacterSet *whitespaceAndNewlineCharacterSet;
@property (readonly) NSCharacterSet *specialDurationFormatCharacters;

+ (id)localeSpecificStorageForLocale:(id)a0;

- (id)initWithLocale:(id)a0;
- (void)dealloc;
- (void)addDurationUnit:(id)a0;

@end
