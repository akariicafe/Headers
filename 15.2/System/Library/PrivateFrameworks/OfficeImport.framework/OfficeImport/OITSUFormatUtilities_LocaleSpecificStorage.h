@class NSString;

@interface OITSUFormatUtilities_LocaleSpecificStorage : NSObject

@property (readonly) NSString *formatDecimalString;
@property (readonly) NSString *formatDecimalStringMinus;
@property (readonly) NSString *formatDecimalStringRedOnly;
@property (readonly) NSString *formatCurrencyString;
@property (readonly) NSString *formatCurrencyStringMinus;
@property (readonly) NSString *formatCurrencyStringRedOnly;
@property (readonly) NSString *formatPercentageString;
@property (readonly) NSString *formatPercentageStringMinus;
@property (readonly) NSString *formatPercentageStringRedOnly;
@property (readonly) NSString *formatScientificString;
@property (readonly) NSString *formatScientificStringMinus;
@property (readonly) NSString *formatScientificStringRedOnly;
@property (readonly) NSString *formatDateTimeString;
@property (readonly) NSString *formatDecimalStringWithParens;
@property (readonly) NSString *formatScientificStringWithParens;
@property (readonly) NSString *formatCurrencyStringWithParens;
@property (readonly) NSString *formatPercentageStringWithParens;

+ (id)localeSpecificStorageForLocale:(id)a0;

- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;

@end
